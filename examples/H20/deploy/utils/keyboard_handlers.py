from __future__ import annotations

import threading
import time
from functools import partial
from typing import TYPE_CHECKING, Any, Callable
import sys
import termios
import tty
import select
# from pynput import keyboard

# if TYPE_CHECKING:
#     from pynput.keyboard import Key
import os
USE_PYNPUT = bool(os.environ.get("DISPLAY"))

if USE_PYNPUT:
    from pynput import keyboard
else:
    keyboard = None


def _spawn(target: Callable[[], None]) -> None:
    threading.Thread(target=target, daemon=True).start()


# def on_press(vla: Any, key: "Key | Any") -> None:
#     """
#     Keyboard callback for H20VLA deployment. Acquires VLA state via the new state
#     machine (try_acquire_for_pick_place / try_acquire_for_reset) before spawning
#     worker threads, so keystrokes never block the pynput listener.
#     """
#     try:
#         if key.char in vla.task_list.keys():
#             vla.current_task_id = key.char
#             vla.task_switch_flag = True
#         elif key.char == "w":
#             if vla.robot_mode != "walk":
#                 vla.robot_mode = "walk"
#                 print("=== h2x 进入走跑模式示例 ===")
#                 ret = vla.high_level.WalkRunMode()
#                 if ret == 0:
#                     print("进入走跑模式请求成功")
#                 else:
#                     print("进入走跑模式请求失败，错误码：", ret)
#                 ret = vla.high_level.waitRunning(5000)
#                 if ret == 0:
#                     print("模式切换成功")
#                 else:
#                     print("模式切换失败，错误码：", ret)
#         elif key.char == "q":
#             if vla.robot_mode == "walk":
#                 print("=== h2x 移动控制示例 ===")
#                 ret = vla.high_level.Move(-0.1, 0.6, 0.0, False)
#                 if ret == 0:
#                     print("移动控制成功")
#                 else:
#                     print("移动控制失败，错误码：", ret)
#                 time.sleep(1.0)
#                 ret = vla.high_level.Move(-0.1, 0.6, 0.0, False)
#                 time.sleep(1.0)
#                 ret = vla.high_level.Move(0.7, 0.0, 0.0, False)
#         elif key.char == "h":
#             if vla.robot_mode != "homie":
#                 vla.robot_mode = "homie"
#                 print("=== h2x 进入主从模式示例 ===")
#                 ret = vla.high_level.ClimbStairsMode()
#                 if ret == 0:
#                     print("进入主从模式请求成功")
#                 else:
#                     print("进入主从模式请求失败，错误码：", ret)
#                 ret = vla.high_level.waitRunning(5000)
#                 if ret == 0:
#                     print("模式切换成功")
#                 else:
#                     print("模式切换失败，错误码：", ret)
#                 if vla.try_acquire_for_pick_place():
#                     def _run() -> None:
#                         try:
#                             vla.move_arm_to_init()
#                             vla.infer()
#                         finally:
#                             vla._release_to_idle()
#                     _spawn(_run)
#                 else:
#                     print("[INFO] VLA busy, skip auto-init after mode switch")
#         elif key.char == "i":
#             if vla.try_acquire_for_pick_place():
#                 def _run() -> None:
#                     try:
#                         vla.move_arm_to_init()
#                         vla.infer()
#                     finally:
#                         vla._release_to_idle()
#                 _spawn(_run)
#             else:
#                 print("[INFO] VLA busy, ignore 'i'")
#         elif key.char == "p":
#             def _run() -> None:
#                 if not vla.acquire_for_reset_blocking():
#                     print("[INFO] reset already pending, ignore 'p'")
#                     return
#                 try:
#                     vla.move_arm_to_walk()
#                 finally:
#                     vla._release_to_idle()
#             _spawn(_run)
#         elif key.char == "f":
#             vla._task_done_requested = True
#             print("[INFO] Task done flag set.")
#     except AttributeError:
#         if key == keyboard.Key.space:
#             vla.stop_program = True

class SimpleKey:
    def __init__(self, char):
        self.char = char

class SSHKeyboardListener:
    def __init__(self, on_press=None):
        self.on_press = on_press
        self.running = False
        self.thread = None

    def _get_char(self, timeout=0.1):
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)
        try:
            tty.setraw(fd)
            rlist, _, _ = select.select([sys.stdin], [], [], timeout)
            if rlist:
                return sys.stdin.read(1)
            return None
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

    def _loop(self):
        while self.running:
            ch = self._get_char(0.1)
            if ch is None:
                continue

            if ch == '\x03':  # Ctrl+C
                raise KeyboardInterrupt

            key = SimpleKey(ch)
            if self.on_press is not None:
                self.on_press(key)

    def start(self):
        self.running = True
        self.thread = threading.Thread(target=self._loop, daemon=True)
        self.thread.start()
        return self

    def stop(self):
        self.running = False
        if self.thread is not None:
            self.thread.join(timeout=1.0)
            
def on_press(vla: Any, key: "Key | Any") -> None:
    """
    Keyboard callback for H20VLA deployment. Expects `vla` to expose the same
    attributes/methods as H20VLA (task_list, flags, high_level, start_exclusive_thread, move_arm_pose).
    """
    try:
        if key.char in vla.task_list.keys():
            vla.current_task_id = key.char
            vla.task_switch_flag = True
        elif key.char == "w":
            if vla.robot_mode != "walk" and vla._walk_arm_finish:
                vla.robot_mode = "walk"
                print("=== h2x 进入走跑模式示例 ===")
                ret = vla.high_level.WalkRunMode()
                if ret == 0:
                    print("进入走跑模式请求成功")
                else:
                    print("进入走跑模式请求失败，错误码：", ret)
                ret = vla.high_level.waitRunning(5000)
                if ret == 0:
                    print("模式切换成功")
                else:
                    print("模式切换失败，错误码：", ret)
                vla._init_flag = False
                vla._deploy_flag = False
                vla._walk_arm_flag = False
                vla._deploy_started = False
        elif key.char == "q":
            if vla.robot_mode == "walk":
                print("=== h2x 移动控制示例 ===")
                ret = vla.high_level.Move(-0.1, 0.6, 0.0, False)
                if ret == 0:
                    print("移动控制成功")
                else:
                    print("移动控制失败，错误码：", ret)
                time.sleep(1.0)
                ret = vla.high_level.Move(-0.1, 0.6, 0.0, False)
                time.sleep(1.0)
                ret = vla.high_level.Move(0.7, 0.0, 0.0, False)
        elif key.char == "h":
            if vla.robot_mode != "homie":
                vla.robot_mode = "homie"
                print("=== h2x 进入走跑模式示例 ===")
                ret = vla.high_level.ClimbStairsMode()
                if ret == 0:
                    print("进入走跑模式请求成功")
                else:
                    print("进入走跑模式请求失败，错误码：", ret)
                ret = vla.high_level.waitRunning(5000)
                if ret == 0:
                    print("模式切换成功")
                else:
                    print("模式切换失败，错误码：", ret)
                if not vla._deploy_flag and vla._walk_arm_finish:
                    vla.start_exclusive_thread(
                        partial(vla.move_arm_pose, "init"), "init"
                    )
        elif key.char == "i":
            if vla.trainsition_flag:
                vla.trainsition_flag = False
            if not vla._deploy_flag and not vla._walk_arm_flag:
                vla._init_flag = True
                vla.start_exclusive_thread(partial(vla.move_arm_pose, "init"), "init")
        elif key.char == "p":
            if not vla._init_flag:
                vla._deploy_flag = False
                vla._deploy_started = False
                vla.start_exclusive_thread(partial(vla.move_arm_pose, "walk"), "walk_arm")
        elif key.char == "f":
            vla.task_done_flag = True
            print("[INFO] Task done flag set.")
    except AttributeError:
        if key.char == " ":
            vla.stop_program = True

def make_on_press(vla: Any) -> Callable[..., None]:
    return partial(on_press, vla) 
