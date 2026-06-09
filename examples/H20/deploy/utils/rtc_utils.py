from __future__ import annotations

import numpy as np


def apply_action_drop(actions, drop_steps: int):
    actions = np.asarray(actions)
    drop_steps = int(max(0, drop_steps))
    if actions.ndim != 2 or drop_steps <= 0:
        return actions
    if drop_steps >= len(actions):
        return actions[-1:].copy()
    return actions[drop_steps:].copy()


def build_rtc_action_chunk(old_remaining, new_actions, frozen_steps: int, overlap_steps: int, blend_alpha: float, gripper_dims: tuple[int, ...]):
    old_remaining = np.asarray(old_remaining)
    new_actions = np.asarray(new_actions)
    if old_remaining.ndim != 2 or new_actions.ndim != 2:
        return new_actions.copy()
    if old_remaining.shape[1] != new_actions.shape[1]:
        return new_actions.copy()
    if len(new_actions) == 0:
        return old_remaining.copy()
    if len(old_remaining) == 0:
        return new_actions.copy()

    frozen_steps = min(max(0, int(frozen_steps)), len(old_remaining))
    overlap_steps = max(0, int(overlap_steps))
    blend_alpha = float(np.clip(blend_alpha, 0.0, 1.0))
    skip = set(int(i) for i in gripper_dims)

    frozen = old_remaining[:frozen_steps].copy()
    old_blend = old_remaining[frozen_steps:frozen_steps+overlap_steps]
    blend_len = min(len(old_blend), len(new_actions), overlap_steps)
    if blend_len <= 0:
        return np.concatenate([frozen, new_actions.copy()], axis=0)

    blended = new_actions[:blend_len].copy()
    ramp = np.linspace(0.0, 1.0, blend_len, endpoint=True, dtype=np.float32).reshape(-1, 1)
    mix = np.clip(ramp * blend_alpha, 0.0, 1.0)

    dim = new_actions.shape[1]
    arm_indices = [i for i in range(dim) if i not in skip]
    if arm_indices:
        old_arm = old_blend[:blend_len, arm_indices]
        new_arm = blended[:, arm_indices]
        blended[:, arm_indices] = (1.0 - mix) * old_arm + mix * new_arm

    tail = new_actions[blend_len:].copy()
    return np.concatenate([frozen, blended, tail], axis=0)
