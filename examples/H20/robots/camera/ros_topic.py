from __future__ import annotations

import queue
import threading
from typing import Any

import cv2
import numpy as np
import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, HistoryPolicy, QoSProfile, ReliabilityPolicy
from sensor_msgs.msg import CompressedImage

CAMERA_NAMES = ("head", "left", "right")
CAMERA_TOPICS = {
    "head": "/head/d435i/color/image_raw/compressed",
    "left": "/left_hand/d405/color/image_raw/compressed",
    "right": "/right_hand/d405/color/image_raw/compressed",
}

def replace_latest(queue_obj: Any, payload: tuple) -> None:
    try:
        while True:
            queue_obj.get_nowait()
    except queue.Empty:
        pass
    try:
        queue_obj.put_nowait(payload)
    except queue.Full:
        pass


class RosTopicCameraSubscriber(Node):
    def __init__(self, image_queues: dict[str, Any]):
        super().__init__("h20_camera_topic_subscriber")
        self.image_queues = image_queues
        self.image_subscriptions = []
        self.lock = threading.Lock()
        self.latest_raw = {name: None for name in CAMERA_NAMES}
        self.last_decoded_seq = {name: 0 for name in CAMERA_NAMES}
        self.rx_seq = {name: 0 for name in CAMERA_NAMES}
        self.stop_event = threading.Event()
        self.camera_cb_group = ReentrantCallbackGroup()
        self.camera_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
            history=HistoryPolicy.KEEP_LAST,
            depth=1,
        )

        for camera_name, topic in CAMERA_TOPICS.items():
            subscription = self.create_subscription(
                CompressedImage,
                topic,
                lambda msg, name=camera_name: self._image_callback(name, msg),
                self.camera_qos,
                callback_group=self.camera_cb_group,
            )
            self.image_subscriptions.append(subscription)

        self.decode_thread = threading.Thread(target=self._decode_loop, daemon=True)
        self.decode_thread.start()

    def _image_callback(self, camera_name: str, msg: CompressedImage) -> None:
        with self.lock:
            self.rx_seq[camera_name] += 1
            self.latest_raw[camera_name] = (
                self.rx_seq[camera_name],
                bytes(msg.data),
                msg.header.stamp.sec,
                msg.header.stamp.nanosec,
            )

    def _decode_loop(self) -> None:
        while not self.stop_event.is_set():
            did_work = False
            for camera_name in CAMERA_NAMES:
                with self.lock:
                    item = self.latest_raw[camera_name]

                if item is None:
                    continue

                seq, raw_bytes, sec, nanosec = item
                if seq <= self.last_decoded_seq[camera_name]:
                    continue

                did_work = True
                np_buffer = np.frombuffer(raw_bytes, dtype=np.uint8)
                image = cv2.imdecode(np_buffer, cv2.IMREAD_COLOR)
                self.last_decoded_seq[camera_name] = seq
                if image is None:
                    continue
                replace_latest(self.image_queues[camera_name], (image, sec, nanosec))

            if not did_work:
                time_sleep = 0.002
            else:
                time_sleep = 0.001
            self.stop_event.wait(time_sleep)

    def close(self) -> None:
        self.stop_event.set()
        try:
            self.decode_thread.join(timeout=1.0)
        except Exception:
            pass


class ImageTopicClient:
    def __init__(self, image_queues: dict[str, Any]):
        self.image_queues = image_queues
        self.images = {name: None for name in CAMERA_NAMES}

    def _refresh(self) -> None:
        for camera_name in CAMERA_NAMES:
            image_queue = self.image_queues[camera_name]
            while True:
                try:
                    image, _, _ = image_queue.get_nowait()
                    self.images[camera_name] = image
                except queue.Empty:
                    break

    def get_latest_images(self) -> tuple[np.ndarray | None, np.ndarray | None, np.ndarray | None]:
        self._refresh()
        return tuple(self.images[name] for name in CAMERA_NAMES)


def camera_ros_process_main(image_queues: dict[str, Any], stop_event: Any) -> None:
    rclpy.init()
    node = RosTopicCameraSubscriber(image_queues=image_queues)
    executor = MultiThreadedExecutor()
    executor.add_node(node)

    def _stop_watcher() -> None:
        stop_event.wait()
        try:
            executor.shutdown()
        except Exception:
            pass

    try:
        watcher = threading.Thread(target=_stop_watcher, daemon=True)
        watcher.start()
        executor.spin()
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
