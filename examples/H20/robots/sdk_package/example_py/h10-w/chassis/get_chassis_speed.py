import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w

print("=== get chassis speed ===")
h10w_chassis = h10w.H10wChassis()
ret, tuple_data = h10w_chassis.getChassisSpeed()
if ret != 0:
    print("get chassis speed failed.")
    exit(-1)

linear_velocity, angular_velocity = tuple_data
print("get chassis speed success.")
print(
    f"chassis speed: linear velocity:{linear_velocity}, angular velocity:{angular_velocity}"
)
