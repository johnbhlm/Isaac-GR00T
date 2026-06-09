#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CalibrateMotorElectricalAngle_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__CalibrateMotorElectricalAngle_Request__init(msg: *mut CalibrateMotorElectricalAngle_Request) -> bool;
    fn h2x__srv__CalibrateMotorElectricalAngle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrateMotorElectricalAngle_Request>, size: usize) -> bool;
    fn h2x__srv__CalibrateMotorElectricalAngle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrateMotorElectricalAngle_Request>);
    fn h2x__srv__CalibrateMotorElectricalAngle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrateMotorElectricalAngle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrateMotorElectricalAngle_Request>) -> bool;
}

// Corresponds to h2x__srv__CalibrateMotorElectricalAngle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateMotorElectricalAngle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for CalibrateMotorElectricalAngle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__CalibrateMotorElectricalAngle_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__CalibrateMotorElectricalAngle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrateMotorElectricalAngle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrateMotorElectricalAngle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrateMotorElectricalAngle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrateMotorElectricalAngle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrateMotorElectricalAngle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrateMotorElectricalAngle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/CalibrateMotorElectricalAngle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CalibrateMotorElectricalAngle_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CalibrateMotorElectricalAngle_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__CalibrateMotorElectricalAngle_Response__init(msg: *mut CalibrateMotorElectricalAngle_Response) -> bool;
    fn h2x__srv__CalibrateMotorElectricalAngle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrateMotorElectricalAngle_Response>, size: usize) -> bool;
    fn h2x__srv__CalibrateMotorElectricalAngle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrateMotorElectricalAngle_Response>);
    fn h2x__srv__CalibrateMotorElectricalAngle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrateMotorElectricalAngle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrateMotorElectricalAngle_Response>) -> bool;
}

// Corresponds to h2x__srv__CalibrateMotorElectricalAngle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateMotorElectricalAngle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for CalibrateMotorElectricalAngle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__CalibrateMotorElectricalAngle_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__CalibrateMotorElectricalAngle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrateMotorElectricalAngle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrateMotorElectricalAngle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrateMotorElectricalAngle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrateMotorElectricalAngle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrateMotorElectricalAngle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrateMotorElectricalAngle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/CalibrateMotorElectricalAngle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CalibrateMotorElectricalAngle_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CalibrationZero_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__CalibrationZero_Request__init(msg: *mut CalibrationZero_Request) -> bool;
    fn h2x__srv__CalibrationZero_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrationZero_Request>, size: usize) -> bool;
    fn h2x__srv__CalibrationZero_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrationZero_Request>);
    fn h2x__srv__CalibrationZero_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrationZero_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrationZero_Request>) -> bool;
}

// Corresponds to h2x__srv__CalibrationZero_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrationZero_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for CalibrationZero_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__CalibrationZero_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__CalibrationZero_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrationZero_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrationZero_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrationZero_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrationZero_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrationZero_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrationZero_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/CalibrationZero_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CalibrationZero_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CalibrationZero_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__CalibrationZero_Response__init(msg: *mut CalibrationZero_Response) -> bool;
    fn h2x__srv__CalibrationZero_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrationZero_Response>, size: usize) -> bool;
    fn h2x__srv__CalibrationZero_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrationZero_Response>);
    fn h2x__srv__CalibrationZero_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrationZero_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrationZero_Response>) -> bool;
}

// Corresponds to h2x__srv__CalibrationZero_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrationZero_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for CalibrationZero_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__CalibrationZero_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__CalibrationZero_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrationZero_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrationZero_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrationZero_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CalibrationZero_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrationZero_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrationZero_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/CalibrationZero_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CalibrationZero_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetJointMonitor_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetJointMonitor_Request__init(msg: *mut GetJointMonitor_Request) -> bool;
    fn h2x__srv__GetJointMonitor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetJointMonitor_Request>, size: usize) -> bool;
    fn h2x__srv__GetJointMonitor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetJointMonitor_Request>);
    fn h2x__srv__GetJointMonitor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetJointMonitor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetJointMonitor_Request>) -> bool;
}

// Corresponds to h2x__srv__GetJointMonitor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointMonitor_Request {
    /// 请求读取的关节索引数组
    pub motor_index: rosidl_runtime_rs::Sequence<u32>,

}



impl Default for GetJointMonitor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetJointMonitor_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetJointMonitor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetJointMonitor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointMonitor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointMonitor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointMonitor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetJointMonitor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetJointMonitor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetJointMonitor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetJointMonitor_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetJointMonitor_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetJointMonitor_Response__init(msg: *mut GetJointMonitor_Response) -> bool;
    fn h2x__srv__GetJointMonitor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetJointMonitor_Response>, size: usize) -> bool;
    fn h2x__srv__GetJointMonitor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetJointMonitor_Response>);
    fn h2x__srv__GetJointMonitor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetJointMonitor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetJointMonitor_Response>) -> bool;
}

// Corresponds to h2x__srv__GetJointMonitor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointMonitor_Response {
    /// 操作是否成功
    pub result: i32,

    /// 返回的限位下限数组
    pub min_position: rosidl_runtime_rs::Sequence<f64>,

    /// 返回的限位上限数组
    pub max_position: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for GetJointMonitor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetJointMonitor_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetJointMonitor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetJointMonitor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointMonitor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointMonitor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointMonitor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetJointMonitor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetJointMonitor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetJointMonitor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetJointMonitor_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__ResetJointParameters_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__ResetJointParameters_Request__init(msg: *mut ResetJointParameters_Request) -> bool;
    fn h2x__srv__ResetJointParameters_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetJointParameters_Request>, size: usize) -> bool;
    fn h2x__srv__ResetJointParameters_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetJointParameters_Request>);
    fn h2x__srv__ResetJointParameters_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetJointParameters_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetJointParameters_Request>) -> bool;
}

// Corresponds to h2x__srv__ResetJointParameters_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetJointParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for ResetJointParameters_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__ResetJointParameters_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__ResetJointParameters_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetJointParameters_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ResetJointParameters_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ResetJointParameters_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ResetJointParameters_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetJointParameters_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetJointParameters_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/ResetJointParameters_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__ResetJointParameters_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__ResetJointParameters_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__ResetJointParameters_Response__init(msg: *mut ResetJointParameters_Response) -> bool;
    fn h2x__srv__ResetJointParameters_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetJointParameters_Response>, size: usize) -> bool;
    fn h2x__srv__ResetJointParameters_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetJointParameters_Response>);
    fn h2x__srv__ResetJointParameters_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetJointParameters_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetJointParameters_Response>) -> bool;
}

// Corresponds to h2x__srv__ResetJointParameters_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetJointParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for ResetJointParameters_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__ResetJointParameters_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__ResetJointParameters_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetJointParameters_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ResetJointParameters_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ResetJointParameters_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ResetJointParameters_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetJointParameters_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetJointParameters_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/ResetJointParameters_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__ResetJointParameters_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SaveJointParameters_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SaveJointParameters_Request__init(msg: *mut SaveJointParameters_Request) -> bool;
    fn h2x__srv__SaveJointParameters_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveJointParameters_Request>, size: usize) -> bool;
    fn h2x__srv__SaveJointParameters_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveJointParameters_Request>);
    fn h2x__srv__SaveJointParameters_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveJointParameters_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveJointParameters_Request>) -> bool;
}

// Corresponds to h2x__srv__SaveJointParameters_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveJointParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for SaveJointParameters_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SaveJointParameters_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SaveJointParameters_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveJointParameters_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SaveJointParameters_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SaveJointParameters_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SaveJointParameters_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveJointParameters_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveJointParameters_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SaveJointParameters_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SaveJointParameters_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SaveJointParameters_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SaveJointParameters_Response__init(msg: *mut SaveJointParameters_Response) -> bool;
    fn h2x__srv__SaveJointParameters_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SaveJointParameters_Response>, size: usize) -> bool;
    fn h2x__srv__SaveJointParameters_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SaveJointParameters_Response>);
    fn h2x__srv__SaveJointParameters_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SaveJointParameters_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SaveJointParameters_Response>) -> bool;
}

// Corresponds to h2x__srv__SaveJointParameters_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveJointParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SaveJointParameters_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SaveJointParameters_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SaveJointParameters_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SaveJointParameters_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SaveJointParameters_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SaveJointParameters_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SaveJointParameters_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SaveJointParameters_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SaveJointParameters_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SaveJointParameters_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SaveJointParameters_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetJointMonitor_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetJointMonitor_Request__init(msg: *mut SetJointMonitor_Request) -> bool;
    fn h2x__srv__SetJointMonitor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointMonitor_Request>, size: usize) -> bool;
    fn h2x__srv__SetJointMonitor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointMonitor_Request>);
    fn h2x__srv__SetJointMonitor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointMonitor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointMonitor_Request>) -> bool;
}

// Corresponds to h2x__srv__SetJointMonitor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointMonitor_Request {
    /// 请求的关节索引数组
    pub motor_index: rosidl_runtime_rs::Sequence<u32>,

    /// 对应限位的下限数组
    pub min_position: rosidl_runtime_rs::Sequence<f64>,

    /// 对应限位的上限数组
    pub max_position: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for SetJointMonitor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetJointMonitor_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetJointMonitor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointMonitor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointMonitor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointMonitor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointMonitor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointMonitor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointMonitor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetJointMonitor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetJointMonitor_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetJointMonitor_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetJointMonitor_Response__init(msg: *mut SetJointMonitor_Response) -> bool;
    fn h2x__srv__SetJointMonitor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointMonitor_Response>, size: usize) -> bool;
    fn h2x__srv__SetJointMonitor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointMonitor_Response>);
    fn h2x__srv__SetJointMonitor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointMonitor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointMonitor_Response>) -> bool;
}

// Corresponds to h2x__srv__SetJointMonitor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointMonitor_Response {
    /// 操作是否成功
    pub result: i32,

}



impl Default for SetJointMonitor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetJointMonitor_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetJointMonitor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointMonitor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointMonitor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointMonitor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointMonitor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointMonitor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointMonitor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetJointMonitor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetJointMonitor_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetJointHardLimit_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetJointHardLimit_Request__init(msg: *mut GetJointHardLimit_Request) -> bool;
    fn h2x__srv__GetJointHardLimit_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetJointHardLimit_Request>, size: usize) -> bool;
    fn h2x__srv__GetJointHardLimit_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetJointHardLimit_Request>);
    fn h2x__srv__GetJointHardLimit_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetJointHardLimit_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetJointHardLimit_Request>) -> bool;
}

// Corresponds to h2x__srv__GetJointHardLimit_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointHardLimit_Request {
    /// 请求的关节索引数组
    pub motor_index: rosidl_runtime_rs::Sequence<u32>,

}



impl Default for GetJointHardLimit_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetJointHardLimit_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetJointHardLimit_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetJointHardLimit_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointHardLimit_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointHardLimit_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointHardLimit_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetJointHardLimit_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetJointHardLimit_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetJointHardLimit_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetJointHardLimit_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetJointHardLimit_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetJointHardLimit_Response__init(msg: *mut GetJointHardLimit_Response) -> bool;
    fn h2x__srv__GetJointHardLimit_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetJointHardLimit_Response>, size: usize) -> bool;
    fn h2x__srv__GetJointHardLimit_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetJointHardLimit_Response>);
    fn h2x__srv__GetJointHardLimit_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetJointHardLimit_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetJointHardLimit_Response>) -> bool;
}

// Corresponds to h2x__srv__GetJointHardLimit_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointHardLimit_Response {
    /// 操作是否成功
    pub result: i32,

    /// 对应硬限位的下限数组
    pub min_position: rosidl_runtime_rs::Sequence<f64>,

    /// 对应硬限位的上限数组
    pub max_position: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for GetJointHardLimit_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetJointHardLimit_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetJointHardLimit_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetJointHardLimit_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointHardLimit_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointHardLimit_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetJointHardLimit_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetJointHardLimit_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetJointHardLimit_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetJointHardLimit_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetJointHardLimit_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__ClearError_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__ClearError_Request__init(msg: *mut ClearError_Request) -> bool;
    fn h2x__srv__ClearError_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearError_Request>, size: usize) -> bool;
    fn h2x__srv__ClearError_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearError_Request>);
    fn h2x__srv__ClearError_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearError_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearError_Request>) -> bool;
}

// Corresponds to h2x__srv__ClearError_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearError_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ClearError_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__ClearError_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__ClearError_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearError_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ClearError_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ClearError_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ClearError_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearError_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearError_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/ClearError_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__ClearError_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__ClearError_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__ClearError_Response__init(msg: *mut ClearError_Response) -> bool;
    fn h2x__srv__ClearError_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearError_Response>, size: usize) -> bool;
    fn h2x__srv__ClearError_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearError_Response>);
    fn h2x__srv__ClearError_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearError_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearError_Response>) -> bool;
}

// Corresponds to h2x__srv__ClearError_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearError_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for ClearError_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__ClearError_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__ClearError_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearError_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ClearError_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ClearError_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__ClearError_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearError_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearError_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/ClearError_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__ClearError_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetMechanicalLimitToJoint_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetMechanicalLimitToJoint_Request__init(msg: *mut SetMechanicalLimitToJoint_Request) -> bool;
    fn h2x__srv__SetMechanicalLimitToJoint_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMechanicalLimitToJoint_Request>, size: usize) -> bool;
    fn h2x__srv__SetMechanicalLimitToJoint_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMechanicalLimitToJoint_Request>);
    fn h2x__srv__SetMechanicalLimitToJoint_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMechanicalLimitToJoint_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMechanicalLimitToJoint_Request>) -> bool;
}

// Corresponds to h2x__srv__SetMechanicalLimitToJoint_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMechanicalLimitToJoint_Request {
    /// 请求的关节索引数组
    pub motor_index: u32,

}



impl Default for SetMechanicalLimitToJoint_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetMechanicalLimitToJoint_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetMechanicalLimitToJoint_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMechanicalLimitToJoint_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetMechanicalLimitToJoint_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetMechanicalLimitToJoint_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetMechanicalLimitToJoint_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMechanicalLimitToJoint_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMechanicalLimitToJoint_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetMechanicalLimitToJoint_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetMechanicalLimitToJoint_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetMechanicalLimitToJoint_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetMechanicalLimitToJoint_Response__init(msg: *mut SetMechanicalLimitToJoint_Response) -> bool;
    fn h2x__srv__SetMechanicalLimitToJoint_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMechanicalLimitToJoint_Response>, size: usize) -> bool;
    fn h2x__srv__SetMechanicalLimitToJoint_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMechanicalLimitToJoint_Response>);
    fn h2x__srv__SetMechanicalLimitToJoint_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMechanicalLimitToJoint_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMechanicalLimitToJoint_Response>) -> bool;
}

// Corresponds to h2x__srv__SetMechanicalLimitToJoint_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMechanicalLimitToJoint_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetMechanicalLimitToJoint_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetMechanicalLimitToJoint_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetMechanicalLimitToJoint_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMechanicalLimitToJoint_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetMechanicalLimitToJoint_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetMechanicalLimitToJoint_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetMechanicalLimitToJoint_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMechanicalLimitToJoint_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMechanicalLimitToJoint_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetMechanicalLimitToJoint_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetMechanicalLimitToJoint_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CommandReset_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__CommandReset_Request__init(msg: *mut CommandReset_Request) -> bool;
    fn h2x__srv__CommandReset_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommandReset_Request>, size: usize) -> bool;
    fn h2x__srv__CommandReset_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommandReset_Request>);
    fn h2x__srv__CommandReset_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommandReset_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CommandReset_Request>) -> bool;
}

// Corresponds to h2x__srv__CommandReset_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommandReset_Request {
    /// 请求的关节索引
    pub motor_index: u32,

}



impl Default for CommandReset_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__CommandReset_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__CommandReset_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommandReset_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CommandReset_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CommandReset_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CommandReset_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommandReset_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommandReset_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/CommandReset_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CommandReset_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CommandReset_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__CommandReset_Response__init(msg: *mut CommandReset_Response) -> bool;
    fn h2x__srv__CommandReset_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommandReset_Response>, size: usize) -> bool;
    fn h2x__srv__CommandReset_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommandReset_Response>);
    fn h2x__srv__CommandReset_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommandReset_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CommandReset_Response>) -> bool;
}

// Corresponds to h2x__srv__CommandReset_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommandReset_Response {
    /// 操作是否成功
    pub result: i32,

}



impl Default for CommandReset_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__CommandReset_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__CommandReset_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommandReset_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CommandReset_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CommandReset_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__CommandReset_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommandReset_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommandReset_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/CommandReset_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__CommandReset_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetJointDirection_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetJointDirection_Request__init(msg: *mut SetJointDirection_Request) -> bool;
    fn h2x__srv__SetJointDirection_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointDirection_Request>, size: usize) -> bool;
    fn h2x__srv__SetJointDirection_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointDirection_Request>);
    fn h2x__srv__SetJointDirection_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointDirection_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointDirection_Request>) -> bool;
}

// Corresponds to h2x__srv__SetJointDirection_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointDirection_Request {
    /// 请求的关节索引
    pub motor_index: u32,

    /// 请求设置的关节方向 1：面向关节法兰，顺时针旋转为正（默认）；2：面向关节法兰，顺时针旋转为负
    pub direction: i32,

}



impl Default for SetJointDirection_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetJointDirection_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetJointDirection_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointDirection_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointDirection_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointDirection_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointDirection_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointDirection_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointDirection_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetJointDirection_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetJointDirection_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetJointDirection_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetJointDirection_Response__init(msg: *mut SetJointDirection_Response) -> bool;
    fn h2x__srv__SetJointDirection_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointDirection_Response>, size: usize) -> bool;
    fn h2x__srv__SetJointDirection_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointDirection_Response>);
    fn h2x__srv__SetJointDirection_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointDirection_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointDirection_Response>) -> bool;
}

// Corresponds to h2x__srv__SetJointDirection_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointDirection_Response {
    /// 操作是否成功
    pub result: i32,

}



impl Default for SetJointDirection_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetJointDirection_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetJointDirection_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointDirection_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointDirection_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointDirection_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetJointDirection_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointDirection_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointDirection_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetJointDirection_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetJointDirection_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperClearError_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GripperClearError_Request__init(msg: *mut GripperClearError_Request) -> bool;
    fn h2x__srv__GripperClearError_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperClearError_Request>, size: usize) -> bool;
    fn h2x__srv__GripperClearError_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperClearError_Request>);
    fn h2x__srv__GripperClearError_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperClearError_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperClearError_Request>) -> bool;
}

// Corresponds to h2x__srv__GripperClearError_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperClearError_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for GripperClearError_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GripperClearError_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GripperClearError_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperClearError_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperClearError_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperClearError_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperClearError_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperClearError_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperClearError_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GripperClearError_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperClearError_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperClearError_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GripperClearError_Response__init(msg: *mut GripperClearError_Response) -> bool;
    fn h2x__srv__GripperClearError_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperClearError_Response>, size: usize) -> bool;
    fn h2x__srv__GripperClearError_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperClearError_Response>);
    fn h2x__srv__GripperClearError_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperClearError_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperClearError_Response>) -> bool;
}

// Corresponds to h2x__srv__GripperClearError_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperClearError_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for GripperClearError_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GripperClearError_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GripperClearError_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperClearError_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperClearError_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperClearError_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperClearError_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperClearError_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperClearError_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GripperClearError_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperClearError_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetGripperMaxForce_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetGripperMaxForce_Request__init(msg: *mut GetGripperMaxForce_Request) -> bool;
    fn h2x__srv__GetGripperMaxForce_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetGripperMaxForce_Request>, size: usize) -> bool;
    fn h2x__srv__GetGripperMaxForce_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetGripperMaxForce_Request>);
    fn h2x__srv__GetGripperMaxForce_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetGripperMaxForce_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetGripperMaxForce_Request>) -> bool;
}

// Corresponds to h2x__srv__GetGripperMaxForce_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripperMaxForce_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for GetGripperMaxForce_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetGripperMaxForce_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetGripperMaxForce_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetGripperMaxForce_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperMaxForce_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperMaxForce_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperMaxForce_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetGripperMaxForce_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetGripperMaxForce_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetGripperMaxForce_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetGripperMaxForce_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetGripperMaxForce_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetGripperMaxForce_Response__init(msg: *mut GetGripperMaxForce_Response) -> bool;
    fn h2x__srv__GetGripperMaxForce_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetGripperMaxForce_Response>, size: usize) -> bool;
    fn h2x__srv__GetGripperMaxForce_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetGripperMaxForce_Response>);
    fn h2x__srv__GetGripperMaxForce_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetGripperMaxForce_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetGripperMaxForce_Response>) -> bool;
}

// Corresponds to h2x__srv__GetGripperMaxForce_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripperMaxForce_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_force: f32,

}



impl Default for GetGripperMaxForce_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetGripperMaxForce_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetGripperMaxForce_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetGripperMaxForce_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperMaxForce_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperMaxForce_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperMaxForce_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetGripperMaxForce_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetGripperMaxForce_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetGripperMaxForce_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetGripperMaxForce_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetGripperStrokeRange_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetGripperStrokeRange_Request__init(msg: *mut GetGripperStrokeRange_Request) -> bool;
    fn h2x__srv__GetGripperStrokeRange_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetGripperStrokeRange_Request>, size: usize) -> bool;
    fn h2x__srv__GetGripperStrokeRange_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetGripperStrokeRange_Request>);
    fn h2x__srv__GetGripperStrokeRange_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetGripperStrokeRange_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetGripperStrokeRange_Request>) -> bool;
}

// Corresponds to h2x__srv__GetGripperStrokeRange_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripperStrokeRange_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for GetGripperStrokeRange_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetGripperStrokeRange_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetGripperStrokeRange_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetGripperStrokeRange_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperStrokeRange_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperStrokeRange_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperStrokeRange_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetGripperStrokeRange_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetGripperStrokeRange_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetGripperStrokeRange_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetGripperStrokeRange_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetGripperStrokeRange_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetGripperStrokeRange_Response__init(msg: *mut GetGripperStrokeRange_Response) -> bool;
    fn h2x__srv__GetGripperStrokeRange_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetGripperStrokeRange_Response>, size: usize) -> bool;
    fn h2x__srv__GetGripperStrokeRange_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetGripperStrokeRange_Response>);
    fn h2x__srv__GetGripperStrokeRange_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetGripperStrokeRange_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetGripperStrokeRange_Response>) -> bool;
}

// Corresponds to h2x__srv__GetGripperStrokeRange_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripperStrokeRange_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_stroke: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_stroke: f32,

}



impl Default for GetGripperStrokeRange_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetGripperStrokeRange_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetGripperStrokeRange_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetGripperStrokeRange_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperStrokeRange_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperStrokeRange_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetGripperStrokeRange_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetGripperStrokeRange_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetGripperStrokeRange_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetGripperStrokeRange_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetGripperStrokeRange_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperInitialize_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GripperInitialize_Request__init(msg: *mut GripperInitialize_Request) -> bool;
    fn h2x__srv__GripperInitialize_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperInitialize_Request>, size: usize) -> bool;
    fn h2x__srv__GripperInitialize_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperInitialize_Request>);
    fn h2x__srv__GripperInitialize_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperInitialize_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperInitialize_Request>) -> bool;
}

// Corresponds to h2x__srv__GripperInitialize_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperInitialize_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offset: f32,

}



impl Default for GripperInitialize_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GripperInitialize_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GripperInitialize_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperInitialize_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperInitialize_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperInitialize_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperInitialize_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperInitialize_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperInitialize_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GripperInitialize_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperInitialize_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperInitialize_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GripperInitialize_Response__init(msg: *mut GripperInitialize_Response) -> bool;
    fn h2x__srv__GripperInitialize_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperInitialize_Response>, size: usize) -> bool;
    fn h2x__srv__GripperInitialize_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperInitialize_Response>);
    fn h2x__srv__GripperInitialize_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperInitialize_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperInitialize_Response>) -> bool;
}

// Corresponds to h2x__srv__GripperInitialize_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperInitialize_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for GripperInitialize_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GripperInitialize_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GripperInitialize_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperInitialize_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperInitialize_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperInitialize_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperInitialize_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperInitialize_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperInitialize_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GripperInitialize_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperInitialize_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetGripperMaxForce_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetGripperMaxForce_Request__init(msg: *mut SetGripperMaxForce_Request) -> bool;
    fn h2x__srv__SetGripperMaxForce_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGripperMaxForce_Request>, size: usize) -> bool;
    fn h2x__srv__SetGripperMaxForce_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGripperMaxForce_Request>);
    fn h2x__srv__SetGripperMaxForce_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGripperMaxForce_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGripperMaxForce_Request>) -> bool;
}

// Corresponds to h2x__srv__SetGripperMaxForce_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripperMaxForce_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_force: f32,

}



impl Default for SetGripperMaxForce_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetGripperMaxForce_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetGripperMaxForce_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGripperMaxForce_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperMaxForce_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperMaxForce_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperMaxForce_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGripperMaxForce_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGripperMaxForce_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetGripperMaxForce_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetGripperMaxForce_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetGripperMaxForce_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetGripperMaxForce_Response__init(msg: *mut SetGripperMaxForce_Response) -> bool;
    fn h2x__srv__SetGripperMaxForce_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGripperMaxForce_Response>, size: usize) -> bool;
    fn h2x__srv__SetGripperMaxForce_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGripperMaxForce_Response>);
    fn h2x__srv__SetGripperMaxForce_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGripperMaxForce_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGripperMaxForce_Response>) -> bool;
}

// Corresponds to h2x__srv__SetGripperMaxForce_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripperMaxForce_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetGripperMaxForce_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetGripperMaxForce_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetGripperMaxForce_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGripperMaxForce_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperMaxForce_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperMaxForce_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperMaxForce_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGripperMaxForce_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGripperMaxForce_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetGripperMaxForce_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetGripperMaxForce_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetGripperStrokeRange_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetGripperStrokeRange_Request__init(msg: *mut SetGripperStrokeRange_Request) -> bool;
    fn h2x__srv__SetGripperStrokeRange_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGripperStrokeRange_Request>, size: usize) -> bool;
    fn h2x__srv__SetGripperStrokeRange_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGripperStrokeRange_Request>);
    fn h2x__srv__SetGripperStrokeRange_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGripperStrokeRange_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGripperStrokeRange_Request>) -> bool;
}

// Corresponds to h2x__srv__SetGripperStrokeRange_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripperStrokeRange_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_stroke: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_stroke: f32,

}



impl Default for SetGripperStrokeRange_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetGripperStrokeRange_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetGripperStrokeRange_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGripperStrokeRange_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperStrokeRange_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperStrokeRange_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperStrokeRange_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGripperStrokeRange_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGripperStrokeRange_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetGripperStrokeRange_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetGripperStrokeRange_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetGripperStrokeRange_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetGripperStrokeRange_Response__init(msg: *mut SetGripperStrokeRange_Response) -> bool;
    fn h2x__srv__SetGripperStrokeRange_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGripperStrokeRange_Response>, size: usize) -> bool;
    fn h2x__srv__SetGripperStrokeRange_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGripperStrokeRange_Response>);
    fn h2x__srv__SetGripperStrokeRange_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGripperStrokeRange_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGripperStrokeRange_Response>) -> bool;
}

// Corresponds to h2x__srv__SetGripperStrokeRange_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripperStrokeRange_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetGripperStrokeRange_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetGripperStrokeRange_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetGripperStrokeRange_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGripperStrokeRange_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperStrokeRange_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperStrokeRange_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetGripperStrokeRange_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGripperStrokeRange_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGripperStrokeRange_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetGripperStrokeRange_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetGripperStrokeRange_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperBrakeControl_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GripperBrakeControl_Request__init(msg: *mut GripperBrakeControl_Request) -> bool;
    fn h2x__srv__GripperBrakeControl_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperBrakeControl_Request>, size: usize) -> bool;
    fn h2x__srv__GripperBrakeControl_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperBrakeControl_Request>);
    fn h2x__srv__GripperBrakeControl_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperBrakeControl_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperBrakeControl_Request>) -> bool;
}

// Corresponds to h2x__srv__GripperBrakeControl_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperBrakeControl_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_state: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub auto_clear_error: bool,

}



impl Default for GripperBrakeControl_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GripperBrakeControl_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GripperBrakeControl_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperBrakeControl_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperBrakeControl_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperBrakeControl_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperBrakeControl_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperBrakeControl_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperBrakeControl_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GripperBrakeControl_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperBrakeControl_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperBrakeControl_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GripperBrakeControl_Response__init(msg: *mut GripperBrakeControl_Response) -> bool;
    fn h2x__srv__GripperBrakeControl_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperBrakeControl_Response>, size: usize) -> bool;
    fn h2x__srv__GripperBrakeControl_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperBrakeControl_Response>);
    fn h2x__srv__GripperBrakeControl_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperBrakeControl_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperBrakeControl_Response>) -> bool;
}

// Corresponds to h2x__srv__GripperBrakeControl_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperBrakeControl_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for GripperBrakeControl_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GripperBrakeControl_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GripperBrakeControl_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperBrakeControl_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperBrakeControl_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperBrakeControl_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperBrakeControl_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperBrakeControl_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperBrakeControl_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GripperBrakeControl_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperBrakeControl_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperTorqueCalibrationZero_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GripperTorqueCalibrationZero_Request__init(msg: *mut GripperTorqueCalibrationZero_Request) -> bool;
    fn h2x__srv__GripperTorqueCalibrationZero_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperTorqueCalibrationZero_Request>, size: usize) -> bool;
    fn h2x__srv__GripperTorqueCalibrationZero_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperTorqueCalibrationZero_Request>);
    fn h2x__srv__GripperTorqueCalibrationZero_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperTorqueCalibrationZero_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperTorqueCalibrationZero_Request>) -> bool;
}

// Corresponds to h2x__srv__GripperTorqueCalibrationZero_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperTorqueCalibrationZero_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for GripperTorqueCalibrationZero_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GripperTorqueCalibrationZero_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GripperTorqueCalibrationZero_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperTorqueCalibrationZero_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperTorqueCalibrationZero_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperTorqueCalibrationZero_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperTorqueCalibrationZero_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperTorqueCalibrationZero_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperTorqueCalibrationZero_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GripperTorqueCalibrationZero_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperTorqueCalibrationZero_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperTorqueCalibrationZero_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GripperTorqueCalibrationZero_Response__init(msg: *mut GripperTorqueCalibrationZero_Response) -> bool;
    fn h2x__srv__GripperTorqueCalibrationZero_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperTorqueCalibrationZero_Response>, size: usize) -> bool;
    fn h2x__srv__GripperTorqueCalibrationZero_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperTorqueCalibrationZero_Response>);
    fn h2x__srv__GripperTorqueCalibrationZero_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperTorqueCalibrationZero_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperTorqueCalibrationZero_Response>) -> bool;
}

// Corresponds to h2x__srv__GripperTorqueCalibrationZero_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperTorqueCalibrationZero_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for GripperTorqueCalibrationZero_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GripperTorqueCalibrationZero_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GripperTorqueCalibrationZero_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperTorqueCalibrationZero_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperTorqueCalibrationZero_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperTorqueCalibrationZero_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GripperTorqueCalibrationZero_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperTorqueCalibrationZero_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperTorqueCalibrationZero_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GripperTorqueCalibrationZero_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GripperTorqueCalibrationZero_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUGyroZeroBiasCalibrtion_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUGyroZeroBiasCalibrtion_Request__init(msg: *mut IMUGyroZeroBiasCalibrtion_Request) -> bool;
    fn h2x__srv__IMUGyroZeroBiasCalibrtion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUGyroZeroBiasCalibrtion_Request>, size: usize) -> bool;
    fn h2x__srv__IMUGyroZeroBiasCalibrtion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUGyroZeroBiasCalibrtion_Request>);
    fn h2x__srv__IMUGyroZeroBiasCalibrtion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUGyroZeroBiasCalibrtion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUGyroZeroBiasCalibrtion_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUGyroZeroBiasCalibrtion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUGyroZeroBiasCalibrtion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUGyroZeroBiasCalibrtion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUGyroZeroBiasCalibrtion_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUGyroZeroBiasCalibrtion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUGyroZeroBiasCalibrtion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUGyroZeroBiasCalibrtion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUGyroZeroBiasCalibrtion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUGyroZeroBiasCalibrtion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUGyroZeroBiasCalibrtion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUGyroZeroBiasCalibrtion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUGyroZeroBiasCalibrtion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUGyroZeroBiasCalibrtion_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUGyroZeroBiasCalibrtion_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUGyroZeroBiasCalibrtion_Response__init(msg: *mut IMUGyroZeroBiasCalibrtion_Response) -> bool;
    fn h2x__srv__IMUGyroZeroBiasCalibrtion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUGyroZeroBiasCalibrtion_Response>, size: usize) -> bool;
    fn h2x__srv__IMUGyroZeroBiasCalibrtion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUGyroZeroBiasCalibrtion_Response>);
    fn h2x__srv__IMUGyroZeroBiasCalibrtion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUGyroZeroBiasCalibrtion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUGyroZeroBiasCalibrtion_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUGyroZeroBiasCalibrtion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUGyroZeroBiasCalibrtion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUGyroZeroBiasCalibrtion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUGyroZeroBiasCalibrtion_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUGyroZeroBiasCalibrtion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUGyroZeroBiasCalibrtion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUGyroZeroBiasCalibrtion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUGyroZeroBiasCalibrtion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUGyroZeroBiasCalibrtion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUGyroZeroBiasCalibrtion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUGyroZeroBiasCalibrtion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUGyroZeroBiasCalibrtion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUGyroZeroBiasCalibrtion_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStart_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUMagneticFieldCalibrationStart_Request__init(msg: *mut IMUMagneticFieldCalibrationStart_Request) -> bool;
    fn h2x__srv__IMUMagneticFieldCalibrationStart_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStart_Request>, size: usize) -> bool;
    fn h2x__srv__IMUMagneticFieldCalibrationStart_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStart_Request>);
    fn h2x__srv__IMUMagneticFieldCalibrationStart_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStart_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStart_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStart_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUMagneticFieldCalibrationStart_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUMagneticFieldCalibrationStart_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUMagneticFieldCalibrationStart_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUMagneticFieldCalibrationStart_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUMagneticFieldCalibrationStart_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStart_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStart_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStart_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUMagneticFieldCalibrationStart_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUMagneticFieldCalibrationStart_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUMagneticFieldCalibrationStart_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStart_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStart_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUMagneticFieldCalibrationStart_Response__init(msg: *mut IMUMagneticFieldCalibrationStart_Response) -> bool;
    fn h2x__srv__IMUMagneticFieldCalibrationStart_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStart_Response>, size: usize) -> bool;
    fn h2x__srv__IMUMagneticFieldCalibrationStart_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStart_Response>);
    fn h2x__srv__IMUMagneticFieldCalibrationStart_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStart_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStart_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStart_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUMagneticFieldCalibrationStart_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUMagneticFieldCalibrationStart_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUMagneticFieldCalibrationStart_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUMagneticFieldCalibrationStart_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUMagneticFieldCalibrationStart_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStart_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStart_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStart_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUMagneticFieldCalibrationStart_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUMagneticFieldCalibrationStart_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUMagneticFieldCalibrationStart_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStart_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStop_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUMagneticFieldCalibrationStop_Request__init(msg: *mut IMUMagneticFieldCalibrationStop_Request) -> bool;
    fn h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStop_Request>, size: usize) -> bool;
    fn h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStop_Request>);
    fn h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStop_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStop_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStop_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUMagneticFieldCalibrationStop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUMagneticFieldCalibrationStop_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUMagneticFieldCalibrationStop_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUMagneticFieldCalibrationStop_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUMagneticFieldCalibrationStop_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUMagneticFieldCalibrationStop_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUMagneticFieldCalibrationStop_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUMagneticFieldCalibrationStop_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStop_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStop_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUMagneticFieldCalibrationStop_Response__init(msg: *mut IMUMagneticFieldCalibrationStop_Response) -> bool;
    fn h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStop_Response>, size: usize) -> bool;
    fn h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStop_Response>);
    fn h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStop_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUMagneticFieldCalibrationStop_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStop_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUMagneticFieldCalibrationStop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUMagneticFieldCalibrationStop_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUMagneticFieldCalibrationStop_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUMagneticFieldCalibrationStop_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUMagneticFieldCalibrationStop_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUMagneticFieldCalibrationStop_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUMagneticFieldCalibrationStop_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUMagneticFieldCalibrationStop_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStop_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUAccModuleCalibrtion_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUAccModuleCalibrtion_Request__init(msg: *mut IMUAccModuleCalibrtion_Request) -> bool;
    fn h2x__srv__IMUAccModuleCalibrtion_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUAccModuleCalibrtion_Request>, size: usize) -> bool;
    fn h2x__srv__IMUAccModuleCalibrtion_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUAccModuleCalibrtion_Request>);
    fn h2x__srv__IMUAccModuleCalibrtion_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUAccModuleCalibrtion_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUAccModuleCalibrtion_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUAccModuleCalibrtion_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUAccModuleCalibrtion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUAccModuleCalibrtion_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUAccModuleCalibrtion_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUAccModuleCalibrtion_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUAccModuleCalibrtion_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUAccModuleCalibrtion_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUAccModuleCalibrtion_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUAccModuleCalibrtion_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUAccModuleCalibrtion_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUAccModuleCalibrtion_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUAccModuleCalibrtion_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUAccModuleCalibrtion_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUAccModuleCalibrtion_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUAccModuleCalibrtion_Response__init(msg: *mut IMUAccModuleCalibrtion_Response) -> bool;
    fn h2x__srv__IMUAccModuleCalibrtion_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUAccModuleCalibrtion_Response>, size: usize) -> bool;
    fn h2x__srv__IMUAccModuleCalibrtion_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUAccModuleCalibrtion_Response>);
    fn h2x__srv__IMUAccModuleCalibrtion_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUAccModuleCalibrtion_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUAccModuleCalibrtion_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUAccModuleCalibrtion_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUAccModuleCalibrtion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUAccModuleCalibrtion_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUAccModuleCalibrtion_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUAccModuleCalibrtion_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUAccModuleCalibrtion_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUAccModuleCalibrtion_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUAccModuleCalibrtion_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUAccModuleCalibrtion_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUAccModuleCalibrtion_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUAccModuleCalibrtion_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUAccModuleCalibrtion_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUAccModuleCalibrtion_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUHorizonReferenceSet_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUHorizonReferenceSet_Request__init(msg: *mut IMUHorizonReferenceSet_Request) -> bool;
    fn h2x__srv__IMUHorizonReferenceSet_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUHorizonReferenceSet_Request>, size: usize) -> bool;
    fn h2x__srv__IMUHorizonReferenceSet_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUHorizonReferenceSet_Request>);
    fn h2x__srv__IMUHorizonReferenceSet_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUHorizonReferenceSet_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUHorizonReferenceSet_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUHorizonReferenceSet_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUHorizonReferenceSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUHorizonReferenceSet_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUHorizonReferenceSet_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUHorizonReferenceSet_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUHorizonReferenceSet_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizonReferenceSet_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizonReferenceSet_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizonReferenceSet_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUHorizonReferenceSet_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUHorizonReferenceSet_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUHorizonReferenceSet_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUHorizonReferenceSet_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUHorizonReferenceSet_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUHorizonReferenceSet_Response__init(msg: *mut IMUHorizonReferenceSet_Response) -> bool;
    fn h2x__srv__IMUHorizonReferenceSet_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUHorizonReferenceSet_Response>, size: usize) -> bool;
    fn h2x__srv__IMUHorizonReferenceSet_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUHorizonReferenceSet_Response>);
    fn h2x__srv__IMUHorizonReferenceSet_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUHorizonReferenceSet_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUHorizonReferenceSet_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUHorizonReferenceSet_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUHorizonReferenceSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUHorizonReferenceSet_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUHorizonReferenceSet_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUHorizonReferenceSet_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUHorizonReferenceSet_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizonReferenceSet_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizonReferenceSet_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizonReferenceSet_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUHorizonReferenceSet_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUHorizonReferenceSet_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUHorizonReferenceSet_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUHorizonReferenceSet_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUHorizontalInstallationSet_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUHorizontalInstallationSet_Request__init(msg: *mut IMUHorizontalInstallationSet_Request) -> bool;
    fn h2x__srv__IMUHorizontalInstallationSet_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUHorizontalInstallationSet_Request>, size: usize) -> bool;
    fn h2x__srv__IMUHorizontalInstallationSet_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUHorizontalInstallationSet_Request>);
    fn h2x__srv__IMUHorizontalInstallationSet_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUHorizontalInstallationSet_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUHorizontalInstallationSet_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUHorizontalInstallationSet_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUHorizontalInstallationSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUHorizontalInstallationSet_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUHorizontalInstallationSet_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUHorizontalInstallationSet_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUHorizontalInstallationSet_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizontalInstallationSet_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizontalInstallationSet_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizontalInstallationSet_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUHorizontalInstallationSet_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUHorizontalInstallationSet_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUHorizontalInstallationSet_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUHorizontalInstallationSet_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUHorizontalInstallationSet_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUHorizontalInstallationSet_Response__init(msg: *mut IMUHorizontalInstallationSet_Response) -> bool;
    fn h2x__srv__IMUHorizontalInstallationSet_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUHorizontalInstallationSet_Response>, size: usize) -> bool;
    fn h2x__srv__IMUHorizontalInstallationSet_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUHorizontalInstallationSet_Response>);
    fn h2x__srv__IMUHorizontalInstallationSet_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUHorizontalInstallationSet_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUHorizontalInstallationSet_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUHorizontalInstallationSet_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUHorizontalInstallationSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUHorizontalInstallationSet_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUHorizontalInstallationSet_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUHorizontalInstallationSet_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUHorizontalInstallationSet_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizontalInstallationSet_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizontalInstallationSet_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUHorizontalInstallationSet_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUHorizontalInstallationSet_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUHorizontalInstallationSet_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUHorizontalInstallationSet_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUHorizontalInstallationSet_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUVerticalInstallationSet_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUVerticalInstallationSet_Request__init(msg: *mut IMUVerticalInstallationSet_Request) -> bool;
    fn h2x__srv__IMUVerticalInstallationSet_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUVerticalInstallationSet_Request>, size: usize) -> bool;
    fn h2x__srv__IMUVerticalInstallationSet_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUVerticalInstallationSet_Request>);
    fn h2x__srv__IMUVerticalInstallationSet_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUVerticalInstallationSet_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUVerticalInstallationSet_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUVerticalInstallationSet_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUVerticalInstallationSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUVerticalInstallationSet_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUVerticalInstallationSet_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUVerticalInstallationSet_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUVerticalInstallationSet_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUVerticalInstallationSet_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUVerticalInstallationSet_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUVerticalInstallationSet_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUVerticalInstallationSet_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUVerticalInstallationSet_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUVerticalInstallationSet_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUVerticalInstallationSet_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUVerticalInstallationSet_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUVerticalInstallationSet_Response__init(msg: *mut IMUVerticalInstallationSet_Response) -> bool;
    fn h2x__srv__IMUVerticalInstallationSet_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUVerticalInstallationSet_Response>, size: usize) -> bool;
    fn h2x__srv__IMUVerticalInstallationSet_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUVerticalInstallationSet_Response>);
    fn h2x__srv__IMUVerticalInstallationSet_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUVerticalInstallationSet_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUVerticalInstallationSet_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUVerticalInstallationSet_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUVerticalInstallationSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUVerticalInstallationSet_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUVerticalInstallationSet_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUVerticalInstallationSet_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUVerticalInstallationSet_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUVerticalInstallationSet_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUVerticalInstallationSet_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUVerticalInstallationSet_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUVerticalInstallationSet_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUVerticalInstallationSet_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUVerticalInstallationSet_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUVerticalInstallationSet_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUInternalSolverSourceSet_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUInternalSolverSourceSet_Request__init(msg: *mut IMUInternalSolverSourceSet_Request) -> bool;
    fn h2x__srv__IMUInternalSolverSourceSet_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUInternalSolverSourceSet_Request>, size: usize) -> bool;
    fn h2x__srv__IMUInternalSolverSourceSet_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUInternalSolverSourceSet_Request>);
    fn h2x__srv__IMUInternalSolverSourceSet_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUInternalSolverSourceSet_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUInternalSolverSourceSet_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUInternalSolverSourceSet_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUInternalSolverSourceSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUInternalSolverSourceSet_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUInternalSolverSourceSet_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUInternalSolverSourceSet_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUInternalSolverSourceSet_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUInternalSolverSourceSet_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUInternalSolverSourceSet_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUInternalSolverSourceSet_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUInternalSolverSourceSet_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUInternalSolverSourceSet_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUInternalSolverSourceSet_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUInternalSolverSourceSet_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUInternalSolverSourceSet_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUInternalSolverSourceSet_Response__init(msg: *mut IMUInternalSolverSourceSet_Response) -> bool;
    fn h2x__srv__IMUInternalSolverSourceSet_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUInternalSolverSourceSet_Response>, size: usize) -> bool;
    fn h2x__srv__IMUInternalSolverSourceSet_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUInternalSolverSourceSet_Response>);
    fn h2x__srv__IMUInternalSolverSourceSet_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUInternalSolverSourceSet_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUInternalSolverSourceSet_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUInternalSolverSourceSet_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUInternalSolverSourceSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUInternalSolverSourceSet_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUInternalSolverSourceSet_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUInternalSolverSourceSet_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUInternalSolverSourceSet_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUInternalSolverSourceSet_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUInternalSolverSourceSet_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUInternalSolverSourceSet_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUInternalSolverSourceSet_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUInternalSolverSourceSet_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUInternalSolverSourceSet_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUInternalSolverSourceSet_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUExternalSolverSourceSet_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUExternalSolverSourceSet_Request__init(msg: *mut IMUExternalSolverSourceSet_Request) -> bool;
    fn h2x__srv__IMUExternalSolverSourceSet_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUExternalSolverSourceSet_Request>, size: usize) -> bool;
    fn h2x__srv__IMUExternalSolverSourceSet_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUExternalSolverSourceSet_Request>);
    fn h2x__srv__IMUExternalSolverSourceSet_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUExternalSolverSourceSet_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUExternalSolverSourceSet_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUExternalSolverSourceSet_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUExternalSolverSourceSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUExternalSolverSourceSet_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUExternalSolverSourceSet_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUExternalSolverSourceSet_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUExternalSolverSourceSet_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUExternalSolverSourceSet_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUExternalSolverSourceSet_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUExternalSolverSourceSet_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUExternalSolverSourceSet_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUExternalSolverSourceSet_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUExternalSolverSourceSet_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUExternalSolverSourceSet_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUExternalSolverSourceSet_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUExternalSolverSourceSet_Response__init(msg: *mut IMUExternalSolverSourceSet_Response) -> bool;
    fn h2x__srv__IMUExternalSolverSourceSet_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUExternalSolverSourceSet_Response>, size: usize) -> bool;
    fn h2x__srv__IMUExternalSolverSourceSet_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUExternalSolverSourceSet_Response>);
    fn h2x__srv__IMUExternalSolverSourceSet_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUExternalSolverSourceSet_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUExternalSolverSourceSet_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUExternalSolverSourceSet_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUExternalSolverSourceSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUExternalSolverSourceSet_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUExternalSolverSourceSet_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUExternalSolverSourceSet_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUExternalSolverSourceSet_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUExternalSolverSourceSet_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUExternalSolverSourceSet_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUExternalSolverSourceSet_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUExternalSolverSourceSet_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUExternalSolverSourceSet_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUExternalSolverSourceSet_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUExternalSolverSourceSet_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUControlReset_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUControlReset_Request__init(msg: *mut IMUControlReset_Request) -> bool;
    fn h2x__srv__IMUControlReset_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUControlReset_Request>, size: usize) -> bool;
    fn h2x__srv__IMUControlReset_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUControlReset_Request>);
    fn h2x__srv__IMUControlReset_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUControlReset_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUControlReset_Request>) -> bool;
}

// Corresponds to h2x__srv__IMUControlReset_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUControlReset_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUControlReset_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUControlReset_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUControlReset_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUControlReset_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUControlReset_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUControlReset_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUControlReset_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUControlReset_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUControlReset_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUControlReset_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUControlReset_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUControlReset_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__IMUControlReset_Response__init(msg: *mut IMUControlReset_Response) -> bool;
    fn h2x__srv__IMUControlReset_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUControlReset_Response>, size: usize) -> bool;
    fn h2x__srv__IMUControlReset_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUControlReset_Response>);
    fn h2x__srv__IMUControlReset_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUControlReset_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUControlReset_Response>) -> bool;
}

// Corresponds to h2x__srv__IMUControlReset_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUControlReset_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUControlReset_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__IMUControlReset_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__IMUControlReset_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUControlReset_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUControlReset_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUControlReset_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__IMUControlReset_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUControlReset_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUControlReset_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/IMUControlReset_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__IMUControlReset_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__Set5GAirplane_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__Set5GAirplane_Request__init(msg: *mut Set5GAirplane_Request) -> bool;
    fn h2x__srv__Set5GAirplane_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Set5GAirplane_Request>, size: usize) -> bool;
    fn h2x__srv__Set5GAirplane_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Set5GAirplane_Request>);
    fn h2x__srv__Set5GAirplane_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Set5GAirplane_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Set5GAirplane_Request>) -> bool;
}

// Corresponds to h2x__srv__Set5GAirplane_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Set5GAirplane_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for Set5GAirplane_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__Set5GAirplane_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__Set5GAirplane_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Set5GAirplane_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GAirplane_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GAirplane_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GAirplane_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Set5GAirplane_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Set5GAirplane_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/Set5GAirplane_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__Set5GAirplane_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__Set5GAirplane_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__Set5GAirplane_Response__init(msg: *mut Set5GAirplane_Response) -> bool;
    fn h2x__srv__Set5GAirplane_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Set5GAirplane_Response>, size: usize) -> bool;
    fn h2x__srv__Set5GAirplane_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Set5GAirplane_Response>);
    fn h2x__srv__Set5GAirplane_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Set5GAirplane_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Set5GAirplane_Response>) -> bool;
}

// Corresponds to h2x__srv__Set5GAirplane_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Set5GAirplane_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for Set5GAirplane_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__Set5GAirplane_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__Set5GAirplane_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Set5GAirplane_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GAirplane_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GAirplane_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GAirplane_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Set5GAirplane_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Set5GAirplane_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/Set5GAirplane_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__Set5GAirplane_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__Set5GGnss_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__Set5GGnss_Request__init(msg: *mut Set5GGnss_Request) -> bool;
    fn h2x__srv__Set5GGnss_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Set5GGnss_Request>, size: usize) -> bool;
    fn h2x__srv__Set5GGnss_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Set5GGnss_Request>);
    fn h2x__srv__Set5GGnss_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Set5GGnss_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Set5GGnss_Request>) -> bool;
}

// Corresponds to h2x__srv__Set5GGnss_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Set5GGnss_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for Set5GGnss_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__Set5GGnss_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__Set5GGnss_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Set5GGnss_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GGnss_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GGnss_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GGnss_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Set5GGnss_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Set5GGnss_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/Set5GGnss_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__Set5GGnss_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__Set5GGnss_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__Set5GGnss_Response__init(msg: *mut Set5GGnss_Response) -> bool;
    fn h2x__srv__Set5GGnss_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Set5GGnss_Response>, size: usize) -> bool;
    fn h2x__srv__Set5GGnss_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Set5GGnss_Response>);
    fn h2x__srv__Set5GGnss_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Set5GGnss_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Set5GGnss_Response>) -> bool;
}

// Corresponds to h2x__srv__Set5GGnss_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Set5GGnss_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for Set5GGnss_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__Set5GGnss_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__Set5GGnss_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Set5GGnss_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GGnss_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GGnss_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__Set5GGnss_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Set5GGnss_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Set5GGnss_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/Set5GGnss_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__Set5GGnss_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetBlueTooth_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetBlueTooth_Request__init(msg: *mut SetBlueTooth_Request) -> bool;
    fn h2x__srv__SetBlueTooth_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBlueTooth_Request>, size: usize) -> bool;
    fn h2x__srv__SetBlueTooth_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBlueTooth_Request>);
    fn h2x__srv__SetBlueTooth_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBlueTooth_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBlueTooth_Request>) -> bool;
}

// Corresponds to h2x__srv__SetBlueTooth_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBlueTooth_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for SetBlueTooth_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetBlueTooth_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetBlueTooth_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBlueTooth_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetBlueTooth_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetBlueTooth_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetBlueTooth_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBlueTooth_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBlueTooth_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetBlueTooth_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetBlueTooth_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetBlueTooth_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetBlueTooth_Response__init(msg: *mut SetBlueTooth_Response) -> bool;
    fn h2x__srv__SetBlueTooth_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetBlueTooth_Response>, size: usize) -> bool;
    fn h2x__srv__SetBlueTooth_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetBlueTooth_Response>);
    fn h2x__srv__SetBlueTooth_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetBlueTooth_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetBlueTooth_Response>) -> bool;
}

// Corresponds to h2x__srv__SetBlueTooth_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBlueTooth_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetBlueTooth_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetBlueTooth_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetBlueTooth_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetBlueTooth_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetBlueTooth_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetBlueTooth_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetBlueTooth_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetBlueTooth_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetBlueTooth_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetBlueTooth_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetBlueTooth_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__AwakenBlueTooth_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__AwakenBlueTooth_Request__init(msg: *mut AwakenBlueTooth_Request) -> bool;
    fn h2x__srv__AwakenBlueTooth_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AwakenBlueTooth_Request>, size: usize) -> bool;
    fn h2x__srv__AwakenBlueTooth_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AwakenBlueTooth_Request>);
    fn h2x__srv__AwakenBlueTooth_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AwakenBlueTooth_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AwakenBlueTooth_Request>) -> bool;
}

// Corresponds to h2x__srv__AwakenBlueTooth_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AwakenBlueTooth_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for AwakenBlueTooth_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__AwakenBlueTooth_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__AwakenBlueTooth_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AwakenBlueTooth_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__AwakenBlueTooth_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__AwakenBlueTooth_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__AwakenBlueTooth_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AwakenBlueTooth_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AwakenBlueTooth_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/AwakenBlueTooth_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__AwakenBlueTooth_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__AwakenBlueTooth_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__AwakenBlueTooth_Response__init(msg: *mut AwakenBlueTooth_Response) -> bool;
    fn h2x__srv__AwakenBlueTooth_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AwakenBlueTooth_Response>, size: usize) -> bool;
    fn h2x__srv__AwakenBlueTooth_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AwakenBlueTooth_Response>);
    fn h2x__srv__AwakenBlueTooth_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AwakenBlueTooth_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AwakenBlueTooth_Response>) -> bool;
}

// Corresponds to h2x__srv__AwakenBlueTooth_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AwakenBlueTooth_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for AwakenBlueTooth_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__AwakenBlueTooth_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__AwakenBlueTooth_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AwakenBlueTooth_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__AwakenBlueTooth_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__AwakenBlueTooth_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__AwakenBlueTooth_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AwakenBlueTooth_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AwakenBlueTooth_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/AwakenBlueTooth_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__AwakenBlueTooth_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetWlanPower_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetWlanPower_Request__init(msg: *mut SetWlanPower_Request) -> bool;
    fn h2x__srv__SetWlanPower_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetWlanPower_Request>, size: usize) -> bool;
    fn h2x__srv__SetWlanPower_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetWlanPower_Request>);
    fn h2x__srv__SetWlanPower_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetWlanPower_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetWlanPower_Request>) -> bool;
}

// Corresponds to h2x__srv__SetWlanPower_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWlanPower_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for SetWlanPower_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetWlanPower_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetWlanPower_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetWlanPower_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanPower_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanPower_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanPower_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetWlanPower_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetWlanPower_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetWlanPower_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetWlanPower_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetWlanPower_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetWlanPower_Response__init(msg: *mut SetWlanPower_Response) -> bool;
    fn h2x__srv__SetWlanPower_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetWlanPower_Response>, size: usize) -> bool;
    fn h2x__srv__SetWlanPower_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetWlanPower_Response>);
    fn h2x__srv__SetWlanPower_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetWlanPower_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetWlanPower_Response>) -> bool;
}

// Corresponds to h2x__srv__SetWlanPower_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWlanPower_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetWlanPower_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetWlanPower_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetWlanPower_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetWlanPower_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanPower_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanPower_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanPower_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetWlanPower_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetWlanPower_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetWlanPower_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetWlanPower_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetWlanrfPower_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetWlanrfPower_Request__init(msg: *mut SetWlanrfPower_Request) -> bool;
    fn h2x__srv__SetWlanrfPower_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetWlanrfPower_Request>, size: usize) -> bool;
    fn h2x__srv__SetWlanrfPower_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetWlanrfPower_Request>);
    fn h2x__srv__SetWlanrfPower_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetWlanrfPower_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetWlanrfPower_Request>) -> bool;
}

// Corresponds to h2x__srv__SetWlanrfPower_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWlanrfPower_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for SetWlanrfPower_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetWlanrfPower_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetWlanrfPower_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetWlanrfPower_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanrfPower_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanrfPower_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanrfPower_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetWlanrfPower_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetWlanrfPower_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetWlanrfPower_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetWlanrfPower_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetWlanrfPower_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetWlanrfPower_Response__init(msg: *mut SetWlanrfPower_Response) -> bool;
    fn h2x__srv__SetWlanrfPower_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetWlanrfPower_Response>, size: usize) -> bool;
    fn h2x__srv__SetWlanrfPower_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetWlanrfPower_Response>);
    fn h2x__srv__SetWlanrfPower_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetWlanrfPower_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetWlanrfPower_Response>) -> bool;
}

// Corresponds to h2x__srv__SetWlanrfPower_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWlanrfPower_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetWlanrfPower_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetWlanrfPower_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetWlanrfPower_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetWlanrfPower_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanrfPower_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanrfPower_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetWlanrfPower_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetWlanrfPower_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetWlanrfPower_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetWlanrfPower_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetWlanrfPower_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetLowBatteryThreshold_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetLowBatteryThreshold_Request__init(msg: *mut SetLowBatteryThreshold_Request) -> bool;
    fn h2x__srv__SetLowBatteryThreshold_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetLowBatteryThreshold_Request>, size: usize) -> bool;
    fn h2x__srv__SetLowBatteryThreshold_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetLowBatteryThreshold_Request>);
    fn h2x__srv__SetLowBatteryThreshold_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetLowBatteryThreshold_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetLowBatteryThreshold_Request>) -> bool;
}

// Corresponds to h2x__srv__SetLowBatteryThreshold_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLowBatteryThreshold_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub low_battery_threshold: i32,

}



impl Default for SetLowBatteryThreshold_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetLowBatteryThreshold_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetLowBatteryThreshold_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetLowBatteryThreshold_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetLowBatteryThreshold_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetLowBatteryThreshold_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetLowBatteryThreshold_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetLowBatteryThreshold_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetLowBatteryThreshold_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetLowBatteryThreshold_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetLowBatteryThreshold_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetLowBatteryThreshold_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__SetLowBatteryThreshold_Response__init(msg: *mut SetLowBatteryThreshold_Response) -> bool;
    fn h2x__srv__SetLowBatteryThreshold_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetLowBatteryThreshold_Response>, size: usize) -> bool;
    fn h2x__srv__SetLowBatteryThreshold_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetLowBatteryThreshold_Response>);
    fn h2x__srv__SetLowBatteryThreshold_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetLowBatteryThreshold_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetLowBatteryThreshold_Response>) -> bool;
}

// Corresponds to h2x__srv__SetLowBatteryThreshold_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLowBatteryThreshold_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetLowBatteryThreshold_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__SetLowBatteryThreshold_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__SetLowBatteryThreshold_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetLowBatteryThreshold_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetLowBatteryThreshold_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetLowBatteryThreshold_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__SetLowBatteryThreshold_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetLowBatteryThreshold_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetLowBatteryThreshold_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/SetLowBatteryThreshold_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__SetLowBatteryThreshold_Response() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetLowBatteryThreshold_Request() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetLowBatteryThreshold_Request__init(msg: *mut GetLowBatteryThreshold_Request) -> bool;
    fn h2x__srv__GetLowBatteryThreshold_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetLowBatteryThreshold_Request>, size: usize) -> bool;
    fn h2x__srv__GetLowBatteryThreshold_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetLowBatteryThreshold_Request>);
    fn h2x__srv__GetLowBatteryThreshold_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetLowBatteryThreshold_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetLowBatteryThreshold_Request>) -> bool;
}

// Corresponds to h2x__srv__GetLowBatteryThreshold_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetLowBatteryThreshold_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetLowBatteryThreshold_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetLowBatteryThreshold_Request__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetLowBatteryThreshold_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetLowBatteryThreshold_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetLowBatteryThreshold_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetLowBatteryThreshold_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetLowBatteryThreshold_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetLowBatteryThreshold_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetLowBatteryThreshold_Request where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetLowBatteryThreshold_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetLowBatteryThreshold_Request() }
  }
}


#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetLowBatteryThreshold_Response() -> *const std::ffi::c_void;
}

#[link(name = "h2x__rosidl_generator_c")]
extern "C" {
    fn h2x__srv__GetLowBatteryThreshold_Response__init(msg: *mut GetLowBatteryThreshold_Response) -> bool;
    fn h2x__srv__GetLowBatteryThreshold_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetLowBatteryThreshold_Response>, size: usize) -> bool;
    fn h2x__srv__GetLowBatteryThreshold_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetLowBatteryThreshold_Response>);
    fn h2x__srv__GetLowBatteryThreshold_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetLowBatteryThreshold_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetLowBatteryThreshold_Response>) -> bool;
}

// Corresponds to h2x__srv__GetLowBatteryThreshold_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetLowBatteryThreshold_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub low_battery_threshold: i32,

}



impl Default for GetLowBatteryThreshold_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !h2x__srv__GetLowBatteryThreshold_Response__init(&mut msg as *mut _) {
        panic!("Call to h2x__srv__GetLowBatteryThreshold_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetLowBatteryThreshold_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetLowBatteryThreshold_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetLowBatteryThreshold_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { h2x__srv__GetLowBatteryThreshold_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetLowBatteryThreshold_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetLowBatteryThreshold_Response where Self: Sized {
  const TYPE_NAME: &'static str = "h2x/srv/GetLowBatteryThreshold_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__h2x__srv__GetLowBatteryThreshold_Response() }
  }
}






#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__CalibrateMotorElectricalAngle() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__CalibrateMotorElectricalAngle
#[allow(missing_docs, non_camel_case_types)]
pub struct CalibrateMotorElectricalAngle;

impl rosidl_runtime_rs::Service for CalibrateMotorElectricalAngle {
    type Request = CalibrateMotorElectricalAngle_Request;
    type Response = CalibrateMotorElectricalAngle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__CalibrateMotorElectricalAngle() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__CalibrationZero() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__CalibrationZero
#[allow(missing_docs, non_camel_case_types)]
pub struct CalibrationZero;

impl rosidl_runtime_rs::Service for CalibrationZero {
    type Request = CalibrationZero_Request;
    type Response = CalibrationZero_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__CalibrationZero() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetJointMonitor() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GetJointMonitor
#[allow(missing_docs, non_camel_case_types)]
pub struct GetJointMonitor;

impl rosidl_runtime_rs::Service for GetJointMonitor {
    type Request = GetJointMonitor_Request;
    type Response = GetJointMonitor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetJointMonitor() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__ResetJointParameters() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__ResetJointParameters
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetJointParameters;

impl rosidl_runtime_rs::Service for ResetJointParameters {
    type Request = ResetJointParameters_Request;
    type Response = ResetJointParameters_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__ResetJointParameters() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SaveJointParameters() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SaveJointParameters
#[allow(missing_docs, non_camel_case_types)]
pub struct SaveJointParameters;

impl rosidl_runtime_rs::Service for SaveJointParameters {
    type Request = SaveJointParameters_Request;
    type Response = SaveJointParameters_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SaveJointParameters() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetJointMonitor() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetJointMonitor
#[allow(missing_docs, non_camel_case_types)]
pub struct SetJointMonitor;

impl rosidl_runtime_rs::Service for SetJointMonitor {
    type Request = SetJointMonitor_Request;
    type Response = SetJointMonitor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetJointMonitor() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetJointHardLimit() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GetJointHardLimit
#[allow(missing_docs, non_camel_case_types)]
pub struct GetJointHardLimit;

impl rosidl_runtime_rs::Service for GetJointHardLimit {
    type Request = GetJointHardLimit_Request;
    type Response = GetJointHardLimit_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetJointHardLimit() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__ClearError() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__ClearError
#[allow(missing_docs, non_camel_case_types)]
pub struct ClearError;

impl rosidl_runtime_rs::Service for ClearError {
    type Request = ClearError_Request;
    type Response = ClearError_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__ClearError() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetMechanicalLimitToJoint() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetMechanicalLimitToJoint
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMechanicalLimitToJoint;

impl rosidl_runtime_rs::Service for SetMechanicalLimitToJoint {
    type Request = SetMechanicalLimitToJoint_Request;
    type Response = SetMechanicalLimitToJoint_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetMechanicalLimitToJoint() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__CommandReset() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__CommandReset
#[allow(missing_docs, non_camel_case_types)]
pub struct CommandReset;

impl rosidl_runtime_rs::Service for CommandReset {
    type Request = CommandReset_Request;
    type Response = CommandReset_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__CommandReset() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetJointDirection() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetJointDirection
#[allow(missing_docs, non_camel_case_types)]
pub struct SetJointDirection;

impl rosidl_runtime_rs::Service for SetJointDirection {
    type Request = SetJointDirection_Request;
    type Response = SetJointDirection_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetJointDirection() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GripperClearError() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GripperClearError
#[allow(missing_docs, non_camel_case_types)]
pub struct GripperClearError;

impl rosidl_runtime_rs::Service for GripperClearError {
    type Request = GripperClearError_Request;
    type Response = GripperClearError_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GripperClearError() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetGripperMaxForce() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GetGripperMaxForce
#[allow(missing_docs, non_camel_case_types)]
pub struct GetGripperMaxForce;

impl rosidl_runtime_rs::Service for GetGripperMaxForce {
    type Request = GetGripperMaxForce_Request;
    type Response = GetGripperMaxForce_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetGripperMaxForce() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetGripperStrokeRange() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GetGripperStrokeRange
#[allow(missing_docs, non_camel_case_types)]
pub struct GetGripperStrokeRange;

impl rosidl_runtime_rs::Service for GetGripperStrokeRange {
    type Request = GetGripperStrokeRange_Request;
    type Response = GetGripperStrokeRange_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetGripperStrokeRange() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GripperInitialize() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GripperInitialize
#[allow(missing_docs, non_camel_case_types)]
pub struct GripperInitialize;

impl rosidl_runtime_rs::Service for GripperInitialize {
    type Request = GripperInitialize_Request;
    type Response = GripperInitialize_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GripperInitialize() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetGripperMaxForce() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetGripperMaxForce
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGripperMaxForce;

impl rosidl_runtime_rs::Service for SetGripperMaxForce {
    type Request = SetGripperMaxForce_Request;
    type Response = SetGripperMaxForce_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetGripperMaxForce() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetGripperStrokeRange() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetGripperStrokeRange
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGripperStrokeRange;

impl rosidl_runtime_rs::Service for SetGripperStrokeRange {
    type Request = SetGripperStrokeRange_Request;
    type Response = SetGripperStrokeRange_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetGripperStrokeRange() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GripperBrakeControl() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GripperBrakeControl
#[allow(missing_docs, non_camel_case_types)]
pub struct GripperBrakeControl;

impl rosidl_runtime_rs::Service for GripperBrakeControl {
    type Request = GripperBrakeControl_Request;
    type Response = GripperBrakeControl_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GripperBrakeControl() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GripperTorqueCalibrationZero() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GripperTorqueCalibrationZero
#[allow(missing_docs, non_camel_case_types)]
pub struct GripperTorqueCalibrationZero;

impl rosidl_runtime_rs::Service for GripperTorqueCalibrationZero {
    type Request = GripperTorqueCalibrationZero_Request;
    type Response = GripperTorqueCalibrationZero_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GripperTorqueCalibrationZero() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUGyroZeroBiasCalibrtion() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUGyroZeroBiasCalibrtion
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUGyroZeroBiasCalibrtion;

impl rosidl_runtime_rs::Service for IMUGyroZeroBiasCalibrtion {
    type Request = IMUGyroZeroBiasCalibrtion_Request;
    type Response = IMUGyroZeroBiasCalibrtion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUGyroZeroBiasCalibrtion() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStart() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStart
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUMagneticFieldCalibrationStart;

impl rosidl_runtime_rs::Service for IMUMagneticFieldCalibrationStart {
    type Request = IMUMagneticFieldCalibrationStart_Request;
    type Response = IMUMagneticFieldCalibrationStart_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStart() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStop() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStop
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUMagneticFieldCalibrationStop;

impl rosidl_runtime_rs::Service for IMUMagneticFieldCalibrationStop {
    type Request = IMUMagneticFieldCalibrationStop_Request;
    type Response = IMUMagneticFieldCalibrationStop_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUMagneticFieldCalibrationStop() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUAccModuleCalibrtion() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUAccModuleCalibrtion
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUAccModuleCalibrtion;

impl rosidl_runtime_rs::Service for IMUAccModuleCalibrtion {
    type Request = IMUAccModuleCalibrtion_Request;
    type Response = IMUAccModuleCalibrtion_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUAccModuleCalibrtion() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUHorizonReferenceSet() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUHorizonReferenceSet
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUHorizonReferenceSet;

impl rosidl_runtime_rs::Service for IMUHorizonReferenceSet {
    type Request = IMUHorizonReferenceSet_Request;
    type Response = IMUHorizonReferenceSet_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUHorizonReferenceSet() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUHorizontalInstallationSet() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUHorizontalInstallationSet
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUHorizontalInstallationSet;

impl rosidl_runtime_rs::Service for IMUHorizontalInstallationSet {
    type Request = IMUHorizontalInstallationSet_Request;
    type Response = IMUHorizontalInstallationSet_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUHorizontalInstallationSet() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUVerticalInstallationSet() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUVerticalInstallationSet
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUVerticalInstallationSet;

impl rosidl_runtime_rs::Service for IMUVerticalInstallationSet {
    type Request = IMUVerticalInstallationSet_Request;
    type Response = IMUVerticalInstallationSet_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUVerticalInstallationSet() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUInternalSolverSourceSet() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUInternalSolverSourceSet
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUInternalSolverSourceSet;

impl rosidl_runtime_rs::Service for IMUInternalSolverSourceSet {
    type Request = IMUInternalSolverSourceSet_Request;
    type Response = IMUInternalSolverSourceSet_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUInternalSolverSourceSet() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUExternalSolverSourceSet() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUExternalSolverSourceSet
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUExternalSolverSourceSet;

impl rosidl_runtime_rs::Service for IMUExternalSolverSourceSet {
    type Request = IMUExternalSolverSourceSet_Request;
    type Response = IMUExternalSolverSourceSet_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUExternalSolverSourceSet() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUControlReset() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__IMUControlReset
#[allow(missing_docs, non_camel_case_types)]
pub struct IMUControlReset;

impl rosidl_runtime_rs::Service for IMUControlReset {
    type Request = IMUControlReset_Request;
    type Response = IMUControlReset_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__IMUControlReset() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__Set5GAirplane() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__Set5GAirplane
#[allow(missing_docs, non_camel_case_types)]
pub struct Set5GAirplane;

impl rosidl_runtime_rs::Service for Set5GAirplane {
    type Request = Set5GAirplane_Request;
    type Response = Set5GAirplane_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__Set5GAirplane() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__Set5GGnss() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__Set5GGnss
#[allow(missing_docs, non_camel_case_types)]
pub struct Set5GGnss;

impl rosidl_runtime_rs::Service for Set5GGnss {
    type Request = Set5GGnss_Request;
    type Response = Set5GGnss_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__Set5GGnss() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetBlueTooth() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetBlueTooth
#[allow(missing_docs, non_camel_case_types)]
pub struct SetBlueTooth;

impl rosidl_runtime_rs::Service for SetBlueTooth {
    type Request = SetBlueTooth_Request;
    type Response = SetBlueTooth_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetBlueTooth() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__AwakenBlueTooth() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__AwakenBlueTooth
#[allow(missing_docs, non_camel_case_types)]
pub struct AwakenBlueTooth;

impl rosidl_runtime_rs::Service for AwakenBlueTooth {
    type Request = AwakenBlueTooth_Request;
    type Response = AwakenBlueTooth_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__AwakenBlueTooth() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetWlanPower() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetWlanPower
#[allow(missing_docs, non_camel_case_types)]
pub struct SetWlanPower;

impl rosidl_runtime_rs::Service for SetWlanPower {
    type Request = SetWlanPower_Request;
    type Response = SetWlanPower_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetWlanPower() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetWlanrfPower() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetWlanrfPower
#[allow(missing_docs, non_camel_case_types)]
pub struct SetWlanrfPower;

impl rosidl_runtime_rs::Service for SetWlanrfPower {
    type Request = SetWlanrfPower_Request;
    type Response = SetWlanrfPower_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetWlanrfPower() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetLowBatteryThreshold() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__SetLowBatteryThreshold
#[allow(missing_docs, non_camel_case_types)]
pub struct SetLowBatteryThreshold;

impl rosidl_runtime_rs::Service for SetLowBatteryThreshold {
    type Request = SetLowBatteryThreshold_Request;
    type Response = SetLowBatteryThreshold_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__SetLowBatteryThreshold() }
    }
}




#[link(name = "h2x__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetLowBatteryThreshold() -> *const std::ffi::c_void;
}

// Corresponds to h2x__srv__GetLowBatteryThreshold
#[allow(missing_docs, non_camel_case_types)]
pub struct GetLowBatteryThreshold;

impl rosidl_runtime_rs::Service for GetLowBatteryThreshold {
    type Request = GetLowBatteryThreshold_Request;
    type Response = GetLowBatteryThreshold_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__h2x__srv__GetLowBatteryThreshold() }
    }
}


