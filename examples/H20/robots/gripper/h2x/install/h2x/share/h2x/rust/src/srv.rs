#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to h2x__srv__CalibrateMotorElectricalAngle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateMotorElectricalAngle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for CalibrateMotorElectricalAngle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalibrateMotorElectricalAngle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrateMotorElectricalAngle_Request {
  type RmwMsg = super::srv::rmw::CalibrateMotorElectricalAngle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__CalibrateMotorElectricalAngle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateMotorElectricalAngle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for CalibrateMotorElectricalAngle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalibrateMotorElectricalAngle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrateMotorElectricalAngle_Response {
  type RmwMsg = super::srv::rmw::CalibrateMotorElectricalAngle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__CalibrationZero_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrationZero_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for CalibrationZero_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalibrationZero_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrationZero_Request {
  type RmwMsg = super::srv::rmw::CalibrationZero_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__CalibrationZero_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrationZero_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for CalibrationZero_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CalibrationZero_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrationZero_Response {
  type RmwMsg = super::srv::rmw::CalibrationZero_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__GetJointMonitor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointMonitor_Request {
    /// 请求读取的关节索引数组
    pub motor_index: Vec<u32>,

}



impl Default for GetJointMonitor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetJointMonitor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetJointMonitor_Request {
  type RmwMsg = super::srv::rmw::GetJointMonitor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to h2x__srv__GetJointMonitor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointMonitor_Response {
    /// 操作是否成功
    pub result: i32,

    /// 返回的限位下限数组
    pub min_position: Vec<f64>,

    /// 返回的限位上限数组
    pub max_position: Vec<f64>,

}



impl Default for GetJointMonitor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetJointMonitor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetJointMonitor_Response {
  type RmwMsg = super::srv::rmw::GetJointMonitor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
        min_position: msg.min_position.into(),
        max_position: msg.max_position.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
        min_position: msg.min_position.as_slice().into(),
        max_position: msg.max_position.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
      min_position: msg.min_position
          .into_iter()
          .collect(),
      max_position: msg.max_position
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to h2x__srv__ResetJointParameters_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetJointParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for ResetJointParameters_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetJointParameters_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetJointParameters_Request {
  type RmwMsg = super::srv::rmw::ResetJointParameters_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__ResetJointParameters_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetJointParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for ResetJointParameters_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetJointParameters_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetJointParameters_Response {
  type RmwMsg = super::srv::rmw::ResetJointParameters_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SaveJointParameters_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveJointParameters_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for SaveJointParameters_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SaveJointParameters_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SaveJointParameters_Request {
  type RmwMsg = super::srv::rmw::SaveJointParameters_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__SaveJointParameters_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SaveJointParameters_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SaveJointParameters_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SaveJointParameters_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SaveJointParameters_Response {
  type RmwMsg = super::srv::rmw::SaveJointParameters_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetJointMonitor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointMonitor_Request {
    /// 请求的关节索引数组
    pub motor_index: Vec<u32>,

    /// 对应限位的下限数组
    pub min_position: Vec<f64>,

    /// 对应限位的上限数组
    pub max_position: Vec<f64>,

}



impl Default for SetJointMonitor_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJointMonitor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetJointMonitor_Request {
  type RmwMsg = super::srv::rmw::SetJointMonitor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index.into(),
        min_position: msg.min_position.into(),
        max_position: msg.max_position.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index.as_slice().into(),
        min_position: msg.min_position.as_slice().into(),
        max_position: msg.max_position.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index
          .into_iter()
          .collect(),
      min_position: msg.min_position
          .into_iter()
          .collect(),
      max_position: msg.max_position
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to h2x__srv__SetJointMonitor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointMonitor_Response {
    /// 操作是否成功
    pub result: i32,

}



impl Default for SetJointMonitor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJointMonitor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetJointMonitor_Response {
  type RmwMsg = super::srv::rmw::SetJointMonitor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__GetJointHardLimit_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointHardLimit_Request {
    /// 请求的关节索引数组
    pub motor_index: Vec<u32>,

}



impl Default for GetJointHardLimit_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetJointHardLimit_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetJointHardLimit_Request {
  type RmwMsg = super::srv::rmw::GetJointHardLimit_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to h2x__srv__GetJointHardLimit_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetJointHardLimit_Response {
    /// 操作是否成功
    pub result: i32,

    /// 对应硬限位的下限数组
    pub min_position: Vec<f64>,

    /// 对应硬限位的上限数组
    pub max_position: Vec<f64>,

}



impl Default for GetJointHardLimit_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetJointHardLimit_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetJointHardLimit_Response {
  type RmwMsg = super::srv::rmw::GetJointHardLimit_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
        min_position: msg.min_position.into(),
        max_position: msg.max_position.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
        min_position: msg.min_position.as_slice().into(),
        max_position: msg.max_position.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
      min_position: msg.min_position
          .into_iter()
          .collect(),
      max_position: msg.max_position
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to h2x__srv__ClearError_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearError_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ClearError_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ClearError_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ClearError_Request {
  type RmwMsg = super::srv::rmw::ClearError_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to h2x__srv__ClearError_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearError_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for ClearError_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ClearError_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ClearError_Response {
  type RmwMsg = super::srv::rmw::ClearError_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetMechanicalLimitToJoint_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMechanicalLimitToJoint_Request {
    /// 请求的关节索引数组
    pub motor_index: u32,

}



impl Default for SetMechanicalLimitToJoint_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMechanicalLimitToJoint_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMechanicalLimitToJoint_Request {
  type RmwMsg = super::srv::rmw::SetMechanicalLimitToJoint_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__SetMechanicalLimitToJoint_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMechanicalLimitToJoint_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetMechanicalLimitToJoint_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMechanicalLimitToJoint_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMechanicalLimitToJoint_Response {
  type RmwMsg = super::srv::rmw::SetMechanicalLimitToJoint_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__CommandReset_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommandReset_Request {
    /// 请求的关节索引
    pub motor_index: u32,

}



impl Default for CommandReset_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CommandReset_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CommandReset_Request {
  type RmwMsg = super::srv::rmw::CommandReset_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__CommandReset_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommandReset_Response {
    /// 操作是否成功
    pub result: i32,

}



impl Default for CommandReset_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CommandReset_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CommandReset_Response {
  type RmwMsg = super::srv::rmw::CommandReset_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetJointDirection_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointDirection_Request {
    /// 请求的关节索引
    pub motor_index: u32,

    /// 请求设置的关节方向 1：面向关节法兰，顺时针旋转为正（默认）；2：面向关节法兰，顺时针旋转为负
    pub direction: i32,

}



impl Default for SetJointDirection_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJointDirection_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetJointDirection_Request {
  type RmwMsg = super::srv::rmw::SetJointDirection_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
        direction: msg.direction,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      direction: msg.direction,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
      direction: msg.direction,
    }
  }
}


// Corresponds to h2x__srv__SetJointDirection_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointDirection_Response {
    /// 操作是否成功
    pub result: i32,

}



impl Default for SetJointDirection_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJointDirection_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetJointDirection_Response {
  type RmwMsg = super::srv::rmw::SetJointDirection_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__GripperClearError_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperClearError_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for GripperClearError_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperClearError_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GripperClearError_Request {
  type RmwMsg = super::srv::rmw::GripperClearError_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__GripperClearError_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperClearError_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for GripperClearError_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperClearError_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GripperClearError_Response {
  type RmwMsg = super::srv::rmw::GripperClearError_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__GetGripperMaxForce_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripperMaxForce_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for GetGripperMaxForce_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetGripperMaxForce_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetGripperMaxForce_Request {
  type RmwMsg = super::srv::rmw::GetGripperMaxForce_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__GetGripperMaxForce_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetGripperMaxForce_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetGripperMaxForce_Response {
  type RmwMsg = super::srv::rmw::GetGripperMaxForce_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
        max_force: msg.max_force,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      max_force: msg.max_force,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
      max_force: msg.max_force,
    }
  }
}


// Corresponds to h2x__srv__GetGripperStrokeRange_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetGripperStrokeRange_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for GetGripperStrokeRange_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetGripperStrokeRange_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetGripperStrokeRange_Request {
  type RmwMsg = super::srv::rmw::GetGripperStrokeRange_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__GetGripperStrokeRange_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetGripperStrokeRange_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetGripperStrokeRange_Response {
  type RmwMsg = super::srv::rmw::GetGripperStrokeRange_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
        min_stroke: msg.min_stroke,
        max_stroke: msg.max_stroke,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      min_stroke: msg.min_stroke,
      max_stroke: msg.max_stroke,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
      min_stroke: msg.min_stroke,
      max_stroke: msg.max_stroke,
    }
  }
}


// Corresponds to h2x__srv__GripperInitialize_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperInitialize_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GripperInitialize_Request {
  type RmwMsg = super::srv::rmw::GripperInitialize_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
        index: msg.index,
        offset: msg.offset,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      index: msg.index,
      offset: msg.offset,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
      index: msg.index,
      offset: msg.offset,
    }
  }
}


// Corresponds to h2x__srv__GripperInitialize_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperInitialize_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for GripperInitialize_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperInitialize_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GripperInitialize_Response {
  type RmwMsg = super::srv::rmw::GripperInitialize_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetGripperMaxForce_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGripperMaxForce_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGripperMaxForce_Request {
  type RmwMsg = super::srv::rmw::SetGripperMaxForce_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
        max_force: msg.max_force,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      max_force: msg.max_force,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
      max_force: msg.max_force,
    }
  }
}


// Corresponds to h2x__srv__SetGripperMaxForce_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripperMaxForce_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetGripperMaxForce_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGripperMaxForce_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGripperMaxForce_Response {
  type RmwMsg = super::srv::rmw::SetGripperMaxForce_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetGripperStrokeRange_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGripperStrokeRange_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGripperStrokeRange_Request {
  type RmwMsg = super::srv::rmw::SetGripperStrokeRange_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
        min_stroke: msg.min_stroke,
        max_stroke: msg.max_stroke,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      min_stroke: msg.min_stroke,
      max_stroke: msg.max_stroke,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
      min_stroke: msg.min_stroke,
      max_stroke: msg.max_stroke,
    }
  }
}


// Corresponds to h2x__srv__SetGripperStrokeRange_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGripperStrokeRange_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetGripperStrokeRange_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGripperStrokeRange_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGripperStrokeRange_Response {
  type RmwMsg = super::srv::rmw::SetGripperStrokeRange_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__GripperBrakeControl_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperBrakeControl_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GripperBrakeControl_Request {
  type RmwMsg = super::srv::rmw::GripperBrakeControl_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
        request_state: msg.request_state,
        auto_clear_error: msg.auto_clear_error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      request_state: msg.request_state,
      auto_clear_error: msg.auto_clear_error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
      request_state: msg.request_state,
      auto_clear_error: msg.auto_clear_error,
    }
  }
}


// Corresponds to h2x__srv__GripperBrakeControl_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperBrakeControl_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for GripperBrakeControl_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperBrakeControl_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GripperBrakeControl_Response {
  type RmwMsg = super::srv::rmw::GripperBrakeControl_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__GripperTorqueCalibrationZero_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperTorqueCalibrationZero_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_index: u32,

}



impl Default for GripperTorqueCalibrationZero_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperTorqueCalibrationZero_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GripperTorqueCalibrationZero_Request {
  type RmwMsg = super::srv::rmw::GripperTorqueCalibrationZero_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_index: msg.motor_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_index: msg.motor_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_index: msg.motor_index,
    }
  }
}


// Corresponds to h2x__srv__GripperTorqueCalibrationZero_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperTorqueCalibrationZero_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for GripperTorqueCalibrationZero_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GripperTorqueCalibrationZero_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GripperTorqueCalibrationZero_Response {
  type RmwMsg = super::srv::rmw::GripperTorqueCalibrationZero_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUGyroZeroBiasCalibrtion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUGyroZeroBiasCalibrtion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUGyroZeroBiasCalibrtion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUGyroZeroBiasCalibrtion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUGyroZeroBiasCalibrtion_Request {
  type RmwMsg = super::srv::rmw::IMUGyroZeroBiasCalibrtion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUGyroZeroBiasCalibrtion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUGyroZeroBiasCalibrtion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUGyroZeroBiasCalibrtion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUGyroZeroBiasCalibrtion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUGyroZeroBiasCalibrtion_Response {
  type RmwMsg = super::srv::rmw::IMUGyroZeroBiasCalibrtion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStart_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUMagneticFieldCalibrationStart_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUMagneticFieldCalibrationStart_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUMagneticFieldCalibrationStart_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUMagneticFieldCalibrationStart_Request {
  type RmwMsg = super::srv::rmw::IMUMagneticFieldCalibrationStart_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStart_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUMagneticFieldCalibrationStart_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUMagneticFieldCalibrationStart_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUMagneticFieldCalibrationStart_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUMagneticFieldCalibrationStart_Response {
  type RmwMsg = super::srv::rmw::IMUMagneticFieldCalibrationStart_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStop_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUMagneticFieldCalibrationStop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUMagneticFieldCalibrationStop_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUMagneticFieldCalibrationStop_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUMagneticFieldCalibrationStop_Request {
  type RmwMsg = super::srv::rmw::IMUMagneticFieldCalibrationStop_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUMagneticFieldCalibrationStop_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUMagneticFieldCalibrationStop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUMagneticFieldCalibrationStop_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUMagneticFieldCalibrationStop_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUMagneticFieldCalibrationStop_Response {
  type RmwMsg = super::srv::rmw::IMUMagneticFieldCalibrationStop_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUAccModuleCalibrtion_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUAccModuleCalibrtion_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUAccModuleCalibrtion_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUAccModuleCalibrtion_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUAccModuleCalibrtion_Request {
  type RmwMsg = super::srv::rmw::IMUAccModuleCalibrtion_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUAccModuleCalibrtion_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUAccModuleCalibrtion_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUAccModuleCalibrtion_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUAccModuleCalibrtion_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUAccModuleCalibrtion_Response {
  type RmwMsg = super::srv::rmw::IMUAccModuleCalibrtion_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUHorizonReferenceSet_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUHorizonReferenceSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUHorizonReferenceSet_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUHorizonReferenceSet_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUHorizonReferenceSet_Request {
  type RmwMsg = super::srv::rmw::IMUHorizonReferenceSet_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUHorizonReferenceSet_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUHorizonReferenceSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUHorizonReferenceSet_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUHorizonReferenceSet_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUHorizonReferenceSet_Response {
  type RmwMsg = super::srv::rmw::IMUHorizonReferenceSet_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUHorizontalInstallationSet_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUHorizontalInstallationSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUHorizontalInstallationSet_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUHorizontalInstallationSet_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUHorizontalInstallationSet_Request {
  type RmwMsg = super::srv::rmw::IMUHorizontalInstallationSet_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUHorizontalInstallationSet_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUHorizontalInstallationSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUHorizontalInstallationSet_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUHorizontalInstallationSet_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUHorizontalInstallationSet_Response {
  type RmwMsg = super::srv::rmw::IMUHorizontalInstallationSet_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUVerticalInstallationSet_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUVerticalInstallationSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUVerticalInstallationSet_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUVerticalInstallationSet_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUVerticalInstallationSet_Request {
  type RmwMsg = super::srv::rmw::IMUVerticalInstallationSet_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUVerticalInstallationSet_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUVerticalInstallationSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUVerticalInstallationSet_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUVerticalInstallationSet_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUVerticalInstallationSet_Response {
  type RmwMsg = super::srv::rmw::IMUVerticalInstallationSet_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUInternalSolverSourceSet_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUInternalSolverSourceSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUInternalSolverSourceSet_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUInternalSolverSourceSet_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUInternalSolverSourceSet_Request {
  type RmwMsg = super::srv::rmw::IMUInternalSolverSourceSet_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUInternalSolverSourceSet_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUInternalSolverSourceSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUInternalSolverSourceSet_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUInternalSolverSourceSet_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUInternalSolverSourceSet_Response {
  type RmwMsg = super::srv::rmw::IMUInternalSolverSourceSet_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUExternalSolverSourceSet_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUExternalSolverSourceSet_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUExternalSolverSourceSet_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUExternalSolverSourceSet_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUExternalSolverSourceSet_Request {
  type RmwMsg = super::srv::rmw::IMUExternalSolverSourceSet_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUExternalSolverSourceSet_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUExternalSolverSourceSet_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUExternalSolverSourceSet_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUExternalSolverSourceSet_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUExternalSolverSourceSet_Response {
  type RmwMsg = super::srv::rmw::IMUExternalSolverSourceSet_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__IMUControlReset_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUControlReset_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_index: u32,

}



impl Default for IMUControlReset_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUControlReset_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IMUControlReset_Request {
  type RmwMsg = super::srv::rmw::IMUControlReset_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_index: msg.imu_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_index: msg.imu_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_index: msg.imu_index,
    }
  }
}


// Corresponds to h2x__srv__IMUControlReset_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUControlReset_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for IMUControlReset_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IMUControlReset_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IMUControlReset_Response {
  type RmwMsg = super::srv::rmw::IMUControlReset_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__Set5GAirplane_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Set5GAirplane_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for Set5GAirplane_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Set5GAirplane_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Set5GAirplane_Request {
  type RmwMsg = super::srv::rmw::Set5GAirplane_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_state: msg.mode_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode_state: msg.mode_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_state: msg.mode_state,
    }
  }
}


// Corresponds to h2x__srv__Set5GAirplane_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Set5GAirplane_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for Set5GAirplane_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Set5GAirplane_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Set5GAirplane_Response {
  type RmwMsg = super::srv::rmw::Set5GAirplane_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__Set5GGnss_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Set5GGnss_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for Set5GGnss_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Set5GGnss_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Set5GGnss_Request {
  type RmwMsg = super::srv::rmw::Set5GGnss_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_state: msg.mode_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode_state: msg.mode_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_state: msg.mode_state,
    }
  }
}


// Corresponds to h2x__srv__Set5GGnss_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Set5GGnss_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for Set5GGnss_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Set5GGnss_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Set5GGnss_Response {
  type RmwMsg = super::srv::rmw::Set5GGnss_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetBlueTooth_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBlueTooth_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for SetBlueTooth_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBlueTooth_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetBlueTooth_Request {
  type RmwMsg = super::srv::rmw::SetBlueTooth_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_state: msg.mode_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode_state: msg.mode_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_state: msg.mode_state,
    }
  }
}


// Corresponds to h2x__srv__SetBlueTooth_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetBlueTooth_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetBlueTooth_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetBlueTooth_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetBlueTooth_Response {
  type RmwMsg = super::srv::rmw::SetBlueTooth_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__AwakenBlueTooth_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AwakenBlueTooth_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for AwakenBlueTooth_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AwakenBlueTooth_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AwakenBlueTooth_Request {
  type RmwMsg = super::srv::rmw::AwakenBlueTooth_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_state: msg.mode_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode_state: msg.mode_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_state: msg.mode_state,
    }
  }
}


// Corresponds to h2x__srv__AwakenBlueTooth_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AwakenBlueTooth_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for AwakenBlueTooth_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AwakenBlueTooth_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AwakenBlueTooth_Response {
  type RmwMsg = super::srv::rmw::AwakenBlueTooth_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetWlanPower_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWlanPower_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for SetWlanPower_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetWlanPower_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetWlanPower_Request {
  type RmwMsg = super::srv::rmw::SetWlanPower_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_state: msg.mode_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode_state: msg.mode_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_state: msg.mode_state,
    }
  }
}


// Corresponds to h2x__srv__SetWlanPower_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWlanPower_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetWlanPower_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetWlanPower_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetWlanPower_Response {
  type RmwMsg = super::srv::rmw::SetWlanPower_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetWlanrfPower_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWlanrfPower_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_state: bool,

}



impl Default for SetWlanrfPower_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetWlanrfPower_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetWlanrfPower_Request {
  type RmwMsg = super::srv::rmw::SetWlanrfPower_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_state: msg.mode_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode_state: msg.mode_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_state: msg.mode_state,
    }
  }
}


// Corresponds to h2x__srv__SetWlanrfPower_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetWlanrfPower_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetWlanrfPower_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetWlanrfPower_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetWlanrfPower_Response {
  type RmwMsg = super::srv::rmw::SetWlanrfPower_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__SetLowBatteryThreshold_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLowBatteryThreshold_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub low_battery_threshold: i32,

}



impl Default for SetLowBatteryThreshold_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetLowBatteryThreshold_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetLowBatteryThreshold_Request {
  type RmwMsg = super::srv::rmw::SetLowBatteryThreshold_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        low_battery_threshold: msg.low_battery_threshold,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      low_battery_threshold: msg.low_battery_threshold,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      low_battery_threshold: msg.low_battery_threshold,
    }
  }
}


// Corresponds to h2x__srv__SetLowBatteryThreshold_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetLowBatteryThreshold_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: i32,

}



impl Default for SetLowBatteryThreshold_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetLowBatteryThreshold_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetLowBatteryThreshold_Response {
  type RmwMsg = super::srv::rmw::SetLowBatteryThreshold_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to h2x__srv__GetLowBatteryThreshold_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetLowBatteryThreshold_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetLowBatteryThreshold_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetLowBatteryThreshold_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetLowBatteryThreshold_Request {
  type RmwMsg = super::srv::rmw::GetLowBatteryThreshold_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to h2x__srv__GetLowBatteryThreshold_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetLowBatteryThreshold_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetLowBatteryThreshold_Response {
  type RmwMsg = super::srv::rmw::GetLowBatteryThreshold_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
        low_battery_threshold: msg.low_battery_threshold,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      low_battery_threshold: msg.low_battery_threshold,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
      low_battery_threshold: msg.low_battery_threshold,
    }
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


