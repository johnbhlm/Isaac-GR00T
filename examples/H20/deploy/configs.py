# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

from __future__ import annotations

from dataclasses import dataclass, field


@dataclass
class H20Task:
    """Keyboard-selectable H20 task description."""

    task_id: str
    instruction: str
    hand: str = "both"
    phase: str = "policy"


DEFAULT_TASKS: dict[str, H20Task] = {
    "1": H20Task("1", "Use the left hand to pick up the object.", hand="left", phase="pick"),
    "2": H20Task("2", "Use the right hand to pick up the object.", hand="right", phase="pick"),
    "3": H20Task("3", "Use both hands to pick up the object.", hand="both", phase="pick"),
    "4": H20Task("4", "Place the object at the target location.", hand="both", phase="place"),
    "5": H20Task("5", "Use the left hand to place the object.", hand="left", phase="place"),
    "6": H20Task("6", "Use the right hand to place the object.", hand="right", phase="place"),
    "7": H20Task("7", "Open the grippers and release the object.", hand="both", phase="release"),
    "8": H20Task("8", "Continue the current manipulation task.", hand="both", phase="policy"),
}


@dataclass
class H20DeployConfig:
    """Runtime configuration for the lightweight Thor-side H20 deployment client."""

    policy_host: str = "10.8.26.6"
    policy_port: int = 5555
    policy_timeout_ms: int = 30000
    policy_api_token: str | None = None
    control_hz: float = 30.0
    action_horizon: int = 8
    interpolation_steps: int = 1
    max_joint_step: float | None = None
    gripper_threshold: float | None = None
    robot_adapter: str = "dummy"
    robot_config: str | None = None
    dry_run: bool = False
    start_task: str = "8"
    language_key: str = "annotation.human.action.task_description"
    video_keys: tuple[str, str, str] = (
        "primary_image",
        "left_camera_image",
        "right_camera_image",
    )
    state_keys: tuple[str, str, str, str] = (
        "left_observation_state",
        "left_gripper_state",
        "right_observation_state",
        "right_gripper_state",
    )
    action_keys: tuple[str, str, str, str] = (
        "left_joint_action",
        "left_gripper",
        "right_joint_action",
        "right_gripper",
    )
    left_init_joints: tuple[float, ...] = field(default_factory=lambda: (0.0,) * 7)
    right_init_joints: tuple[float, ...] = field(default_factory=lambda: (0.0,) * 7)
    left_walk_joints: tuple[float, ...] = field(default_factory=lambda: (0.0,) * 7)
    right_walk_joints: tuple[float, ...] = field(default_factory=lambda: (0.0,) * 7)
    gripper_open: float = 1.0
    gripper_closed: float = 0.0

    def selected_task(self) -> H20Task:
        return DEFAULT_TASKS.get(self.start_task, DEFAULT_TASKS["8"])
