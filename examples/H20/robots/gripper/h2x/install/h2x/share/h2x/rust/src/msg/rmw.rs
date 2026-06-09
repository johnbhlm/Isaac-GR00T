#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__BatteryState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__BatteryState__init(msg: *mut BatteryState) -> bool;
    fn h2x__msg__BatteryState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BatteryState>, size: usize) -> bool;
    fn h2x__msg__BatteryState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BatteryState>);
    fn h2x__msg__BatteryState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BatteryState>, out_seq: *mut rosidl_runtime_rs::Sequence<BatteryState>) -> bool;
}

// Corresponds to h2x__msg__BatteryState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percentage: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_low_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_code: i32,

}



impl Default for BatteryState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__BatteryState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__BatteryState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BatteryState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__BatteryState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__BatteryState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__BatteryState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BatteryState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BatteryState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/BatteryState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__BatteryState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__IMUState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__IMUState__init(msg: *mut IMUState) -> bool;
    fn h2x__msg__IMUState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUState>, size: usize) -> bool;
    fn h2x__msg__IMUState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUState>);
    fn h2x__msg__IMUState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUState>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUState>) -> bool;
}

// Corresponds to h2x__msg__IMUState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub quaternion: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyroscope: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accelerometer: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub rpy: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_code: i32,

}



impl Default for IMUState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__IMUState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__IMUState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__IMUState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__IMUState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__IMUState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/IMUState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__IMUState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__LowCmd() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__LowCmd__init(msg: *mut LowCmd) -> bool;
    fn h2x__msg__LowCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LowCmd>, size: usize) -> bool;
    fn h2x__msg__LowCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LowCmd>);
    fn h2x__msg__LowCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LowCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<LowCmd>) -> bool;
}

// Corresponds to h2x__msg__LowCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LowCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_pr: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub motor_cmd: [super::super::msg::rmw::MotorCmd; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: [u32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for LowCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__LowCmd__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__LowCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LowCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LowCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LowCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LowCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LowCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LowCmd where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/LowCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__LowCmd() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__LowState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__LowState__init(msg: *mut LowState) -> bool;
    fn h2x__msg__LowState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LowState>, size: usize) -> bool;
    fn h2x__msg__LowState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LowState>);
    fn h2x__msg__LowState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LowState>, out_seq: *mut rosidl_runtime_rs::Sequence<LowState>) -> bool;
}

// Corresponds to h2x__msg__LowState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LowState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub version: [u32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_pr: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tick: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_state: [super::super::msg::rmw::IMUState; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub motor_state: [super::super::msg::rmw::MotorState; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_battery_info: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_info: super::super::msg::rmw::BatteryState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ground_count: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ground_signal: [u8; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_seconds: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_pcu_valid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pcu_state: super::super::msg::rmw::PCUState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_cdu_valid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cdu_state: super::super::msg::rmw::CDUState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_data_valid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: [u32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for LowState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__LowState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__LowState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LowState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LowState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LowState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LowState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LowState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LowState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/LowState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__LowState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__MotorCmd() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__MotorCmd__init(msg: *mut MotorCmd) -> bool;
    fn h2x__msg__MotorCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCmd>, size: usize) -> bool;
    fn h2x__msg__MotorCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCmd>);
    fn h2x__msg__MotorCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCmd>) -> bool;
}

// Corresponds to h2x__msg__MotorCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dq: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: [u32; 4],

}



impl Default for MotorCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__MotorCmd__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__MotorCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCmd where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/MotorCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__MotorCmd() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__MotorState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__MotorState__init(msg: *mut MotorState) -> bool;
    fn h2x__msg__MotorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorState>, size: usize) -> bool;
    fn h2x__msg__MotorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorState>);
    fn h2x__msg__MotorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorState>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorState>) -> bool;
}

// Corresponds to h2x__msg__MotorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dq: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddq: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cur: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau_est: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: [f32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: [u32; 4],

}



impl Default for MotorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__MotorState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__MotorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/MotorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__MotorState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__CDUState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__CDUState__init(msg: *mut CDUState) -> bool;
    fn h2x__msg__CDUState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CDUState>, size: usize) -> bool;
    fn h2x__msg__CDUState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CDUState>);
    fn h2x__msg__CDUState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CDUState>, out_seq: *mut rosidl_runtime_rs::Sequence<CDUState>) -> bool;
}

// Corresponds to h2x__msg__CDUState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CDUState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_code: i32,

}



impl Default for CDUState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__CDUState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__CDUState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CDUState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__CDUState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__CDUState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__CDUState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CDUState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CDUState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/CDUState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__CDUState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__MotorCmdGripper() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__MotorCmdGripper__init(msg: *mut MotorCmdGripper) -> bool;
    fn h2x__msg__MotorCmdGripper__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCmdGripper>, size: usize) -> bool;
    fn h2x__msg__MotorCmdGripper__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCmdGripper>);
    fn h2x__msg__MotorCmdGripper__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCmdGripper>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCmdGripper>) -> bool;
}

// Corresponds to h2x__msg__MotorCmdGripper
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCmdGripper {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dq_percentage: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_percentage: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub finger_force: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: [u32; 4],

}



impl Default for MotorCmdGripper {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__MotorCmdGripper__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__MotorCmdGripper__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCmdGripper {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorCmdGripper__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorCmdGripper__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorCmdGripper__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCmdGripper {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCmdGripper where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/MotorCmdGripper";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__MotorCmdGripper() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__MotorStateGripper() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__MotorStateGripper__init(msg: *mut MotorStateGripper) -> bool;
    fn h2x__msg__MotorStateGripper__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorStateGripper>, size: usize) -> bool;
    fn h2x__msg__MotorStateGripper__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorStateGripper>);
    fn h2x__msg__MotorStateGripper__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorStateGripper>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorStateGripper>) -> bool;
}

// Corresponds to h2x__msg__MotorStateGripper
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStateGripper {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub arrive_signal: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hold_state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dq: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub finger1_force: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub finger2_force: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cur: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: [u32; 4],

}



impl Default for MotorStateGripper {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__MotorStateGripper__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__MotorStateGripper__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorStateGripper {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorStateGripper__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorStateGripper__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__MotorStateGripper__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorStateGripper {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorStateGripper where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/MotorStateGripper";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__MotorStateGripper() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__GripperCmd() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__GripperCmd__init(msg: *mut GripperCmd) -> bool;
    fn h2x__msg__GripperCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperCmd>, size: usize) -> bool;
    fn h2x__msg__GripperCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperCmd>);
    fn h2x__msg__GripperCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperCmd>) -> bool;
}

// Corresponds to h2x__msg__GripperCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_cmd: [super::super::msg::rmw::MotorCmdGripper; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for GripperCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__GripperCmd__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__GripperCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperCmd where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/GripperCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__GripperCmd() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__GripperState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__GripperState__init(msg: *mut GripperState) -> bool;
    fn h2x__msg__GripperState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperState>, size: usize) -> bool;
    fn h2x__msg__GripperState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperState>);
    fn h2x__msg__GripperState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperState>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperState>) -> bool;
}

// Corresponds to h2x__msg__GripperState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tick: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_state: [super::super::msg::rmw::MotorStateGripper; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_data_valid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for GripperState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__GripperState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__GripperState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/GripperState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__GripperState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__LRCUCmd() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__LRCUCmd__init(msg: *mut LRCUCmd) -> bool;
    fn h2x__msg__LRCUCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LRCUCmd>, size: usize) -> bool;
    fn h2x__msg__LRCUCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LRCUCmd>);
    fn h2x__msg__LRCUCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LRCUCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<LRCUCmd>) -> bool;
}

// Corresponds to h2x__msg__LRCUCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// LED control command message

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LRCUCmd {
    /// 1. 三色灯使能控制
    /// 0: disable, 1: enable
    pub led_enable: u8,

    /// 2. LED 模式控制
    /// 0: off, 1: constant, 2: blink, 3: breathing
    pub led_mode: u8,

    /// 3. 闪烁/呼吸周期控制 (ms)
    /// Range: 100~1000 ms
    pub led_period_ms: u16,

    /// 4-6. RGB 通道亮度控制 (0~255)
    pub led_r: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_g: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_b: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for LRCUCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__LRCUCmd__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__LRCUCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LRCUCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LRCUCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LRCUCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LRCUCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LRCUCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LRCUCmd where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/LRCUCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__LRCUCmd() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__LRCUState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__LRCUState__init(msg: *mut LRCUState) -> bool;
    fn h2x__msg__LRCUState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LRCUState>, size: usize) -> bool;
    fn h2x__msg__LRCUState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LRCUState>);
    fn h2x__msg__LRCUState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LRCUState>, out_seq: *mut rosidl_runtime_rs::Sequence<LRCUState>) -> bool;
}

// Corresponds to h2x__msg__LRCUState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// LED status feedback message

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LRCUState {
    /// 1. 是否可控
    /// 0: not controllable, 1: controllable
    pub led_enable: u8,

    /// 2. 当前 LED 模式
    /// 0: off, 1: constant, 2: blink, 3: breathing
    pub led_mode: u8,

    /// 3. 当前闪烁/呼吸周期 (ms)
    /// Example: 10000 ms = 0.1 Hz, 100 ms = 10 Hz
    pub led_period_ms: u16,

    /// 4-6. 当前 RGB 通道亮度 (0~255)
    pub led_r: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_g: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_b: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for LRCUState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__LRCUState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__LRCUState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LRCUState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LRCUState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LRCUState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__LRCUState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LRCUState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LRCUState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/LRCUState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__LRCUState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__PCUState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__PCUState__init(msg: *mut PCUState) -> bool;
    fn h2x__msg__PCUState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PCUState>, size: usize) -> bool;
    fn h2x__msg__PCUState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PCUState>);
    fn h2x__msg__PCUState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PCUState>, out_seq: *mut rosidl_runtime_rs::Sequence<PCUState>) -> bool;
}

// Corresponds to h2x__msg__PCUState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PCUState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_stop_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_supply_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power_supply_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pcu_error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pcu_warning_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_bus_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_bus_current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc_bus_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage_24v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage_12v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_24v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_12v: f32,

}



impl Default for PCUState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__PCUState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__PCUState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PCUState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__PCUState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__PCUState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__PCUState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PCUState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PCUState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/PCUState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__PCUState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__Diagnosis() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__Diagnosis__init(msg: *mut Diagnosis) -> bool;
    fn h2x__msg__Diagnosis__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Diagnosis>, size: usize) -> bool;
    fn h2x__msg__Diagnosis__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Diagnosis>);
    fn h2x__msg__Diagnosis__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Diagnosis>, out_seq: *mut rosidl_runtime_rs::Sequence<Diagnosis>) -> bool;
}

// Corresponds to h2x__msg__Diagnosis
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Diagnosis {

    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub is_ds402: [bool; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub ds402_data: [super::super::msg::rmw::DiagnosticData; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_imu_state: [super::super::msg::rmw::DebugIMUState; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_cdu_state: super::super::msg::rmw::DebugCDUState,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub error_code: [i32; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub warning_code: [i32; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    pub cdu_error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cdu_warning_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pcu_error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pcu_warning_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_error_code: [i32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_warning_code: [i32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_error_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_warning_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for Diagnosis {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__Diagnosis__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__Diagnosis__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Diagnosis {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__Diagnosis__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__Diagnosis__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__Diagnosis__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Diagnosis {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Diagnosis where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/Diagnosis";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__Diagnosis() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__DiagnosticData() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__DiagnosticData__init(msg: *mut DiagnosticData) -> bool;
    fn h2x__msg__DiagnosticData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticData>, size: usize) -> bool;
    fn h2x__msg__DiagnosticData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DiagnosticData>);
    fn h2x__msg__DiagnosticData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DiagnosticData>, out_seq: *mut rosidl_runtime_rs::Sequence<DiagnosticData>) -> bool;
}

// Corresponds to h2x__msg__DiagnosticData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DiagnosticData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub control_word: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_word: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_register: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_of_operation: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_display: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_motor_state: super::super::msg::rmw::DebugMotorState,

}



impl Default for DiagnosticData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__DiagnosticData__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__DiagnosticData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DiagnosticData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DiagnosticData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DiagnosticData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DiagnosticData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DiagnosticData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DiagnosticData where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/DiagnosticData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__DiagnosticData() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__DebugMotorState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__DebugMotorState__init(msg: *mut DebugMotorState) -> bool;
    fn h2x__msg__DebugMotorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugMotorState>, size: usize) -> bool;
    fn h2x__msg__DebugMotorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugMotorState>);
    fn h2x__msg__DebugMotorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugMotorState>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugMotorState>) -> bool;
}

// Corresponds to h2x__msg__DebugMotorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugMotorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub slave_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_counter: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_register: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_word: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_position: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_torque: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tx_object_index: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tx_object_value: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_kp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vibration_dampratio: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spd_coefficient: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spd_kp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spd_ki: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spd_rmax: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spd_rmin: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_velocity_torque_current_polarity: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_ctrl_vibration_controller_bandwidth: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_feedback_encoder_select: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub align_motor_pos_2_link_pos: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_ctrl_link_speed_observer_bandwidth: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deceleration_of_link_side: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spd_bandwidth: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_coefficient: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_motor_torque: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_joint_torque: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_a_offset: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_b_offset: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_kp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_kd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_bfe: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_l: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_kfc: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_torque_coefficient: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_rgb_ctrl: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_error_configmask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_error_configmask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub board_error_configmask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_error_configmask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ctrl_error_configmask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub communication_error_configmask: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_ctrl_bandwidth: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_ctrl_mode: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_rs: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_l: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_ke: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motorside_position: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linkside_position: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub friction_ctrl_param1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub friction_ctrl_param2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub friction_ctrl_param3: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub friction_ctrl_param4: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vendor_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_product_code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_version_number: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_serial_number: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_type: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_version: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_serial_number: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub firmware_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bootloader_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub app_branch_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub app_tag_sha1_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub boot_branch_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub boot_tag_sha1_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_encoder_calibrated_data: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_encoder_calibrated_data: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub a_phase_current_offset: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b_phase_current_offset: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub c_phase_current_offset: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bus_current_offset: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_temperature: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drive_temperature: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_temperature1: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_temperature2: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bus_current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bus_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flag: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub developer_command_status: i32,

}



impl Default for DebugMotorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__DebugMotorState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__DebugMotorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugMotorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugMotorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugMotorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugMotorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugMotorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugMotorState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/DebugMotorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__DebugMotorState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__DebugIMUState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__DebugIMUState__init(msg: *mut DebugIMUState) -> bool;
    fn h2x__msg__DebugIMUState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugIMUState>, size: usize) -> bool;
    fn h2x__msg__DebugIMUState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugIMUState>);
    fn h2x__msg__DebugIMUState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugIMUState>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugIMUState>) -> bool;
}

// Corresponds to h2x__msg__DebugIMUState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugIMUState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub slave_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_counter: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_word: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub euler_angle_roll: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub eluer_angle_pitch: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub eluer_angle_yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q1: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q2: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub q4: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accx: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accy: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accz: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_vel_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_vel_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_vel_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_x: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_y: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_z: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub txobject_index: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub txobject_data: i32,

}



impl Default for DebugIMUState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__DebugIMUState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__DebugIMUState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugIMUState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugIMUState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugIMUState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugIMUState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugIMUState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugIMUState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/DebugIMUState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__DebugIMUState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__DebugCDUState() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__DebugCDUState__init(msg: *mut DebugCDUState) -> bool;
    fn h2x__msg__DebugCDUState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugCDUState>, size: usize) -> bool;
    fn h2x__msg__DebugCDUState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugCDUState>);
    fn h2x__msg__DebugCDUState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugCDUState>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugCDUState>) -> bool;
}

// Corresponds to h2x__msg__DebugCDUState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugCDUState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_counter: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub electrical_status_feedback_id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slave_online_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cdu_fireware_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub peripheral_status_feedback: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_stop_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_supply_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power_supply_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_bus_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dcdc_bus_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage_24v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage_12v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_bus_current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_24v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_12v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pcu_firmware_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub low_battery_warning: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_warning_status_history_l2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_soc: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_soh: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nominal_battery_capacity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_battery_capacity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_battery_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_battery_current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub average_battery_temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub peak_battery_temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_warning_status_l1: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_warning_status_l2: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mosfet_status: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_cycle_count: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ntc_count: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub series_cell_count: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_control_source: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_period: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_r: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_g: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led_b: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lrcu_firmware_version: rosidl_runtime_rs::String,

}



impl Default for DebugCDUState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__DebugCDUState__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__DebugCDUState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugCDUState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugCDUState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugCDUState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__DebugCDUState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugCDUState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugCDUState where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/DebugCDUState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__DebugCDUState() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__GripperDiagnosis() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__GripperDiagnosis__init(msg: *mut GripperDiagnosis) -> bool;
    fn h2x__msg__GripperDiagnosis__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperDiagnosis>, size: usize) -> bool;
    fn h2x__msg__GripperDiagnosis__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperDiagnosis>);
    fn h2x__msg__GripperDiagnosis__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperDiagnosis>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperDiagnosis>) -> bool;
}

// Corresponds to h2x__msg__GripperDiagnosis
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperDiagnosis {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ds_data: [super::super::msg::rmw::GripperDiagnosticData; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: [i32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_code: [i32; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for GripperDiagnosis {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__GripperDiagnosis__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__GripperDiagnosis__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperDiagnosis {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperDiagnosis__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperDiagnosis__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperDiagnosis__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperDiagnosis {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperDiagnosis where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/GripperDiagnosis";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__GripperDiagnosis() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__GripperDiagnosticData() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__msg__GripperDiagnosticData__init(msg: *mut GripperDiagnosticData) -> bool;
    fn h2x__msg__GripperDiagnosticData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperDiagnosticData>, size: usize) -> bool;
    fn h2x__msg__GripperDiagnosticData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperDiagnosticData>);
    fn h2x__msg__GripperDiagnosticData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperDiagnosticData>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperDiagnosticData>) -> bool;
}

// Corresponds to h2x__msg__GripperDiagnosticData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperDiagnosticData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_of_operation: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_display: i8,

}



impl Default for GripperDiagnosticData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__msg__GripperDiagnosticData__init(&mut msg as *mut _) {
        panic!("Call to h2x__msg__GripperDiagnosticData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperDiagnosticData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperDiagnosticData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperDiagnosticData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__msg__GripperDiagnosticData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperDiagnosticData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperDiagnosticData where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/msg/GripperDiagnosticData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__msg__GripperDiagnosticData() }
  }
}


