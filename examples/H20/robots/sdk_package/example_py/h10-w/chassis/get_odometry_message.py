import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w

print("=== Get Chassis Odometry Message ===")
h10w_chassis = h10w.H10wChassis()
ret, tuple_data = h10w_chassis.getOdometryMessage()
if ret != 0:
    print("get odometry message failed.")
    exit(-1)

cur_time, cur_mileage = tuple_data
print("get odometry message success.")
print(
    f"chassis odometry message: current time:{cur_time}, current mileage:{cur_mileage}"
)
