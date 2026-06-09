# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

from __future__ import annotations

from dataclasses import dataclass
import importlib
import json
from pathlib import Path
from typing import Any, Protocol

import numpy as np


class H20RobotInterface(Protocol):
    """Minimal hardware API required by the GR00T H20 deployment client."""

    def connect(self) -> None: ...

    def close(self) -> None: ...

    def get_camera_frames(self) -> dict[str, np.ndarray]: ...

    def get_arm_joint_positions(self) -> tuple[np.ndarray, np.ndarray]: ...

    def get_gripper_positions(self) -> tuple[np.ndarray, np.ndarray]: ...

    def send_arm_joint_positions(self, left: np.ndarray, right: np.ndarray) -> None: ...

    def send_gripper_positions(self, left: np.ndarray, right: np.ndarray) -> None: ...

    def emergency_stop(self) -> None: ...

    def set_motion_mode(self, mode: str) -> None: ...


@dataclass
class DummyH20Robot:
    """Dry-run/smoke-test H20 interface that never touches robot hardware."""

    image_height: int = 480
    image_width: int = 640

    def __post_init__(self) -> None:
        self.left = np.zeros(7, dtype=np.float32)
        self.right = np.zeros(7, dtype=np.float32)
        self.left_gripper = np.ones(1, dtype=np.float32)
        self.right_gripper = np.ones(1, dtype=np.float32)
        self.connected = False

    def connect(self) -> None:
        self.connected = True
        print("[H20 dummy] connected")

    def close(self) -> None:
        self.connected = False
        print("[H20 dummy] closed")

    def get_camera_frames(self) -> dict[str, np.ndarray]:
        frame = np.zeros((self.image_height, self.image_width, 3), dtype=np.uint8)
        return {
            "primary_image": frame.copy(),
            "left_camera_image": frame.copy(),
            "right_camera_image": frame.copy(),
        }

    def get_arm_joint_positions(self) -> tuple[np.ndarray, np.ndarray]:
        return self.left.copy(), self.right.copy()

    def get_gripper_positions(self) -> tuple[np.ndarray, np.ndarray]:
        return self.left_gripper.copy(), self.right_gripper.copy()

    def send_arm_joint_positions(self, left: np.ndarray, right: np.ndarray) -> None:
        self.left = np.asarray(left, dtype=np.float32).reshape(7)
        self.right = np.asarray(right, dtype=np.float32).reshape(7)
        print(f"[H20 dummy] arm left={np.round(self.left, 4)} right={np.round(self.right, 4)}")

    def send_gripper_positions(self, left: np.ndarray, right: np.ndarray) -> None:
        self.left_gripper = np.asarray(left, dtype=np.float32).reshape(1)
        self.right_gripper = np.asarray(right, dtype=np.float32).reshape(1)
        print(
            "[H20 dummy] gripper "
            f"left={self.left_gripper.tolist()} right={self.right_gripper.tolist()}"
        )

    def emergency_stop(self) -> None:
        print("[H20 dummy] emergency stop")

    def set_motion_mode(self, mode: str) -> None:
        print(f"[H20 dummy] motion mode={mode}")


class ModuleH20Robot:
    """Adapter wrapper for a site-local H20 SDK module.

    The module must expose ``create_h20_robot_interface(config: dict)`` and return an object
    implementing :class:`H20RobotInterface`. This keeps the Thor client lightweight and avoids
    importing H20 SDK/ROS packages unless the real adapter is requested.
    """

    def __init__(self, module_name: str, config_path: str | None):
        module = importlib.import_module(module_name)
        config = _load_json_config(config_path)
        self.impl = module.create_h20_robot_interface(config)

    def __getattr__(self, name: str) -> Any:
        return getattr(self.impl, name)


def _load_json_config(config_path: str | None) -> dict[str, Any]:
    if config_path is None:
        return {}
    with Path(config_path).open("r", encoding="utf-8") as f:
        return json.load(f)


def make_h20_robot_interface(adapter: str, config_path: str | None = None) -> H20RobotInterface:
    """Create an H20 robot interface.

    ``adapter='dummy'`` is safe for smoke tests. Any other value is treated as an importable
    module name that provides ``create_h20_robot_interface`` for the local H20 SDK stack.
    """

    if adapter == "dummy":
        return DummyH20Robot()
    return ModuleH20Robot(adapter, config_path)
