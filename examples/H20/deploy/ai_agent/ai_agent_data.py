import time
from dataclasses import dataclass, field
from enum import Enum
from typing import Any, List, Optional


LEFT_SIDE = "left"
RIGHT_SIDE = "right"
ANY_SIDE = "any"


class HandType(Enum):
    ANY = 0
    LEFT = 1
    RIGHT = 2


class TargetType(Enum):
    ARTICLE = 0
    PERSON = 1


@dataclass
class ActionPickRequest:
    req_id: str = "0"
    gripper: HandType = HandType.ANY
    object: str = ""
    target_type: TargetType = TargetType.ARTICLE
    target_location: str = ""


@dataclass
class ActionPickResponse:
    result_code: int = 0
    result_msg: str = ""


@dataclass
class ActionPickStatus:
    progress: float = 0.0
    feedback_msg: str = ""


@dataclass
class ActionPick:
    request: ActionPickRequest = field(default_factory=ActionPickRequest)
    response: ActionPickResponse = field(default_factory=ActionPickResponse)
    goal_uuid_hex: str = ""
    status: ActionPickStatus = field(default_factory=ActionPickStatus)
    time: float = field(default_factory=time.time)
    hand_by_command: str = ""
    hand_by_config: str = ""
    hand_by_holding_state: str = ""
    hand_by_inference_server_detection: str = ""
    cancel_flag: bool = False
    full_object: str = ""

    def is_pick(self) -> bool:
        return True

    def is_place(self) -> bool:
        return False

    def get_hand_side(self) -> str:
        if LEFT_SIDE == self.hand_by_command or RIGHT_SIDE == self.hand_by_command:
            return self.hand_by_command
        if LEFT_SIDE == self.hand_by_config or RIGHT_SIDE == self.hand_by_config:
            return self.hand_by_config
        if LEFT_SIDE == self.hand_by_holding_state or RIGHT_SIDE == self.hand_by_holding_state:
            return self.hand_by_holding_state
        if LEFT_SIDE == self.hand_by_inference_server_detection or RIGHT_SIDE == self.hand_by_inference_server_detection:
            return self.hand_by_inference_server_detection
        return ANY_SIDE

    def set_progress(self, progress: float, feedback_msg: str) -> None:
        self.status.progress = progress
        self.status.feedback_msg = feedback_msg


@dataclass
class ActionPlaceRequest:
    req_id: str = "0"
    gripper: HandType = HandType.ANY
    object: str = ""
    target_type: TargetType = TargetType.ARTICLE
    target_location: str = ""
    prompt: str = ""


@dataclass
class ActionPlaceResponse:
    result_code: int = 0
    result_msg: str = ""


@dataclass
class ActionPlaceStatus:
    progress: float = 0.0
    feedback_msg: str = ""


@dataclass
class ActionPlace:
    request: ActionPlaceRequest = field(default_factory=ActionPlaceRequest)
    response: ActionPlaceResponse = field(default_factory=ActionPlaceResponse)
    goal_uuid_hex: str = ""
    status: ActionPlaceStatus = field(default_factory=ActionPlaceStatus)
    time: float = field(default_factory=time.time)
    hand_by_command: str = ""
    hand_by_holding_state: str = ""
    cancel_flag: bool = False

    def is_pick(self) -> bool:
        return False

    def is_place(self) -> bool:
        return True

    def get_hand_side(self) -> str:
        if LEFT_SIDE == self.hand_by_command or RIGHT_SIDE == self.hand_by_command:
            return self.hand_by_command
        if LEFT_SIDE == self.hand_by_holding_state or RIGHT_SIDE == self.hand_by_holding_state:
            return self.hand_by_holding_state
        return ANY_SIDE

    def set_progress(self, progress: float, feedback_msg: str) -> None:
        self.status.progress = progress
        self.status.feedback_msg = feedback_msg


@dataclass
class ActionResetRequest:
    req_id: str = "0"


@dataclass
class ActionResetResponse:
    result_code: int = 0
    result_msg: str = ""


@dataclass
class ActionResetStatus:
    progress: float = 0.0
    feedback_msg: str = ""


@dataclass
class ActionReset:
    request: ActionResetRequest = field(default_factory=ActionResetRequest)
    response: ActionResetResponse = field(default_factory=ActionResetResponse)
    goal_uuid_hex: str = ""
    status: ActionResetStatus = field(default_factory=ActionResetStatus)
    time: float = field(default_factory=time.time)


@dataclass
class ServiceQueryHandStateRequest:
    req_id: str = "0"


@dataclass
class ServiceQueryHandStateResponse:
    result_code: int = 0
    result_msg: str = ""
    left_state: int = 0
    right_state: int = 0
    left_item: str = ""
    right_item: str = ""


@dataclass
class ServiceQueryHandState:
    request: ServiceQueryHandStateRequest
    response: ServiceQueryHandStateResponse
    time: float = field(default_factory=time.time)


class AiAgentData:
    MAX_HISTORY_SIZE = 100

    def __init__(self, _logger: Any) -> None:
        self._logger = _logger
        self.action_pick: Optional[ActionPick] = None
        self.action_place: Optional[ActionPlace] = None
        self.action_reset: Optional[ActionReset] = None
        self.service_query_hand_state: Optional[ServiceQueryHandState] = None
        self.action_pick_history: List[ActionPick] = []
        self.action_place_history: List[ActionPlace] = []
        self.action_reset_history: List[ActionReset] = []
        self.service_query_hand_state_history: List[ServiceQueryHandState] = []
        self.action_type: str = ""

    def get_last_action_pick(self) -> Optional[ActionPick]:
        return self.action_pick_history[-1] if self.action_pick_history else None

    def get_last_action_place(self) -> Optional[ActionPlace]:
        return self.action_place_history[-1] if self.action_place_history else None
