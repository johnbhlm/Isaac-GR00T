import humanoid_sdk_py
import humanoid_sdk_py.h2x as h2x
import time

system = h2x.H2xSystem()
time.sleep(1)
print("=== 上半身控制器使能示例 ===")

ret_s = system.enableController(False)
ret_g, enable = system.isControllerEnabled()
print("当前上半身控制器使能状态: ", enable)
if ret_s == 0 and ret_g == 0 and enable == False:
    print("上半身禁用使能控制成功")
else:
    print("上半身禁用使能控制失败")

time.sleep(1)

ret_s = system.enableController(True)
ret_g, enable = system.isControllerEnabled()
print("当前上半身控制器使能状态: ", enable)
if ret_s == 0 and ret_g == 0 and enable == True:
    print("上半身使能控制成功")
else:
    print("上半身使能控制失败")
