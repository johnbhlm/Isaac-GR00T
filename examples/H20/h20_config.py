# Copyright (c) 2026
# H20 / H2X custom embodiment modality config for Isaac-GR00T N1.7.
#
# Save as:
#   examples/H20/h20_config.py
#
# Dataset expected:
#   /home/bao.he/Code/dataset/h20/lerobot_h20_0325_1_l
#
# This config matches meta/modality.json keys:
#   video:
#     primary_image        -> original_key: head
#     left_camera_image    -> original_key: left_wrist
#     right_camera_image   -> original_key: right_wrist
#
#   state:
#     left_observation_state   -> state[15:22], 7 dim
#     left_gripper_state       -> state[29:30], 1 dim
#     right_observation_state  -> state[22:29], 7 dim
#     right_gripper_state      -> state[30:31], 1 dim
#
#   action:
#     left_joint_action    -> action[0:7],   7 dim
#     left_gripper         -> action[7:8],   1 dim
#     right_joint_action   -> action[8:15],  7 dim
#     right_gripper        -> action[15:16], 1 dim
#
# Note:
#   action[16:17] is done_flag in the raw dataset. For the first training
#   smoke test, we intentionally exclude done_flag from action prediction.

from gr00t.configs.data.embodiment_configs import register_modality_config
from gr00t.data.embodiment_tags import EmbodimentTag
from gr00t.data.types import (
    ActionConfig,
    ActionFormat,
    ActionRepresentation,
    ActionType,
    ModalityConfig,
)


# Keep the horizon consistent with your training/eval command.
# If you train with --action-horizon 16, use range(0, 16).
# If you train with --action-horizon 8, change this to range(0, 8).
ACTION_HORIZON = 16


h20_config = {
    # -------------------------------------------------------------------------
    # Video modalities
    # -------------------------------------------------------------------------
    # Keys must match the "video" keys in dataset meta/modality.json, not the
    # raw video folder names. In your modality.json:
    #   primary_image      -> original_key "head"
    #   left_camera_image  -> original_key "left_wrist"
    #   right_camera_image -> original_key "right_wrist"
    #
    # Use current frame only for the first smoke test.
    # Later you can try delta_indices=[-15, 0] like DROID/base examples.
    "video": ModalityConfig(
        delta_indices=[0],
        modality_keys=[
            "primary_image",
            "left_camera_image",
            "right_camera_image",
        ],
    ),

    # -------------------------------------------------------------------------
    # State / proprioception modalities
    # -------------------------------------------------------------------------
    # These keys must match the "state" keys in dataset meta/modality.json.
    # Total effective state dim here:
    #   left_observation_state  7
    #   left_gripper_state      1
    #   right_observation_state 7
    #   right_gripper_state     1
    # total = 16
    "state": ModalityConfig(
        delta_indices=[0],
        modality_keys=[
            "left_observation_state",
            "left_gripper_state",
            "right_observation_state",
            "right_gripper_state",
        ],
    ),

    # -------------------------------------------------------------------------
    # Action modalities
    # -------------------------------------------------------------------------
    # These keys must match the "action" keys in dataset meta/modality.json.
    #
    # Total predicted action dim:
    #   left_joint_action   7
    #   left_gripper        1
    #   right_joint_action  7
    #   right_gripper       1
    # total = 16
    #
    # We exclude done_flag for the first version.
    #
    # Representation choice:
    #   - joint actions: RELATIVE
    #   - grippers: ABSOLUTE
    #
    # This mirrors the common GR00T pattern:
    #   joint-like motion is relative/delta
    #   gripper target is absolute
    "action": ModalityConfig(
    delta_indices=list(range(0, ACTION_HORIZON)),
    modality_keys=[
        "left_joint_action",
        "left_gripper",
        "right_joint_action",
        "right_gripper",
    ],
    action_configs=[
        ActionConfig(
            rep=ActionRepresentation.RELATIVE,
            type=ActionType.NON_EEF,
            format=ActionFormat.DEFAULT,
            state_key="left_observation_state",
        ),
        ActionConfig(
            rep=ActionRepresentation.ABSOLUTE,
            type=ActionType.NON_EEF,
            format=ActionFormat.DEFAULT,
            state_key="left_gripper_state",
        ),
        ActionConfig(
            rep=ActionRepresentation.RELATIVE,
            type=ActionType.NON_EEF,
            format=ActionFormat.DEFAULT,
            state_key="right_observation_state",
        ),
        ActionConfig(
            rep=ActionRepresentation.ABSOLUTE,
            type=ActionType.NON_EEF,
            format=ActionFormat.DEFAULT,
            state_key="right_gripper_state",
        ),
    ],
),

    # -------------------------------------------------------------------------
    # Language / task annotation
    # -------------------------------------------------------------------------
    # Your modality.json currently has:
    #   "annotation": {
    #       "human.action.task_description": {
    #           "original_key": "task_index"
    #       }
    #   }
    #
    # So the modality key here must be:
    #   annotation.human.action.task_description
    #
    # If this later reports language/key errors, check meta/tasks.jsonl and
    # whether GR00T maps task_index -> textual task description correctly.
    "language": ModalityConfig(
        delta_indices=[0],
        modality_keys=[
            "annotation.human.action.task_description",
        ],
    ),
}


# For custom robot embodiments, always register as NEW_EMBODIMENT.
# The official GR00T custom embodiment guide follows this pattern.
register_modality_config(
    h20_config,
    embodiment_tag=EmbodimentTag.NEW_EMBODIMENT,
)
