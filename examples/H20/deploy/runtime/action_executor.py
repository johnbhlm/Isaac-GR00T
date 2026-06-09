# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

from __future__ import annotations

from dataclasses import dataclass
from typing import Any

import numpy as np


@dataclass
class H20ActionStep:
    """One executable H20 action in absolute joint/gripper units."""

    left_joints: np.ndarray
    left_gripper: np.ndarray
    right_joints: np.ndarray
    right_gripper: np.ndarray


class H20ActionExecutor:
    """Converts GR00T action chunks to H20 robot commands and sends them."""

    def __init__(
        self,
        action_keys: tuple[str, str, str, str],
        interpolation_steps: int = 1,
        max_joint_step: float | None = None,
        gripper_threshold: float | None = None,
        dry_run: bool = False,
    ):
        self.action_keys = action_keys
        self.interpolation_steps = max(1, interpolation_steps)
        self.max_joint_step = max_joint_step
        self.gripper_threshold = gripper_threshold
        self.dry_run = dry_run

    def decode_chunk(
        self, action_chunk: dict[str, Any], horizon: int | None = None
    ) -> list[H20ActionStep]:
        left_key, left_gripper_key, right_key, right_gripper_key = self.action_keys
        left = np.asarray(action_chunk[left_key][0], dtype=np.float32)
        left_gripper = np.asarray(action_chunk[left_gripper_key][0], dtype=np.float32)
        right = np.asarray(action_chunk[right_key][0], dtype=np.float32)
        right_gripper = np.asarray(action_chunk[right_gripper_key][0], dtype=np.float32)
        steps = min(left.shape[0], right.shape[0], left_gripper.shape[0], right_gripper.shape[0])
        if horizon is not None:
            steps = min(steps, horizon)
        return [
            H20ActionStep(
                left_joints=np.asarray(left[t], dtype=np.float32).reshape(7),
                left_gripper=self._format_gripper(left_gripper[t]),
                right_joints=np.asarray(right[t], dtype=np.float32).reshape(7),
                right_gripper=self._format_gripper(right_gripper[t]),
            )
            for t in range(steps)
        ]

    def execute_step(self, robot: Any, step: H20ActionStep) -> None:
        left_joints, right_joints = self._limit_joint_step(robot, step)
        if self.dry_run:
            print(
                "[dry-run] action "
                f"left={np.round(left_joints, 4)} right={np.round(right_joints, 4)} "
                f"gripper=({step.left_gripper.tolist()}, {step.right_gripper.tolist()})"
            )
            return
        robot.send_arm_joint_positions(left_joints, right_joints)
        robot.send_gripper_positions(step.left_gripper, step.right_gripper)

    def execute_pose(
        self,
        robot: Any,
        left_joints: np.ndarray,
        right_joints: np.ndarray,
        left_gripper: float | None = None,
        right_gripper: float | None = None,
    ) -> None:
        left = np.asarray(left_joints, dtype=np.float32).reshape(7)
        right = np.asarray(right_joints, dtype=np.float32).reshape(7)
        cur_left, cur_right = robot.get_arm_joint_positions()
        for alpha in np.linspace(0.0, 1.0, self.interpolation_steps + 1, dtype=np.float32)[1:]:
            cmd_left = (1.0 - alpha) * np.asarray(cur_left, dtype=np.float32) + alpha * left
            cmd_right = (1.0 - alpha) * np.asarray(cur_right, dtype=np.float32) + alpha * right
            if not self.dry_run:
                robot.send_arm_joint_positions(cmd_left, cmd_right)
            else:
                print(f"[dry-run] pose alpha={alpha:.2f} left={cmd_left} right={cmd_right}")
        if left_gripper is not None or right_gripper is not None:
            cur_lg, cur_rg = robot.get_gripper_positions()
            lg = cur_lg if left_gripper is None else np.asarray([left_gripper], dtype=np.float32)
            rg = cur_rg if right_gripper is None else np.asarray([right_gripper], dtype=np.float32)
            if not self.dry_run:
                robot.send_gripper_positions(lg, rg)

    def _limit_joint_step(self, robot: Any, step: H20ActionStep) -> tuple[np.ndarray, np.ndarray]:
        left_target = np.asarray(step.left_joints, dtype=np.float32).reshape(7)
        right_target = np.asarray(step.right_joints, dtype=np.float32).reshape(7)
        if self.max_joint_step is None:
            return left_target, right_target
        cur_left, cur_right = robot.get_arm_joint_positions()
        cur_left = np.asarray(cur_left, dtype=np.float32).reshape(7)
        cur_right = np.asarray(cur_right, dtype=np.float32).reshape(7)
        left_delta = np.clip(left_target - cur_left, -self.max_joint_step, self.max_joint_step)
        right_delta = np.clip(right_target - cur_right, -self.max_joint_step, self.max_joint_step)
        return cur_left + left_delta, cur_right + right_delta

    def _format_gripper(self, target: np.ndarray) -> np.ndarray:
        arr = np.asarray(target, dtype=np.float32).reshape(1)
        if self.gripper_threshold is not None:
            arr = (arr > self.gripper_threshold).astype(np.float32)
        return arr
