from __future__ import annotations

from collections import deque
import queue
import struct
import threading
import time
import zlib
from typing import Any

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.qos import DurabilityPolicy, HistoryPolicy, QoSProfile, ReliabilityPolicy
from h2x.msg import GripperCmd, GripperState


LEFT_GRIPPER_CLOSE_POS = 0.123
RIGHT_GRIPPER_CLOSE_POS = 0.120


class GripperCommandInterface:
    def set_gripper(self, position: float) -> None:
        raise NotImplementedError

    def set_left_right_gripper(self, position_left: float, position_right: float) -> None:
        raise NotImplementedError

    def get_gripper_q(self) -> tuple[float | None, float | None, float | None]:
        return None, None, None

    def set_left_gripper(self, position: float) -> None:
        _, right_q, _ = self.get_gripper_q()
        if right_q is None:
            right_q = 0.01
        self.set_left_right_gripper(position, right_q)

    def set_right_gripper(self, position: float) -> None:
        left_q, _, _ = self.get_gripper_q()
        if left_q is None:
            left_q = 0.01
        self.set_left_right_gripper(left_q, position)

    def open_gripper(self) -> None:
        self.set_gripper(0.01)

    def open_left_gripper(self) -> None:
        self.set_left_gripper(0.01)

    def open_right_gripper(self) -> None:
        self.set_right_gripper(0.01)

    def close_gripper(self) -> None:
        self.set_gripper(0.1)

    def close_left_gripper(self) -> None:
        self.set_left_gripper(LEFT_GRIPPER_CLOSE_POS)

    def close_right_gripper(self) -> None:
        self.set_right_gripper(RIGHT_GRIPPER_CLOSE_POS)


class GripperSmoother:
    def __init__(self, window: int = 10):
        self.buffer = deque(maxlen=window)
        self.stable_value = 0

    def update(self, value: float) -> int:
        self.buffer.append(value)
        if len(self.buffer) == self.buffer.maxlen:
            if all(x == 1 for x in self.buffer):
                self.stable_value = 1
            elif all(x == 0 for x in self.buffer):
                self.stable_value = 0
        return self.stable_value


class GripperCmdCRC:
    __MOTOR_CMD_FMT = "<BB f H H f 4I"

    @classmethod
    def compute_crc(cls, cmd: GripperCmd) -> int:
        data = b""
        for i in range(2):
            motor = cmd.motor_cmd[i]
            data += struct.pack(
                cls.__MOTOR_CMD_FMT,
                motor.mode,
                motor.operation_mode,
                motor.q,
                motor.dq_percentage,
                motor.acc_percentage,
                motor.finger_force,
                motor.reserved[0],
                motor.reserved[1],
                motor.reserved[2],
                motor.reserved[3],
            )
        return zlib.crc32(data) & 0xFFFFFFFF


class GripperController(Node, GripperCommandInterface):
    def __init__(self):
        super().__init__("gripper_controller")

        publisher_qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.VOLATILE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )
        subscriber_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )

        self.gripper_pub = self.create_publisher(GripperCmd, "/gripper_cmd", publisher_qos)
        self.gripper_sub = self.create_subscription(
            GripperState,
            "/gripper_state",
            self.gripper_state_callback,
            subscriber_qos,
        )

        self.gripper_state = None
        self.timer = None

    def gripper_state_callback(self, msg: GripperState):
        self.gripper_state = msg

    def _create_default_command(self) -> GripperCmd:
        cmd = GripperCmd()
        for i in range(2):
            cmd.motor_cmd[i].mode = 1
            cmd.motor_cmd[i].operation_mode = 1
            cmd.motor_cmd[i].dq_percentage = 100
            cmd.motor_cmd[i].acc_percentage = 100
            cmd.motor_cmd[i].finger_force = 39.0
            cmd.motor_cmd[i].reserved = [0, 0, 0, 0]
        return cmd

    def create_gripper_command(self, position: float) -> GripperCmd:
        cmd = self._create_default_command()
        cmd.motor_cmd[0].q = position
        cmd.motor_cmd[1].q = position
        cmd.crc = GripperCmdCRC.compute_crc(cmd)
        return cmd

    def create_left_gripper_command(self, position: float) -> GripperCmd:
        cmd = self._create_default_command()
        cmd.motor_cmd[0].q = position
        cmd.crc = GripperCmdCRC.compute_crc(cmd)
        return cmd

    def create_right_gripper_command(self, position: float) -> GripperCmd:
        cmd = self._create_default_command()
        cmd.motor_cmd[1].q = position
        cmd.crc = GripperCmdCRC.compute_crc(cmd)
        return cmd

    def create_left_right_gripper_command(self, position_left: float, position_right: float) -> GripperCmd:
        cmd = self._create_default_command()
        cmd.motor_cmd[0].q = position_left
        cmd.motor_cmd[1].q = position_right
        cmd.crc = GripperCmdCRC.compute_crc(cmd)
        return cmd

    def set_gripper(self, position: float) -> None:
        self.gripper_pub.publish(self.create_gripper_command(position))

    def set_left_right_gripper(self, position_left: float, position_right: float) -> None:
        self.gripper_pub.publish(self.create_left_right_gripper_command(position_left, position_right))

    def set_left_gripper(self, position: float) -> None:
        self.gripper_pub.publish(self.create_left_gripper_command(position))

    def set_right_gripper(self, position: float) -> None:
        self.gripper_pub.publish(self.create_right_gripper_command(position))

    def get_gripper_q(self) -> tuple[float | None, float | None, float | None]:
        if self.gripper_state is None:
            return None, None, None
        left_q = float(self.gripper_state.motor_state[0].q)
        right_q = float(self.gripper_state.motor_state[1].q)
        return left_q, right_q, None


class GripperIPCClient(GripperCommandInterface):
    def __init__(self, cmd_queue: Any, state_queue: Any):
        self.cmd_queue = cmd_queue
        self.state_queue = state_queue
        self.state_lock = threading.Lock()
        self.left_q: float | None = None
        self.right_q: float | None = None
        self.last_state_time: float | None = None
        self.stop_event = threading.Event()
        self.state_thread = threading.Thread(target=self._state_loop, daemon=True)
        self.state_thread.start()

    def _state_loop(self) -> None:
        while not self.stop_event.is_set():
            try:
                msg = self.state_queue.get(timeout=0.1)
            except queue.Empty:
                continue
            if msg.get("type") == "stop":
                return
            if msg.get("type") != "gripper_state":
                continue
            with self.state_lock:
                self.left_q = msg.get("left_q")
                self.right_q = msg.get("right_q")
                self.last_state_time = msg.get("t")

    def close(self) -> None:
        self.stop_event.set()
        try:
            self.cmd_queue.put_nowait({"type": "stop"})
        except Exception:
            pass

    def get_gripper_q(self):
        with self.state_lock:
            return self.left_q, self.right_q, self.last_state_time

    def _send_cmd(self, payload: dict[str, Any]) -> None:
        try:
            self.cmd_queue.put_nowait(payload)
        except Exception:
            try:
                while True:
                    self.cmd_queue.get_nowait()
            except Exception:
                pass
            try:
                self.cmd_queue.put_nowait(payload)
            except Exception:
                pass

    def set_gripper(self, position: float) -> None:
        self._send_cmd({"type": "set_all", "position": float(position)})

    def set_left_right_gripper(self, position_left: float, position_right: float) -> None:
        self._send_cmd({"type": "set_lr", "left": float(position_left), "right": float(position_right)})


def gripper_ros_process_main(cmd_queue: Any, state_queue: Any) -> None:
    rclpy.init()
    node = GripperController()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()

    last_sent_state: tuple[float | None, float | None] = (None, None)
    active_cmd: dict[str, Any] | None = None
    try:
        while True:
            newest = None
            while True:
                try:
                    newest = cmd_queue.get_nowait()
                except queue.Empty:
                    break

            if newest is not None:
                typ = newest.get("type")
                if typ == "stop":
                    break
                if typ in {"set_lr", "set_all"}:
                    active_cmd = newest

            if active_cmd is not None:
                typ = active_cmd.get("type")
                if typ == "set_lr":
                    node.set_left_right_gripper(float(active_cmd["left"]), float(active_cmd["right"]))
                elif typ == "set_all":
                    node.set_gripper(float(active_cmd["position"]))

            if node.gripper_state is not None:
                left_q = float(node.gripper_state.motor_state[0].q)
                right_q = float(node.gripper_state.motor_state[1].q)
                current = (left_q, right_q)
                if current != last_sent_state:
                    try:
                        while True:
                            state_queue.get_nowait()
                    except queue.Empty:
                        pass
                    state_queue.put(
                        {
                            "type": "gripper_state",
                            "t": time.time(),
                            "left_q": left_q,
                            "right_q": right_q,
                        }
                    )
                    last_sent_state = current
            time.sleep(0.001)
    finally:
        try:
            executor.shutdown()
        except Exception:
            pass
        try:
            node.destroy_node()
        except Exception:
            pass
        if rclpy.ok():
            rclpy.shutdown()
