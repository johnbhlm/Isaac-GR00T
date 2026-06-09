from __future__ import annotations

import cv2
from gr00t.policy.server_client import PolicyClient
import numpy as np


class GrootH20ModelClient:
    """
    GR00T policy client wrapper for H20 real-robot deployment.

    This class is the only model-interface replacement for StarVLA.
    It keeps StarVLA runner/controller/action_executor unchanged by returning:
        {"raw_actions": np.ndarray[T, 16], "info": dict}
    """

    def __init__(
        self,
        host: str,
        port: int,
        image_size=(224, 224),
        action_horizon: int = 16,
        bgr_to_rgb: bool = True,
        timeout_ms: int = 30000,
        debug: bool = False,
        **kwargs,
    ):
        self.host = host
        self.port = int(port)
        self.image_size = tuple(image_size)
        self.action_horizon = int(action_horizon)
        self.bgr_to_rgb = bool(bgr_to_rgb)
        self.timeout_ms = int(timeout_ms)
        self.debug = bool(debug)

        # Keep this compatible across slightly different PolicyClient signatures.
        try:
            self.client = PolicyClient(
                host=self.host,
                port=self.port,
                timeout_ms=self.timeout_ms,
            )
        except TypeError:
            self.client = PolicyClient(host=self.host, port=self.port)

        if not self.client.ping():
            raise RuntimeError(f"Cannot connect to GR00T PolicyServer at {self.host}:{self.port}")

        print(f"[GrootH20ModelClient] connected to GR00T server {self.host}:{self.port}")

    def _prepare_image(self, img: np.ndarray) -> np.ndarray:
        img = np.asarray(img)

        if img.ndim != 3 or img.shape[-1] != 3:
            raise ValueError(f"Expected HWC image with 3 channels, got shape={img.shape}")

        if self.image_size is not None:
            img = cv2.resize(img, self.image_size, interpolation=cv2.INTER_AREA)

        if img.dtype != np.uint8:
            img = np.clip(img, 0, 255).astype(np.uint8)

        # StarVLA/OpenCV camera path is normally BGR; GR00T should receive RGB.
        if self.bgr_to_rgb:
            img = img[..., ::-1].copy()

        return img

    def _split_state(self, state: np.ndarray):
        state = np.asarray(state, dtype=np.float32).reshape(-1)

        # Preferred state from ObservationBuilder:
        # left_arm[7] + left_gripper[1] + right_arm[7] + right_gripper[1]
        if state.shape[0] == 16:
            left_arm = state[0:7]
            left_gripper = state[7:8]
            right_arm = state[8:15]
            right_gripper = state[15:16]

        # Compatibility if copied StarVLA code only returns left_arm + right_arm.
        elif state.shape[0] == 14:
            left_arm = state[0:7]
            right_arm = state[7:14]
            left_gripper = np.zeros((1,), dtype=np.float32)
            right_gripper = np.zeros((1,), dtype=np.float32)

        else:
            raise ValueError(f"Unexpected H20 state dim={state.shape[0]}, expected 14 or 16")

        return left_arm, left_gripper, right_arm, right_gripper

    def _build_obs(self, example: dict) -> dict:
        if example is None:
            raise ValueError("example is None")
        if "image" not in example or len(example["image"]) != 3:
            raise ValueError("example['image'] must be [img_top, img_left, img_right]")
        if "state" not in example:
            raise ValueError("example must contain 'state'")
        if "lang" not in example:
            raise ValueError("example must contain 'lang'")

        img_top, img_left, img_right = example["image"]

        img_top = self._prepare_image(img_top)
        img_left = self._prepare_image(img_left)
        img_right = self._prepare_image(img_right)

        left_arm, left_gripper, right_arm, right_gripper = self._split_state(example["state"])
        task = str(example["lang"])

        # These keys were verified with the running H20 GR00T PolicyServer.
        obs = {
            "video": {
                "primary_image": img_top[None, None, ...],
                "left_camera_image": img_left[None, None, ...],
                "right_camera_image": img_right[None, None, ...],
            },
            "state": {
                "left_observation_state": left_arm[None, None, :],
                "right_observation_state": right_arm[None, None, :],
                "left_gripper_state": left_gripper[None, None, :],
                "right_gripper_state": right_gripper[None, None, :],
            },
            "language": {
                "annotation.human.action.task_description": [[task]],
            },
        }

        if self.debug:
            for key, value in obs["video"].items():
                print("[GR00T obs video]", key, value.shape, value.dtype)
            for key, value in obs["state"].items():
                print("[GR00T obs state]", key, value.shape, value.dtype)
            print("[GR00T obs language]", task)

        return obs

    def _convert_action(self, action: dict) -> np.ndarray:
        required = [
            "left_joint_action",
            "left_gripper",
            "right_joint_action",
            "right_gripper",
        ]
        missing = [key for key in required if key not in action]
        if missing:
            raise KeyError(f"Missing GR00T action keys: {missing}; available={list(action.keys())}")

        left = np.asarray(action["left_joint_action"], dtype=np.float32)
        left_gripper = np.asarray(action["left_gripper"], dtype=np.float32)
        right = np.asarray(action["right_joint_action"], dtype=np.float32)
        right_gripper = np.asarray(action["right_gripper"], dtype=np.float32)

        if left.ndim != 3 or left.shape[-1] != 7:
            raise ValueError(f"Bad left_joint_action shape: {left.shape}")
        if right.ndim != 3 or right.shape[-1] != 7:
            raise ValueError(f"Bad right_joint_action shape: {right.shape}")
        if left_gripper.ndim != 3 or left_gripper.shape[-1] != 1:
            raise ValueError(f"Bad left_gripper shape: {left_gripper.shape}")
        if right_gripper.ndim != 3 or right_gripper.shape[-1] != 1:
            raise ValueError(f"Bad right_gripper shape: {right_gripper.shape}")

        left = left[0]
        left_gripper = left_gripper[0]
        right = right[0]
        right_gripper = right_gripper[0]

        horizon = min(
            left.shape[0],
            left_gripper.shape[0],
            right.shape[0],
            right_gripper.shape[0],
            self.action_horizon,
        )

        raw_actions = np.zeros((horizon, 16), dtype=np.float32)
        raw_actions[:, 0:7] = left[:horizon]
        raw_actions[:, 7:8] = left_gripper[:horizon]
        raw_actions[:, 8:15] = right[:horizon]
        raw_actions[:, 15:16] = right_gripper[:horizon]

        if not np.all(np.isfinite(raw_actions)):
            raise ValueError(f"GR00T returned NaN/Inf raw_actions: {raw_actions}")

        if self.debug:
            print(
                "[GR00T raw_actions]",
                raw_actions.shape,
                "min=",
                float(raw_actions.min()),
                "max=",
                float(raw_actions.max()),
            )

        return raw_actions

    def step(self, example: dict, step: int = 0, **kwargs) -> dict:
        obs = self._build_obs(example)
        action, info = self.client.get_action(obs)
        raw_actions = self._convert_action(action)
        return {"raw_actions": raw_actions, "info": info}


# Compatibility with copied StarVLA code.
ModelClient = GrootH20ModelClient
