from __future__ import annotations

import traceback
import time
from typing import Any, Optional, TYPE_CHECKING

import numpy as np
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.action.server import ServerGoalHandle
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from vla.action import ActionVLA, ResetVLA
from vla.srv import GetHandState

from examples.H20.deploy.ai_agent.ai_agent_data import (
    ActionPick,
    ActionPlace,
    ActionReset,
    AiAgentData,
    HandType,
    TargetType,
)

if TYPE_CHECKING:
    from examples.H20.deploy.controller import H20VLA


PICK_CMD_ACTION_NAME = "pick_action"
PLACE_CMD_ACTION_NAME = "place_action"
RESET_ACTION_NAME = "reset_action"
GET_HAND_STATE_SERVICE_NAME = "get_hand_state"

ERROR_OK = 0
ERROR_EXCEPTION = -13
ERROR_VLA_IS_BUSY = -11


def _goal_uuid_to_str(uuid: Any) -> Optional[str]:
    if uuid is None:
        return None
    if isinstance(uuid, np.ndarray):
        return uuid.tobytes().hex()
    if isinstance(uuid, bytes):
        return uuid.hex()
    if hasattr(uuid, "hex"):
        try:
            return uuid.hex()
        except Exception:
            pass
    if hasattr(uuid, "tobytes"):
        try:
            return uuid.tobytes().hex()
        except Exception:
            pass
    try:
        return bytes(uuid).hex()
    except Exception:
        return str(uuid)


def _build_task_prompt(action: str, obj: str, location: str, hand: str) -> str:
    hand_str = f" with the {hand} hand" if hand in ("left", "right") else ""
    location_str = f" from the {location}" if action == "pick" and location else ""
    if action == "place" and location:
        location_str = f" on the {location}"
    return f"{action} up the {obj}{location_str}{hand_str}" if action == "pick" else f"place the {obj}{location_str}{hand_str}"


def _hand_type_to_str(gripper: HandType) -> str:
    if gripper == HandType.LEFT:
        return "left"
    if gripper == HandType.RIGHT:
        return "right"
    return "any"


class GraspFlowNode(Node):
    def __init__(self, vla: "H20VLA") -> None:
        super().__init__("grasp_flow_node")
        self._vla = vla
        self.ai_agent_data = AiAgentData(self.get_logger())

        callback_group = ReentrantCallbackGroup()
        self._pick_action_server = ActionServer(
            self,
            ActionVLA,
            PICK_CMD_ACTION_NAME,
            goal_callback=self._pick_action_goal_callback,
            execute_callback=self._pick_action_execute_callback,
            cancel_callback=self._cancel_action_callback,
            callback_group=callback_group,
        )
        self._place_action_server = ActionServer(
            self,
            ActionVLA,
            PLACE_CMD_ACTION_NAME,
            goal_callback=self._place_action_goal_callback,
            execute_callback=self._place_action_execute_callback,
            cancel_callback=self._cancel_action_callback,
            callback_group=callback_group,
        )
        self._reset_action_server = ActionServer(
            self,
            ResetVLA,
            RESET_ACTION_NAME,
            self._reset_callback,
            callback_group=callback_group,
        )
        self._get_hand_state_service = self.create_service(
            GetHandState,
            GET_HAND_STATE_SERVICE_NAME,
            self._get_hand_state_callback,
        )

        self.get_logger().info("GraspFlowNode ROS2 action servers started")

    # ------------------------------------------------------------------
    # Pick
    # ------------------------------------------------------------------
    def _pick_action_goal_callback(self, goal_request: ActionVLA.Goal) -> GoalResponse:
        self.get_logger().info("收到抓取命令")
        # 判断VLA是否具备执行条件
        can_execute = self._vla.can_execute()
        if not can_execute:
            self.get_logger().warn("当前机器人不具备抓取条件，请检查机器人模式")
            return GoalResponse.REJECT

        if not self._vla.is_idle():
            self.get_logger().warn("有任务正在执行，忽略新任务")
            return GoalResponse.REJECT

        a = ActionPick()
        a.request.req_id = str(goal_request.req_id)

        gripper_val = int(goal_request.gripper)
        if gripper_val == 0:
            a.request.gripper = HandType.ANY
        elif gripper_val == 1:
            a.request.gripper = HandType.LEFT
        elif gripper_val == 2:
            a.request.gripper = HandType.RIGHT
        else:
            self.get_logger().error(f"不支持的手臂: {goal_request.gripper}")
            return GoalResponse.REJECT

        a.request.object = str(goal_request.object)
        a.request.target_location = str(goal_request.target_location)

        target_type_val = int(goal_request.target_type)
        if target_type_val == 0:
            a.request.target_type = TargetType.ARTICLE
        elif target_type_val == 1:
            a.request.target_type = TargetType.PERSON
        else:
            self.get_logger().error(f"不支持的位置类型: {goal_request.target_type}")
            return GoalResponse.REJECT

        self.get_logger().info(
            f"抓取命令: req_id={a.request.req_id}, hand={_hand_type_to_str(a.request.gripper)}, "
            f"object={a.request.object}, location={a.request.target_location}"
        )

        self.ai_agent_data.action_pick = a
        self.ai_agent_data.action_pick_history.append(a)
        return GoalResponse.ACCEPT

    def _pick_action_execute_callback(self, goal_handle: ServerGoalHandle) -> ActionVLA.Result:
        a = self.ai_agent_data.action_pick
        try:
            a.goal_uuid_hex = _goal_uuid_to_str(goal_handle.goal_id.uuid)

            hand = _hand_type_to_str(a.request.gripper)
            prompt = _build_task_prompt("pick", a.request.object, a.request.target_location, hand)
            self.get_logger().info(f"构建prompt: {prompt}")

            self._vla.agent_pick_command_exec(prompt, hand)

        except Exception as e:
            self.get_logger().error(f"Agent pick执行失败: {e}\n{traceback.format_exc()}")
            a.response.result_code = ERROR_EXCEPTION
            a.response.result_msg = f"{ERROR_EXCEPTION}: exception"

        finally:
            response = ActionVLA.Result()
            response.result_code = a.response.result_code
            response.result_msg = a.response.result_msg
            self._finish_goal_handle(goal_handle, ERROR_OK == response.result_code, goal_handle.is_cancel_requested)
            self.get_logger().info(f"抓取命令完成, code={response.result_code}, msg={response.result_msg}")
            self.ai_agent_data.action_pick = None
            return response

    # ------------------------------------------------------------------
    # Place
    # ------------------------------------------------------------------
    def _place_action_goal_callback(self, goal_request: ActionVLA.Goal) -> GoalResponse:
        self.get_logger().info("收到放置命令")

        # 判断VLA是否具备执行条件
        can_execute = self._vla.can_execute()
        if not can_execute:
            self.get_logger().warn("当前机器人不具备抓取条件，请检查机器人模式")
            return GoalResponse.REJECT

        if not self._vla.is_idle():
            self.get_logger().warn("有任务正在执行，忽略新任务")
            return GoalResponse.REJECT

        a = ActionPlace()
        a.request.req_id = str(goal_request.req_id)

        gripper_val = int(goal_request.gripper)
        if gripper_val == 0:
            a.request.gripper = HandType.ANY
        elif gripper_val == 1:
            a.request.gripper = HandType.LEFT
        elif gripper_val == 2:
            a.request.gripper = HandType.RIGHT
        else:
            self.get_logger().error(f"不支持的手臂: {goal_request.gripper}")
            return GoalResponse.REJECT

        a.request.object = str(goal_request.object)
        a.request.target_location = str(goal_request.target_location)

        target_type_val = int(goal_request.target_type)
        if target_type_val == 0:
            a.request.target_type = TargetType.ARTICLE
        elif target_type_val == 1:
            a.request.target_type = TargetType.PERSON
        else:
            self.get_logger().error(f"不支持的位置类型: {goal_request.target_type}")
            return GoalResponse.REJECT

        self.get_logger().info(
            f"放置命令: req_id={a.request.req_id}, hand={_hand_type_to_str(a.request.gripper)}, "
            f"object={a.request.object}, location={a.request.target_location}"
        )

        self.ai_agent_data.action_place = a
        self.ai_agent_data.action_place_history.append(a)
        return GoalResponse.ACCEPT

    def _place_action_execute_callback(self, goal_handle: ServerGoalHandle) -> ActionVLA.Result:
        a = self.ai_agent_data.action_place
        try:
            a.goal_uuid_hex = _goal_uuid_to_str(goal_handle.goal_id.uuid)

            hand = _hand_type_to_str(a.request.gripper)
            prompt = _build_task_prompt("place", a.request.object, a.request.target_location, hand)
            self.get_logger().info(f"构建prompt: {prompt}")

            self._vla.agent_place_command_exec(prompt, hand)

        except Exception as e:
            self.get_logger().error(f"Agent place执行失败: {e}\n{traceback.format_exc()}")
            a.response.result_code = ERROR_EXCEPTION
            a.response.result_msg = f"{ERROR_EXCEPTION}: exception"

        finally:
            response = ActionVLA.Result()
            response.result_code = a.response.result_code
            response.result_msg = a.response.result_msg
            self._finish_goal_handle(goal_handle, ERROR_OK == response.result_code, goal_handle.is_cancel_requested)
            self.get_logger().info(f"放置命令完成, code={response.result_code}, msg={response.result_msg}")
            self.ai_agent_data.action_place = None
            return response

    # ------------------------------------------------------------------
    # Cancel
    # ------------------------------------------------------------------
    def _cancel_action_callback(self, goal_handle: ServerGoalHandle) -> CancelResponse:
        self.get_logger().info(f"收到取消命令 uuid={_goal_uuid_to_str(goal_handle.goal_id.uuid)}")

        try:
            uuid_hex = _goal_uuid_to_str(goal_handle.goal_id.uuid)
            if self.ai_agent_data.action_pick is not None and self.ai_agent_data.action_pick.goal_uuid_hex == uuid_hex:
                self.ai_agent_data.action_pick.cancel_flag = True
                self._vla._task_done_requested = True
                return CancelResponse.ACCEPT
            if self.ai_agent_data.action_place is not None and self.ai_agent_data.action_place.goal_uuid_hex == uuid_hex:
                self.ai_agent_data.action_place.cancel_flag = True
                self._vla._task_done_requested = True
                return CancelResponse.ACCEPT
            self.get_logger().info(f"目标 {uuid_hex} 未找到")
            return CancelResponse.REJECT

        except Exception as e:
            self.get_logger().error(f"取消异常: {e}\n{traceback.format_exc()}")
            return CancelResponse.REJECT

    # ------------------------------------------------------------------
    # Reset
    # ------------------------------------------------------------------
    def _reset_callback(self, goal_handle: ServerGoalHandle) -> ResetVLA.Result:
        self.get_logger().info(f"收到重置命令 req_id={goal_handle.request.req_id}")

        response = ResetVLA.Result()
        try:
            self.ai_agent_data.action_reset = ActionReset()
            self.ai_agent_data.action_reset_history.append(self.ai_agent_data.action_reset)
            # 互斥与排队逻辑（含 init 阶段不可打断 / infer 阶段接管）在 vla 内部完成
            self._vla.agent_reset_command_exec()
            response.result_code = ERROR_OK

        except Exception as e:
            self.get_logger().error(f"重置执行失败: {e}\n{traceback.format_exc()}")
            response.result_code = ERROR_EXCEPTION
            response.result_msg = str(e)

        finally:
            self._finish_goal_handle(goal_handle, ERROR_OK == response.result_code, goal_handle.is_cancel_requested)
            self.ai_agent_data.action_reset = None
            return response

    # ------------------------------------------------------------------
    # GetHandState service
    # ------------------------------------------------------------------
    def _get_hand_state_callback(
        self, request: GetHandState.Request, response: GetHandState.Response
    ) -> GetHandState.Response:
        self.get_logger().info(f"收到获取手状态请求 req_id={request.req_id}")
        response.result_code = 0
        response.result_msg = ""

        hs = self._vla.hand_state
        response.left_state = 1 if hs["left"]["holding"] else 0
        response.right_state = 1 if hs["right"]["holding"] else 0
        response.left_item = ""
        response.right_item = ""
        return response

    # ------------------------------------------------------------------
    # Goal handle helpers
    # ------------------------------------------------------------------
    def _finish_goal_handle(
        self, goal_handle: ServerGoalHandle, action_success: bool, action_canceled: bool
    ) -> None:
        try:
            if goal_handle.status == 2:  # STATUS_EXECUTING
                if action_canceled:
                    goal_handle.canceled()
                elif action_success:
                    goal_handle.succeed()
                else:
                    goal_handle.abort()
            elif goal_handle.status == 3:  # STATUS_CANCELING
                if action_canceled:
                    goal_handle.canceled()
            elif goal_handle.status == 1:  # STATUS_ACCEPTED
                pass
            else:
                goal_handle.abort()
        except Exception as e:
            self.get_logger().error(f"goal handle exception: {e}\n{traceback.format_exc()}")
            goal_handle.abort()
