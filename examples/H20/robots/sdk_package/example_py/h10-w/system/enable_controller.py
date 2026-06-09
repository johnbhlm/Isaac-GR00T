import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_system = h10w.H10wSystem()
time.sleep(1)
print("=== 上半身控制器使能示例 ===")

ret_s = h10w_system.enableController(False)
ret_g, enable = h10w_system.isControllerEnabled()
print("当前上半身控制器使能状态: ", enable)
if ret_s == 0 and ret_g == 0 and enable == False:
    print("上半身禁用使能控制成功")
else:
    print("上半身禁用使能控制失败")

time.sleep(1)

ret_s = h10w_system.enableController(True)
ret_g, enable = h10w_system.isControllerEnabled()
print("当前上半身控制器使能状态: ", enable)
if ret_s == 0 and ret_g == 0 and enable == True:
    print("上半身使能控制成功")
else:
    print("上半身使能控制失败")
