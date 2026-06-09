import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

print("=== 底盘获取设置最大速度 ===")
h10w_chassis = h10w.H10wChassis()
time.sleep(1)
linear_velocity = 0.0
angular_velocity = 0.0
ret, (linear_velocity, angular_velocity) = h10w_chassis.getChassisMaxVel()
if ret != 0:
    print("Get chassis max velocity failed.")
    exit(-1)

print(
    "Get chassis max velocity successed. linear velocity:%f, angular velocity:%f."
    % (linear_velocity, angular_velocity)
)

ret = h10w_chassis.setChassisMaxVel(linear_velocity, angular_velocity)
if ret != 0:
    print("Set chassis max velocity failed.")
    exit(-1)

print("Set chassis max velocity successed.")
