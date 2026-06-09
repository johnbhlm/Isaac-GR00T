# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

from __future__ import annotations

from dataclasses import dataclass
from typing import Any

import numpy as np


@dataclass
class H20Observation:
    """Raw H20 observation before GR00T batch/time formatting."""

    images: dict[str, np.ndarray]
    left_joints: np.ndarray
    right_joints: np.ndarray
    left_gripper: np.ndarray
    right_gripper: np.ndarray


def _as_float32_vector(value: Any, expected_dim: int, name: str) -> np.ndarray:
    arr = np.asarray(value, dtype=np.float32).reshape(-1)
    if arr.shape[0] != expected_dim:
        raise ValueError(f"{name} must have {expected_dim} values, got shape {arr.shape}")
    return arr


def _as_uint8_rgb(image: np.ndarray, name: str) -> np.ndarray:
    arr = np.asarray(image)
    if arr.ndim != 3 or arr.shape[-1] != 3:
        raise ValueError(f"{name} must be an HxWx3 RGB image, got shape {arr.shape}")
    if arr.dtype != np.uint8:
        arr = np.clip(arr, 0, 255).astype(np.uint8)
    return arr


class H20ObservationBuilder:
    """Builds GR00T server observations from H20 camera/proprioceptive readings."""

    def __init__(
        self,
        video_keys: tuple[str, str, str],
        state_keys: tuple[str, str, str, str],
        language_key: str,
    ):
        self.video_keys = video_keys
        self.state_keys = state_keys
        self.language_key = language_key

    def read_robot(self, robot: Any) -> H20Observation:
        frames = robot.get_camera_frames()
        left_joints, right_joints = robot.get_arm_joint_positions()
        left_gripper, right_gripper = robot.get_gripper_positions()
        return H20Observation(
            images={key: _as_uint8_rgb(frames[key], key) for key in self.video_keys},
            left_joints=_as_float32_vector(left_joints, 7, "left_joints"),
            right_joints=_as_float32_vector(right_joints, 7, "right_joints"),
            left_gripper=_as_float32_vector(left_gripper, 1, "left_gripper"),
            right_gripper=_as_float32_vector(right_gripper, 1, "right_gripper"),
        )

    def to_policy_input(self, observation: H20Observation, instruction: str) -> dict[str, Any]:
        """Return PolicyClient input with B=1 and T=1 dimensions."""

        left_state_key, left_gripper_key, right_state_key, right_gripper_key = self.state_keys
        return {
            "video": {key: observation.images[key][None, None, ...] for key in self.video_keys},
            "state": {
                left_state_key: observation.left_joints[None, None, ...],
                left_gripper_key: observation.left_gripper[None, None, ...],
                right_state_key: observation.right_joints[None, None, ...],
                right_gripper_key: observation.right_gripper[None, None, ...],
            },
            "language": {self.language_key: [[instruction]]},
        }
