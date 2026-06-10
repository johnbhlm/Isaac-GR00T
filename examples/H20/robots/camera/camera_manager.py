"""Camera manager that receives images via ROS2/DDS topic subscriptions.

A separate camera driver node publishes images; this node only subscribes.
"""

from __future__ import annotations

import time
from typing import Dict, List, Optional, Tuple

import cv2
import numpy as np
from cv_bridge import CvBridge
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image


class CameraManager(Node):
    def __init__(
        self,
        node_name: str = "camera_manager",
        camera_topics: Optional[Dict[str, str]] = None,
    ) -> None:
        super().__init__(node_name)

        self._bridge = CvBridge()
        self._group = ReentrantCallbackGroup()

        if camera_topics is None:
            camera_topics = {
                "head_camera": "/head/camera/color/image_raw",
                "left_wrist_camera": "/left_wrist/camera/color/image_raw",
                "right_wrist_camera": "/right_wrist/camera/color/image_raw",
            }

        self._camera_topics = camera_topics
        self._latest_images: Dict[str, Optional[np.ndarray]] = {}
        self._frame_counts: Dict[str, int] = {}
        self._last_stats_time: float = time.time()

        for camera_name in self._camera_topics:
            self._latest_images[camera_name] = None
            self._frame_counts[camera_name] = 0

        self._init_subscriptions()

    def _init_subscriptions(self) -> None:
        for camera_name, topic_name in self._camera_topics.items():
            self.create_subscription(
                Image,
                topic_name,
                lambda msg, name=camera_name: self._image_callback(msg, name),
                qos_profile_sensor_data,
                callback_group=self._group,
            )
            self.get_logger().info(f"Subscribed {camera_name} -> {topic_name}")

    def _image_callback(self, msg: Image, camera_name: str) -> None:
        try:

            img = self._bridge.imgmsg_to_cv2(
                msg,
                desired_encoding="passthrough"
            )

            if img is None:
                self.get_logger().error(
                    f"{camera_name}: cv image is None"
                )
                return

            if img.size == 0:
                self.get_logger().error(
                    f"{camera_name}: cv image empty"
                )
                return

            # # ROS rgb8 -> OpenCV BGR
            # if msg.encoding == "rgb8":
            #     img = cv2.cvtColor(
            #         img,
            #         cv2.COLOR_RGB2BGR
            #     )

            self._latest_images[camera_name] = img.copy()
            self._frame_counts[camera_name] += 1

        except Exception as e:
            self.get_logger().error(
                f"{camera_name} conversion error: {repr(e)}"
            )

    def GetImage(self, camera_name: str, resize_to: Optional[Tuple[int, int]] = None) -> Optional[np.ndarray]:
        img = self._latest_images.get(camera_name)
        if img is None:
            return None
        img = img.copy()
        if resize_to:
            img = cv2.resize(img, resize_to, interpolation=cv2.INTER_AREA)
        return img

    def GetImages(self, resize_to: Optional[Tuple[int, int]] = None) -> Dict[str, Optional[np.ndarray]]:
        return {name: self.GetImage(name, resize_to) for name in self._camera_topics}

    def GetCameraNames(self) -> List[str]:
        return list(self._camera_topics.keys())

    def IsCameraConnected(self, camera_name: str) -> bool:
        return self._latest_images.get(camera_name) is not None

    def WaitForImages(self, timeout: float = 10.0, required_cameras: Optional[List[str]] = None) -> bool:
        if required_cameras is None:
            required_cameras = list(self._camera_topics.keys())

        start = time.time()
        while time.time() - start < timeout:
            if all(self.IsCameraConnected(c) for c in required_cameras):
                self.get_logger().info(f"All cameras ready ({time.time() - start:.2f}s)")
                return True
            time.sleep(0.1)

        failed = [c for c in required_cameras if not self.IsCameraConnected(c)]
        self.get_logger().warn(f"Timeout waiting for cameras: {failed}")
        return False
