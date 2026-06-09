from __future__ import annotations

from typing import Any, Literal

from examples.H20.robots.gripper.gripper_control import (
    LEFT_GRIPPER_CLOSE_POS,
    RIGHT_GRIPPER_CLOSE_POS,
)

TaskHand = Literal["left", "right"] | None
TaskAction = Literal["pick", "place"] | None


def get_task_info(task_id: str) -> dict[str, TaskHand | TaskAction]:
    """
    Map numeric task id to hand and action.
    hand: left/right; action: pick/place
    """
    left_pick_ids = {"1", "3"}
    left_place_ids = {"2", "4"}
    right_pick_ids = {"5", "7"}
    right_place_ids = {"6", "8"}

    if task_id in left_pick_ids:
        return {"hand": "left", "action": "pick"}
    if task_id in left_place_ids:
        return {"hand": "left", "action": "place"}
    if task_id in right_pick_ids:
        return {"hand": "right", "action": "pick"}
    if task_id in right_place_ids:
        return {"hand": "right", "action": "place"}
    return {"hand": None, "action": None}


def mark_task_done(task_id: str, hand_state: dict[str, dict[str, Any]]) -> None:
    """
    After user confirms task done: update holding / gripper lock from task type.
    """
    info = get_task_info(task_id)
    hand = info["hand"]
    action = info["action"]

    if hand is None or action is None:
        print("[WARN] Unknown task, cannot mark done.")
        return

    if action == "pick":
        hand_state[hand]["holding"] = True
        hand_state[hand]["gripper_locked"] = True
        if hand == "left":
            hand_state[hand]["locked_gripper_pos"] = LEFT_GRIPPER_CLOSE_POS
        else:
            hand_state[hand]["locked_gripper_pos"] = RIGHT_GRIPPER_CLOSE_POS
        print(
            f"[TASK DONE] {hand} pick finished, gripper locked at "
            f"{hand_state[hand]['locked_gripper_pos']:.4f}"
        )
    elif action == "place":
        hand_state[hand]["holding"] = False
        hand_state[hand]["gripper_locked"] = False
        hand_state[hand]["locked_gripper_pos"] = 0.01
        print(f"[TASK DONE] {hand} place finished, gripper unlocked and holding cleared.")



def mark_task_done_by_hand(hand: str, action: str, hand_state: dict[str, dict[str, Any]]) -> None:
    hand = hand.lower()
    action = action.lower()
    if hand not in {"left", "right"} or action not in {"pick", "place"}:
        print(f"[WARN] Unknown hand/action: hand={hand}, action={action}")
        return
    if action == "pick":
        hand_state[hand]["holding"] = True
        hand_state[hand]["gripper_locked"] = True
        hand_state[hand]["locked_gripper_pos"] = LEFT_GRIPPER_CLOSE_POS if hand == "left" else RIGHT_GRIPPER_CLOSE_POS
        print(f"[TASK DONE] {hand} pick finished, gripper locked.")
    else:
        hand_state[hand]["holding"] = False
        hand_state[hand]["gripper_locked"] = False
        hand_state[hand]["locked_gripper_pos"] = 0.01
        print(f"[TASK DONE] {hand} place finished, gripper unlocked and holding cleared.")

def should_apply_gripper_lock(
    hand: str,
    task_id: str,
    hand_state: dict[str, dict[str, Any]],
) -> bool:
    info = get_task_info(task_id)
    active_hand = info["hand"]
    active_action = info["action"]

    if task_id == "" or active_hand is None or active_action is None:
        return hand_state[hand]["holding"] and hand_state[hand]["gripper_locked"]
    if not hand_state[hand]["holding"]:
        return False
    if not hand_state[hand]["gripper_locked"]:
        return False
    if hand == active_hand and active_action == "place":
        return False
    return True
