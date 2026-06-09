import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w

print("=== Get Localization ===")
h10w_chassis = h10w.H10wChassis()
ret, tuple_data = h10w_chassis.getLocalization()
if ret != 0:
    print("get localization failed.")
    exit(-1)

pos_x, pos_y, pos_valid = tuple_data
print("get localization success.")
print(f"localization: x:{pos_x}, y:{pos_y}, valid:{pos_valid}")
