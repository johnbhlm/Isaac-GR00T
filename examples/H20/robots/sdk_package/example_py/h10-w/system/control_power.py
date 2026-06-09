import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 上半身上电/下点控制及状态获取示例 ===")

ret = h10w_system.controlPower(humanoid_sdk_py.PowerState.POWER_ON)
if ret == 0:
    print("上半身上电控制成功")
else:
    print("上半身上电控制失败")

time.sleep(0.05)

ret, state = h10w_system.statusPower()
if ret == 0 and state is not None:
    print(
        "获取上半身电源状态：",
        "上电" if state == humanoid_sdk_py.PowerState.POWER_ON else "下电",
    )
else:
    print("获取上半身电源状态失败")

time.sleep(1)

ret = h10w_system.controlPower(humanoid_sdk_py.PowerState.POWER_OFF)
if ret == 0:
    print("上半身上电控制成功")
else:
    print("上半身上电控制失败")

time.sleep(0.05)

ret, state = h10w_system.statusPower()
if ret == 0 and state is not None:
    print(
        "获取上半身电源状态：",
        "上电" if state == humanoid_sdk_py.PowerState.POWER_ON else "下电",
    )
else:
    print("获取上半身电源状态失败")
