#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to h2x__msg__BatteryState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryState::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryState {
  type RmwMsg = super::msg::rmw::BatteryState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        battery_percentage: msg.battery_percentage,
        battery_state: msg.battery_state,
        battery_low_warning: msg.battery_low_warning,
        error_code: msg.error_code,
        warning_code: msg.warning_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      battery_percentage: msg.battery_percentage,
      battery_state: msg.battery_state,
      battery_low_warning: msg.battery_low_warning,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      battery_percentage: msg.battery_percentage,
      battery_state: msg.battery_state,
      battery_low_warning: msg.battery_low_warning,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
    }
  }
}


// Corresponds to h2x__msg__IMUState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IMUState::default())
  }
}

impl rosidl_runtime_rs::Message for IMUState {
  type RmwMsg = super::msg::rmw::IMUState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        quaternion: msg.quaternion,
        gyroscope: msg.gyroscope,
        accelerometer: msg.accelerometer,
        rpy: msg.rpy,
        temperature: msg.temperature,
        error_code: msg.error_code,
        warning_code: msg.warning_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        quaternion: msg.quaternion,
        gyroscope: msg.gyroscope,
        accelerometer: msg.accelerometer,
        rpy: msg.rpy,
      temperature: msg.temperature,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      quaternion: msg.quaternion,
      gyroscope: msg.gyroscope,
      accelerometer: msg.accelerometer,
      rpy: msg.rpy,
      temperature: msg.temperature,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
    }
  }
}


// Corresponds to h2x__msg__LowCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LowCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_pr: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub motor_cmd: [super::msg::MotorCmd; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: [u32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for LowCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LowCmd::default())
  }
}

impl rosidl_runtime_rs::Message for LowCmd {
  type RmwMsg = super::msg::rmw::LowCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_pr: msg.mode_pr,
        motor_cmd: msg.motor_cmd
          .map(|elem| super::msg::MotorCmd::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        reserved: msg.reserved,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode_pr: msg.mode_pr,
        motor_cmd: msg.motor_cmd
          .iter()
          .map(|elem| super::msg::MotorCmd::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        reserved: msg.reserved,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_pr: msg.mode_pr,
      motor_cmd: msg.motor_cmd
        .map(super::msg::MotorCmd::from_rmw_message),
      reserved: msg.reserved,
      crc: msg.crc,
    }
  }
}


// Corresponds to h2x__msg__LowState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub imu_state: [super::msg::IMUState; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub motor_state: [super::msg::MotorState; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_battery_info: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_info: super::msg::BatteryState,


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
    pub pcu_state: super::msg::PCUState,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_cdu_valid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cdu_state: super::msg::CDUState,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LowState::default())
  }
}

impl rosidl_runtime_rs::Message for LowState {
  type RmwMsg = super::msg::rmw::LowState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        version: msg.version,
        mode_pr: msg.mode_pr,
        tick: msg.tick,
        imu_state: msg.imu_state
          .map(|elem| super::msg::IMUState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        motor_state: msg.motor_state
          .map(|elem| super::msg::MotorState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        has_battery_info: msg.has_battery_info,
        battery_info: super::msg::BatteryState::into_rmw_message(std::borrow::Cow::Owned(msg.battery_info)).into_owned(),
        ground_count: msg.ground_count,
        ground_signal: msg.ground_signal,
        time_seconds: msg.time_seconds,
        is_pcu_valid: msg.is_pcu_valid,
        pcu_state: super::msg::PCUState::into_rmw_message(std::borrow::Cow::Owned(msg.pcu_state)).into_owned(),
        is_cdu_valid: msg.is_cdu_valid,
        cdu_state: super::msg::CDUState::into_rmw_message(std::borrow::Cow::Owned(msg.cdu_state)).into_owned(),
        is_data_valid: msg.is_data_valid,
        error_code: msg.error_code,
        warning_code: msg.warning_code,
        reserved: msg.reserved,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        version: msg.version,
      mode_pr: msg.mode_pr,
      tick: msg.tick,
        imu_state: msg.imu_state
          .iter()
          .map(|elem| super::msg::IMUState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        motor_state: msg.motor_state
          .iter()
          .map(|elem| super::msg::MotorState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      has_battery_info: msg.has_battery_info,
        battery_info: super::msg::BatteryState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.battery_info)).into_owned(),
      ground_count: msg.ground_count,
        ground_signal: msg.ground_signal,
      time_seconds: msg.time_seconds,
      is_pcu_valid: msg.is_pcu_valid,
        pcu_state: super::msg::PCUState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pcu_state)).into_owned(),
      is_cdu_valid: msg.is_cdu_valid,
        cdu_state: super::msg::CDUState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cdu_state)).into_owned(),
      is_data_valid: msg.is_data_valid,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
        reserved: msg.reserved,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      version: msg.version,
      mode_pr: msg.mode_pr,
      tick: msg.tick,
      imu_state: msg.imu_state
        .map(super::msg::IMUState::from_rmw_message),
      motor_state: msg.motor_state
        .map(super::msg::MotorState::from_rmw_message),
      has_battery_info: msg.has_battery_info,
      battery_info: super::msg::BatteryState::from_rmw_message(msg.battery_info),
      ground_count: msg.ground_count,
      ground_signal: msg.ground_signal,
      time_seconds: msg.time_seconds,
      is_pcu_valid: msg.is_pcu_valid,
      pcu_state: super::msg::PCUState::from_rmw_message(msg.pcu_state),
      is_cdu_valid: msg.is_cdu_valid,
      cdu_state: super::msg::CDUState::from_rmw_message(msg.cdu_state),
      is_data_valid: msg.is_data_valid,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
      reserved: msg.reserved,
      crc: msg.crc,
    }
  }
}


// Corresponds to h2x__msg__MotorCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorCmd::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCmd {
  type RmwMsg = super::msg::rmw::MotorCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        operation_mode: msg.operation_mode,
        q: msg.q,
        dq: msg.dq,
        tau: msg.tau,
        kp: msg.kp,
        kd: msg.kd,
        reserved: msg.reserved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      operation_mode: msg.operation_mode,
      q: msg.q,
      dq: msg.dq,
      tau: msg.tau,
      kp: msg.kp,
      kd: msg.kd,
        reserved: msg.reserved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      operation_mode: msg.operation_mode,
      q: msg.q,
      dq: msg.dq,
      tau: msg.tau,
      kp: msg.kp,
      kd: msg.kd,
      reserved: msg.reserved,
    }
  }
}


// Corresponds to h2x__msg__MotorState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorState::default())
  }
}

impl rosidl_runtime_rs::Message for MotorState {
  type RmwMsg = super::msg::rmw::MotorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        operation_mode: msg.operation_mode,
        q: msg.q,
        dq: msg.dq,
        ddq: msg.ddq,
        cur: msg.cur,
        tau_est: msg.tau_est,
        temperature: msg.temperature,
        kp: msg.kp,
        kd: msg.kd,
        error_code: msg.error_code,
        warning_code: msg.warning_code,
        reserved: msg.reserved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      operation_mode: msg.operation_mode,
      q: msg.q,
      dq: msg.dq,
      ddq: msg.ddq,
      cur: msg.cur,
      tau_est: msg.tau_est,
        temperature: msg.temperature,
      kp: msg.kp,
      kd: msg.kd,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
        reserved: msg.reserved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      operation_mode: msg.operation_mode,
      q: msg.q,
      dq: msg.dq,
      ddq: msg.ddq,
      cur: msg.cur,
      tau_est: msg.tau_est,
      temperature: msg.temperature,
      kp: msg.kp,
      kd: msg.kd,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
      reserved: msg.reserved,
    }
  }
}


// Corresponds to h2x__msg__CDUState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CDUState::default())
  }
}

impl rosidl_runtime_rs::Message for CDUState {
  type RmwMsg = super::msg::rmw::CDUState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error_code: msg.error_code,
        warning_code: msg.warning_code,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      error_code: msg.error_code,
      warning_code: msg.warning_code,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error_code: msg.error_code,
      warning_code: msg.warning_code,
    }
  }
}


// Corresponds to h2x__msg__MotorCmdGripper

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorCmdGripper::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCmdGripper {
  type RmwMsg = super::msg::rmw::MotorCmdGripper;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        operation_mode: msg.operation_mode,
        q: msg.q,
        dq_percentage: msg.dq_percentage,
        acc_percentage: msg.acc_percentage,
        finger_force: msg.finger_force,
        reserved: msg.reserved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      operation_mode: msg.operation_mode,
      q: msg.q,
      dq_percentage: msg.dq_percentage,
      acc_percentage: msg.acc_percentage,
      finger_force: msg.finger_force,
        reserved: msg.reserved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      operation_mode: msg.operation_mode,
      q: msg.q,
      dq_percentage: msg.dq_percentage,
      acc_percentage: msg.acc_percentage,
      finger_force: msg.finger_force,
      reserved: msg.reserved,
    }
  }
}


// Corresponds to h2x__msg__MotorStateGripper

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorStateGripper::default())
  }
}

impl rosidl_runtime_rs::Message for MotorStateGripper {
  type RmwMsg = super::msg::rmw::MotorStateGripper;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        operation_mode: msg.operation_mode,
        arrive_signal: msg.arrive_signal,
        state: msg.state,
        hold_state: msg.hold_state,
        q: msg.q,
        dq: msg.dq,
        finger1_force: msg.finger1_force,
        finger2_force: msg.finger2_force,
        temperature: msg.temperature,
        cur: msg.cur,
        error_code: msg.error_code,
        warning_code: msg.warning_code,
        reserved: msg.reserved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      operation_mode: msg.operation_mode,
      arrive_signal: msg.arrive_signal,
      state: msg.state,
      hold_state: msg.hold_state,
      q: msg.q,
      dq: msg.dq,
      finger1_force: msg.finger1_force,
      finger2_force: msg.finger2_force,
      temperature: msg.temperature,
      cur: msg.cur,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
        reserved: msg.reserved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      operation_mode: msg.operation_mode,
      arrive_signal: msg.arrive_signal,
      state: msg.state,
      hold_state: msg.hold_state,
      q: msg.q,
      dq: msg.dq,
      finger1_force: msg.finger1_force,
      finger2_force: msg.finger2_force,
      temperature: msg.temperature,
      cur: msg.cur,
      error_code: msg.error_code,
      warning_code: msg.warning_code,
      reserved: msg.reserved,
    }
  }
}


// Corresponds to h2x__msg__GripperCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_cmd: [super::msg::MotorCmdGripper; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for GripperCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperCmd::default())
  }
}

impl rosidl_runtime_rs::Message for GripperCmd {
  type RmwMsg = super::msg::rmw::GripperCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_cmd: msg.motor_cmd
          .map(|elem| super::msg::MotorCmdGripper::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_cmd: msg.motor_cmd
          .iter()
          .map(|elem| super::msg::MotorCmdGripper::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_cmd: msg.motor_cmd
        .map(super::msg::MotorCmdGripper::from_rmw_message),
      crc: msg.crc,
    }
  }
}


// Corresponds to h2x__msg__GripperState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tick: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_state: [super::msg::MotorStateGripper; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_data_valid: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub crc: u32,

}



impl Default for GripperState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperState::default())
  }
}

impl rosidl_runtime_rs::Message for GripperState {
  type RmwMsg = super::msg::rmw::GripperState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tick: msg.tick,
        motor_state: msg.motor_state
          .map(|elem| super::msg::MotorStateGripper::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        is_data_valid: msg.is_data_valid,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      tick: msg.tick,
        motor_state: msg.motor_state
          .iter()
          .map(|elem| super::msg::MotorStateGripper::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      is_data_valid: msg.is_data_valid,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tick: msg.tick,
      motor_state: msg.motor_state
        .map(super::msg::MotorStateGripper::from_rmw_message),
      is_data_valid: msg.is_data_valid,
      crc: msg.crc,
    }
  }
}


// Corresponds to h2x__msg__LRCUCmd
/// LED control command message

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LRCUCmd::default())
  }
}

impl rosidl_runtime_rs::Message for LRCUCmd {
  type RmwMsg = super::msg::rmw::LRCUCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        led_enable: msg.led_enable,
        led_mode: msg.led_mode,
        led_period_ms: msg.led_period_ms,
        led_r: msg.led_r,
        led_g: msg.led_g,
        led_b: msg.led_b,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      led_enable: msg.led_enable,
      led_mode: msg.led_mode,
      led_period_ms: msg.led_period_ms,
      led_r: msg.led_r,
      led_g: msg.led_g,
      led_b: msg.led_b,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      led_enable: msg.led_enable,
      led_mode: msg.led_mode,
      led_period_ms: msg.led_period_ms,
      led_r: msg.led_r,
      led_g: msg.led_g,
      led_b: msg.led_b,
      crc: msg.crc,
    }
  }
}


// Corresponds to h2x__msg__LRCUState
/// LED status feedback message

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LRCUState::default())
  }
}

impl rosidl_runtime_rs::Message for LRCUState {
  type RmwMsg = super::msg::rmw::LRCUState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        led_enable: msg.led_enable,
        led_mode: msg.led_mode,
        led_period_ms: msg.led_period_ms,
        led_r: msg.led_r,
        led_g: msg.led_g,
        led_b: msg.led_b,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      led_enable: msg.led_enable,
      led_mode: msg.led_mode,
      led_period_ms: msg.led_period_ms,
      led_r: msg.led_r,
      led_g: msg.led_g,
      led_b: msg.led_b,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      led_enable: msg.led_enable,
      led_mode: msg.led_mode,
      led_period_ms: msg.led_period_ms,
      led_r: msg.led_r,
      led_g: msg.led_g,
      led_b: msg.led_b,
      crc: msg.crc,
    }
  }
}


// Corresponds to h2x__msg__PCUState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PCUState::default())
  }
}

impl rosidl_runtime_rs::Message for PCUState {
  type RmwMsg = super::msg::rmw::PCUState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        emergency_stop_state: msg.emergency_stop_state,
        control_supply_state: msg.control_supply_state,
        power_supply_state: msg.power_supply_state,
        pcu_error_code: msg.pcu_error_code,
        pcu_warning_code: msg.pcu_warning_code,
        battery_voltage: msg.battery_voltage,
        motor_bus_voltage: msg.motor_bus_voltage,
        motor_bus_current: msg.motor_bus_current,
        dcdc_bus_voltage: msg.dcdc_bus_voltage,
        voltage_24v: msg.voltage_24v,
        voltage_12v: msg.voltage_12v,
        current_24v: msg.current_24v,
        current_12v: msg.current_12v,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      emergency_stop_state: msg.emergency_stop_state,
      control_supply_state: msg.control_supply_state,
      power_supply_state: msg.power_supply_state,
      pcu_error_code: msg.pcu_error_code,
      pcu_warning_code: msg.pcu_warning_code,
      battery_voltage: msg.battery_voltage,
      motor_bus_voltage: msg.motor_bus_voltage,
      motor_bus_current: msg.motor_bus_current,
      dcdc_bus_voltage: msg.dcdc_bus_voltage,
      voltage_24v: msg.voltage_24v,
      voltage_12v: msg.voltage_12v,
      current_24v: msg.current_24v,
      current_12v: msg.current_12v,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      emergency_stop_state: msg.emergency_stop_state,
      control_supply_state: msg.control_supply_state,
      power_supply_state: msg.power_supply_state,
      pcu_error_code: msg.pcu_error_code,
      pcu_warning_code: msg.pcu_warning_code,
      battery_voltage: msg.battery_voltage,
      motor_bus_voltage: msg.motor_bus_voltage,
      motor_bus_current: msg.motor_bus_current,
      dcdc_bus_voltage: msg.dcdc_bus_voltage,
      voltage_24v: msg.voltage_24v,
      voltage_12v: msg.voltage_12v,
      current_24v: msg.current_24v,
      current_12v: msg.current_12v,
    }
  }
}


// Corresponds to h2x__msg__Diagnosis

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Diagnosis {

    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub is_ds402: [bool; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub ds402_data: [super::msg::DiagnosticData; 37],


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_imu_state: [super::msg::DebugIMUState; 2],


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_cdu_state: super::msg::DebugCDUState,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Diagnosis::default())
  }
}

impl rosidl_runtime_rs::Message for Diagnosis {
  type RmwMsg = super::msg::rmw::Diagnosis;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_ds402: msg.is_ds402,
        ds402_data: msg.ds402_data
          .map(|elem| super::msg::DiagnosticData::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        debug_imu_state: msg.debug_imu_state
          .map(|elem| super::msg::DebugIMUState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        debug_cdu_state: super::msg::DebugCDUState::into_rmw_message(std::borrow::Cow::Owned(msg.debug_cdu_state)).into_owned(),
        error_code: msg.error_code,
        warning_code: msg.warning_code,
        cdu_error_code: msg.cdu_error_code,
        cdu_warning_code: msg.cdu_warning_code,
        pcu_error_code: msg.pcu_error_code,
        pcu_warning_code: msg.pcu_warning_code,
        imu_error_code: msg.imu_error_code,
        imu_warning_code: msg.imu_warning_code,
        battery_error_code: msg.battery_error_code,
        battery_warning_code: msg.battery_warning_code,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_ds402: msg.is_ds402,
        ds402_data: msg.ds402_data
          .iter()
          .map(|elem| super::msg::DiagnosticData::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        debug_imu_state: msg.debug_imu_state
          .iter()
          .map(|elem| super::msg::DebugIMUState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        debug_cdu_state: super::msg::DebugCDUState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.debug_cdu_state)).into_owned(),
        error_code: msg.error_code,
        warning_code: msg.warning_code,
      cdu_error_code: msg.cdu_error_code,
      cdu_warning_code: msg.cdu_warning_code,
      pcu_error_code: msg.pcu_error_code,
      pcu_warning_code: msg.pcu_warning_code,
        imu_error_code: msg.imu_error_code,
        imu_warning_code: msg.imu_warning_code,
      battery_error_code: msg.battery_error_code,
      battery_warning_code: msg.battery_warning_code,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_ds402: msg.is_ds402,
      ds402_data: msg.ds402_data
        .map(super::msg::DiagnosticData::from_rmw_message),
      debug_imu_state: msg.debug_imu_state
        .map(super::msg::DebugIMUState::from_rmw_message),
      debug_cdu_state: super::msg::DebugCDUState::from_rmw_message(msg.debug_cdu_state),
      error_code: msg.error_code,
      warning_code: msg.warning_code,
      cdu_error_code: msg.cdu_error_code,
      cdu_warning_code: msg.cdu_warning_code,
      pcu_error_code: msg.pcu_error_code,
      pcu_warning_code: msg.pcu_warning_code,
      imu_error_code: msg.imu_error_code,
      imu_warning_code: msg.imu_warning_code,
      battery_error_code: msg.battery_error_code,
      battery_warning_code: msg.battery_warning_code,
      crc: msg.crc,
    }
  }
}


// Corresponds to h2x__msg__DiagnosticData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub debug_motor_state: super::msg::DebugMotorState,

}



impl Default for DiagnosticData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DiagnosticData::default())
  }
}

impl rosidl_runtime_rs::Message for DiagnosticData {
  type RmwMsg = super::msg::rmw::DiagnosticData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        control_word: msg.control_word,
        status_word: msg.status_word,
        error_register: msg.error_register,
        mode_of_operation: msg.mode_of_operation,
        mode_display: msg.mode_display,
        debug_motor_state: super::msg::DebugMotorState::into_rmw_message(std::borrow::Cow::Owned(msg.debug_motor_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      control_word: msg.control_word,
      status_word: msg.status_word,
      error_register: msg.error_register,
      mode_of_operation: msg.mode_of_operation,
      mode_display: msg.mode_display,
        debug_motor_state: super::msg::DebugMotorState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.debug_motor_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      control_word: msg.control_word,
      status_word: msg.status_word,
      error_register: msg.error_register,
      mode_of_operation: msg.mode_of_operation,
      mode_display: msg.mode_display,
      debug_motor_state: super::msg::DebugMotorState::from_rmw_message(msg.debug_motor_state),
    }
  }
}


// Corresponds to h2x__msg__DebugMotorState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub firmware_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bootloader_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub app_branch_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub app_tag_sha1_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub boot_branch_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub boot_tag_sha1_id: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DebugMotorState::default())
  }
}

impl rosidl_runtime_rs::Message for DebugMotorState {
  type RmwMsg = super::msg::rmw::DebugMotorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        slave_id: msg.slave_id,
        frame_counter: msg.frame_counter,
        error_register: msg.error_register,
        motor_mode: msg.motor_mode,
        status_word: msg.status_word,
        joint_position: msg.joint_position,
        joint_speed: msg.joint_speed,
        motor_current: msg.motor_current,
        joint_torque: msg.joint_torque,
        tx_object_index: msg.tx_object_index,
        tx_object_value: msg.tx_object_value,
        pos_kp: msg.pos_kp,
        vibration_dampratio: msg.vibration_dampratio,
        min_position: msg.min_position,
        max_position: msg.max_position,
        spd_coefficient: msg.spd_coefficient,
        spd_kp: msg.spd_kp,
        spd_ki: msg.spd_ki,
        spd_rmax: msg.spd_rmax,
        spd_rmin: msg.spd_rmin,
        position_velocity_torque_current_polarity: msg.position_velocity_torque_current_polarity,
        position_ctrl_vibration_controller_bandwidth: msg.position_ctrl_vibration_controller_bandwidth,
        position_feedback_encoder_select: msg.position_feedback_encoder_select,
        align_motor_pos_2_link_pos: msg.align_motor_pos_2_link_pos,
        velocity_ctrl_link_speed_observer_bandwidth: msg.velocity_ctrl_link_speed_observer_bandwidth,
        deceleration_of_link_side: msg.deceleration_of_link_side,
        spd_bandwidth: msg.spd_bandwidth,
        current_coefficient: msg.current_coefficient,
        max_motor_torque: msg.max_motor_torque,
        max_joint_torque: msg.max_joint_torque,
        torque_a_offset: msg.torque_a_offset,
        torque_b_offset: msg.torque_b_offset,
        torque_kp: msg.torque_kp,
        torque_kd: msg.torque_kd,
        torque_bfe: msg.torque_bfe,
        torque_l: msg.torque_l,
        torque_kfc: msg.torque_kfc,
        current_torque_coefficient: msg.current_torque_coefficient,
        led_rgb_ctrl: msg.led_rgb_ctrl,
        motor_error_configmask: msg.motor_error_configmask,
        link_error_configmask: msg.link_error_configmask,
        board_error_configmask: msg.board_error_configmask,
        joint_error_configmask: msg.joint_error_configmask,
        ctrl_error_configmask: msg.ctrl_error_configmask,
        communication_error_configmask: msg.communication_error_configmask,
        current_ctrl_bandwidth: msg.current_ctrl_bandwidth,
        current_ctrl_mode: msg.current_ctrl_mode,
        motor_rs: msg.motor_rs,
        motor_l: msg.motor_l,
        motor_ke: msg.motor_ke,
        motorside_position: msg.motorside_position,
        linkside_position: msg.linkside_position,
        friction_ctrl_param1: msg.friction_ctrl_param1,
        friction_ctrl_param2: msg.friction_ctrl_param2,
        friction_ctrl_param3: msg.friction_ctrl_param3,
        friction_ctrl_param4: msg.friction_ctrl_param4,
        vendor_id: msg.vendor_id,
        robot_product_code: msg.robot_product_code,
        robot_version_number: msg.robot_version_number,
        robot_serial_number: msg.robot_serial_number,
        joint_type: msg.joint_type,
        joint_version: msg.joint_version,
        joint_serial_number: msg.joint_serial_number,
        firmware_version: msg.firmware_version.as_str().into(),
        bootloader_version: msg.bootloader_version.as_str().into(),
        app_branch_name: msg.app_branch_name.as_str().into(),
        app_tag_sha1_id: msg.app_tag_sha1_id.as_str().into(),
        boot_branch_name: msg.boot_branch_name.as_str().into(),
        boot_tag_sha1_id: msg.boot_tag_sha1_id.as_str().into(),
        link_encoder_calibrated_data: msg.link_encoder_calibrated_data,
        motor_encoder_calibrated_data: msg.motor_encoder_calibrated_data,
        a_phase_current_offset: msg.a_phase_current_offset,
        b_phase_current_offset: msg.b_phase_current_offset,
        c_phase_current_offset: msg.c_phase_current_offset,
        bus_current_offset: msg.bus_current_offset,
        motor_temperature: msg.motor_temperature,
        drive_temperature: msg.drive_temperature,
        estimated_temperature1: msg.estimated_temperature1,
        estimated_temperature2: msg.estimated_temperature2,
        bus_current: msg.bus_current,
        bus_voltage: msg.bus_voltage,
        flag: msg.flag,
        developer_command_status: msg.developer_command_status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      slave_id: msg.slave_id,
      frame_counter: msg.frame_counter,
      error_register: msg.error_register,
      motor_mode: msg.motor_mode,
      status_word: msg.status_word,
      joint_position: msg.joint_position,
      joint_speed: msg.joint_speed,
      motor_current: msg.motor_current,
      joint_torque: msg.joint_torque,
      tx_object_index: msg.tx_object_index,
      tx_object_value: msg.tx_object_value,
      pos_kp: msg.pos_kp,
      vibration_dampratio: msg.vibration_dampratio,
      min_position: msg.min_position,
      max_position: msg.max_position,
      spd_coefficient: msg.spd_coefficient,
      spd_kp: msg.spd_kp,
      spd_ki: msg.spd_ki,
      spd_rmax: msg.spd_rmax,
      spd_rmin: msg.spd_rmin,
      position_velocity_torque_current_polarity: msg.position_velocity_torque_current_polarity,
      position_ctrl_vibration_controller_bandwidth: msg.position_ctrl_vibration_controller_bandwidth,
      position_feedback_encoder_select: msg.position_feedback_encoder_select,
      align_motor_pos_2_link_pos: msg.align_motor_pos_2_link_pos,
      velocity_ctrl_link_speed_observer_bandwidth: msg.velocity_ctrl_link_speed_observer_bandwidth,
      deceleration_of_link_side: msg.deceleration_of_link_side,
      spd_bandwidth: msg.spd_bandwidth,
      current_coefficient: msg.current_coefficient,
      max_motor_torque: msg.max_motor_torque,
      max_joint_torque: msg.max_joint_torque,
      torque_a_offset: msg.torque_a_offset,
      torque_b_offset: msg.torque_b_offset,
      torque_kp: msg.torque_kp,
      torque_kd: msg.torque_kd,
      torque_bfe: msg.torque_bfe,
      torque_l: msg.torque_l,
      torque_kfc: msg.torque_kfc,
      current_torque_coefficient: msg.current_torque_coefficient,
      led_rgb_ctrl: msg.led_rgb_ctrl,
      motor_error_configmask: msg.motor_error_configmask,
      link_error_configmask: msg.link_error_configmask,
      board_error_configmask: msg.board_error_configmask,
      joint_error_configmask: msg.joint_error_configmask,
      ctrl_error_configmask: msg.ctrl_error_configmask,
      communication_error_configmask: msg.communication_error_configmask,
      current_ctrl_bandwidth: msg.current_ctrl_bandwidth,
      current_ctrl_mode: msg.current_ctrl_mode,
      motor_rs: msg.motor_rs,
      motor_l: msg.motor_l,
      motor_ke: msg.motor_ke,
      motorside_position: msg.motorside_position,
      linkside_position: msg.linkside_position,
      friction_ctrl_param1: msg.friction_ctrl_param1,
      friction_ctrl_param2: msg.friction_ctrl_param2,
      friction_ctrl_param3: msg.friction_ctrl_param3,
      friction_ctrl_param4: msg.friction_ctrl_param4,
      vendor_id: msg.vendor_id,
      robot_product_code: msg.robot_product_code,
      robot_version_number: msg.robot_version_number,
      robot_serial_number: msg.robot_serial_number,
      joint_type: msg.joint_type,
      joint_version: msg.joint_version,
      joint_serial_number: msg.joint_serial_number,
        firmware_version: msg.firmware_version.as_str().into(),
        bootloader_version: msg.bootloader_version.as_str().into(),
        app_branch_name: msg.app_branch_name.as_str().into(),
        app_tag_sha1_id: msg.app_tag_sha1_id.as_str().into(),
        boot_branch_name: msg.boot_branch_name.as_str().into(),
        boot_tag_sha1_id: msg.boot_tag_sha1_id.as_str().into(),
      link_encoder_calibrated_data: msg.link_encoder_calibrated_data,
      motor_encoder_calibrated_data: msg.motor_encoder_calibrated_data,
      a_phase_current_offset: msg.a_phase_current_offset,
      b_phase_current_offset: msg.b_phase_current_offset,
      c_phase_current_offset: msg.c_phase_current_offset,
      bus_current_offset: msg.bus_current_offset,
      motor_temperature: msg.motor_temperature,
      drive_temperature: msg.drive_temperature,
      estimated_temperature1: msg.estimated_temperature1,
      estimated_temperature2: msg.estimated_temperature2,
      bus_current: msg.bus_current,
      bus_voltage: msg.bus_voltage,
      flag: msg.flag,
      developer_command_status: msg.developer_command_status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      slave_id: msg.slave_id,
      frame_counter: msg.frame_counter,
      error_register: msg.error_register,
      motor_mode: msg.motor_mode,
      status_word: msg.status_word,
      joint_position: msg.joint_position,
      joint_speed: msg.joint_speed,
      motor_current: msg.motor_current,
      joint_torque: msg.joint_torque,
      tx_object_index: msg.tx_object_index,
      tx_object_value: msg.tx_object_value,
      pos_kp: msg.pos_kp,
      vibration_dampratio: msg.vibration_dampratio,
      min_position: msg.min_position,
      max_position: msg.max_position,
      spd_coefficient: msg.spd_coefficient,
      spd_kp: msg.spd_kp,
      spd_ki: msg.spd_ki,
      spd_rmax: msg.spd_rmax,
      spd_rmin: msg.spd_rmin,
      position_velocity_torque_current_polarity: msg.position_velocity_torque_current_polarity,
      position_ctrl_vibration_controller_bandwidth: msg.position_ctrl_vibration_controller_bandwidth,
      position_feedback_encoder_select: msg.position_feedback_encoder_select,
      align_motor_pos_2_link_pos: msg.align_motor_pos_2_link_pos,
      velocity_ctrl_link_speed_observer_bandwidth: msg.velocity_ctrl_link_speed_observer_bandwidth,
      deceleration_of_link_side: msg.deceleration_of_link_side,
      spd_bandwidth: msg.spd_bandwidth,
      current_coefficient: msg.current_coefficient,
      max_motor_torque: msg.max_motor_torque,
      max_joint_torque: msg.max_joint_torque,
      torque_a_offset: msg.torque_a_offset,
      torque_b_offset: msg.torque_b_offset,
      torque_kp: msg.torque_kp,
      torque_kd: msg.torque_kd,
      torque_bfe: msg.torque_bfe,
      torque_l: msg.torque_l,
      torque_kfc: msg.torque_kfc,
      current_torque_coefficient: msg.current_torque_coefficient,
      led_rgb_ctrl: msg.led_rgb_ctrl,
      motor_error_configmask: msg.motor_error_configmask,
      link_error_configmask: msg.link_error_configmask,
      board_error_configmask: msg.board_error_configmask,
      joint_error_configmask: msg.joint_error_configmask,
      ctrl_error_configmask: msg.ctrl_error_configmask,
      communication_error_configmask: msg.communication_error_configmask,
      current_ctrl_bandwidth: msg.current_ctrl_bandwidth,
      current_ctrl_mode: msg.current_ctrl_mode,
      motor_rs: msg.motor_rs,
      motor_l: msg.motor_l,
      motor_ke: msg.motor_ke,
      motorside_position: msg.motorside_position,
      linkside_position: msg.linkside_position,
      friction_ctrl_param1: msg.friction_ctrl_param1,
      friction_ctrl_param2: msg.friction_ctrl_param2,
      friction_ctrl_param3: msg.friction_ctrl_param3,
      friction_ctrl_param4: msg.friction_ctrl_param4,
      vendor_id: msg.vendor_id,
      robot_product_code: msg.robot_product_code,
      robot_version_number: msg.robot_version_number,
      robot_serial_number: msg.robot_serial_number,
      joint_type: msg.joint_type,
      joint_version: msg.joint_version,
      joint_serial_number: msg.joint_serial_number,
      firmware_version: msg.firmware_version.to_string(),
      bootloader_version: msg.bootloader_version.to_string(),
      app_branch_name: msg.app_branch_name.to_string(),
      app_tag_sha1_id: msg.app_tag_sha1_id.to_string(),
      boot_branch_name: msg.boot_branch_name.to_string(),
      boot_tag_sha1_id: msg.boot_tag_sha1_id.to_string(),
      link_encoder_calibrated_data: msg.link_encoder_calibrated_data,
      motor_encoder_calibrated_data: msg.motor_encoder_calibrated_data,
      a_phase_current_offset: msg.a_phase_current_offset,
      b_phase_current_offset: msg.b_phase_current_offset,
      c_phase_current_offset: msg.c_phase_current_offset,
      bus_current_offset: msg.bus_current_offset,
      motor_temperature: msg.motor_temperature,
      drive_temperature: msg.drive_temperature,
      estimated_temperature1: msg.estimated_temperature1,
      estimated_temperature2: msg.estimated_temperature2,
      bus_current: msg.bus_current,
      bus_voltage: msg.bus_voltage,
      flag: msg.flag,
      developer_command_status: msg.developer_command_status,
    }
  }
}


// Corresponds to h2x__msg__DebugIMUState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DebugIMUState::default())
  }
}

impl rosidl_runtime_rs::Message for DebugIMUState {
  type RmwMsg = super::msg::rmw::DebugIMUState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        slave_id: msg.slave_id,
        frame_counter: msg.frame_counter,
        status_word: msg.status_word,
        temperature: msg.temperature,
        euler_angle_roll: msg.euler_angle_roll,
        eluer_angle_pitch: msg.eluer_angle_pitch,
        eluer_angle_yaw: msg.eluer_angle_yaw,
        q1: msg.q1,
        q2: msg.q2,
        q3: msg.q3,
        q4: msg.q4,
        accx: msg.accx,
        accy: msg.accy,
        accz: msg.accz,
        angular_vel_x: msg.angular_vel_x,
        angular_vel_y: msg.angular_vel_y,
        angular_vel_z: msg.angular_vel_z,
        mag_x: msg.mag_x,
        mag_y: msg.mag_y,
        mag_z: msg.mag_z,
        txobject_index: msg.txobject_index,
        txobject_data: msg.txobject_data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      slave_id: msg.slave_id,
      frame_counter: msg.frame_counter,
      status_word: msg.status_word,
      temperature: msg.temperature,
      euler_angle_roll: msg.euler_angle_roll,
      eluer_angle_pitch: msg.eluer_angle_pitch,
      eluer_angle_yaw: msg.eluer_angle_yaw,
      q1: msg.q1,
      q2: msg.q2,
      q3: msg.q3,
      q4: msg.q4,
      accx: msg.accx,
      accy: msg.accy,
      accz: msg.accz,
      angular_vel_x: msg.angular_vel_x,
      angular_vel_y: msg.angular_vel_y,
      angular_vel_z: msg.angular_vel_z,
      mag_x: msg.mag_x,
      mag_y: msg.mag_y,
      mag_z: msg.mag_z,
      txobject_index: msg.txobject_index,
      txobject_data: msg.txobject_data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      slave_id: msg.slave_id,
      frame_counter: msg.frame_counter,
      status_word: msg.status_word,
      temperature: msg.temperature,
      euler_angle_roll: msg.euler_angle_roll,
      eluer_angle_pitch: msg.eluer_angle_pitch,
      eluer_angle_yaw: msg.eluer_angle_yaw,
      q1: msg.q1,
      q2: msg.q2,
      q3: msg.q3,
      q4: msg.q4,
      accx: msg.accx,
      accy: msg.accy,
      accz: msg.accz,
      angular_vel_x: msg.angular_vel_x,
      angular_vel_y: msg.angular_vel_y,
      angular_vel_z: msg.angular_vel_z,
      mag_x: msg.mag_x,
      mag_y: msg.mag_y,
      mag_z: msg.mag_z,
      txobject_index: msg.txobject_index,
      txobject_data: msg.txobject_data,
    }
  }
}


// Corresponds to h2x__msg__DebugCDUState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub cdu_fireware_version: std::string::String,


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
    pub pcu_firmware_version: std::string::String,


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
    pub lrcu_firmware_version: std::string::String,

}



impl Default for DebugCDUState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DebugCDUState::default())
  }
}

impl rosidl_runtime_rs::Message for DebugCDUState {
  type RmwMsg = super::msg::rmw::DebugCDUState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frame_counter: msg.frame_counter,
        electrical_status_feedback_id: msg.electrical_status_feedback_id,
        slave_online_status: msg.slave_online_status,
        cdu_fireware_version: msg.cdu_fireware_version.as_str().into(),
        peripheral_status_feedback: msg.peripheral_status_feedback,
        emergency_stop_state: msg.emergency_stop_state,
        control_supply_state: msg.control_supply_state,
        power_supply_state: msg.power_supply_state,
        battery_voltage: msg.battery_voltage,
        motor_bus_voltage: msg.motor_bus_voltage,
        dcdc_bus_voltage: msg.dcdc_bus_voltage,
        voltage_24v: msg.voltage_24v,
        voltage_12v: msg.voltage_12v,
        motor_bus_current: msg.motor_bus_current,
        current_24v: msg.current_24v,
        current_12v: msg.current_12v,
        pcu_firmware_version: msg.pcu_firmware_version.as_str().into(),
        low_battery_warning: msg.low_battery_warning,
        battery_warning_status_history_l2: msg.battery_warning_status_history_l2,
        battery_soc: msg.battery_soc,
        battery_soh: msg.battery_soh,
        nominal_battery_capacity: msg.nominal_battery_capacity,
        current_battery_capacity: msg.current_battery_capacity,
        total_battery_voltage: msg.total_battery_voltage,
        total_battery_current: msg.total_battery_current,
        average_battery_temperature: msg.average_battery_temperature,
        peak_battery_temperature: msg.peak_battery_temperature,
        battery_warning_status_l1: msg.battery_warning_status_l1,
        battery_warning_status_l2: msg.battery_warning_status_l2,
        mosfet_status: msg.mosfet_status,
        battery_cycle_count: msg.battery_cycle_count,
        ntc_count: msg.ntc_count,
        series_cell_count: msg.series_cell_count,
        current_control_source: msg.current_control_source,
        led_mode: msg.led_mode,
        led_period: msg.led_period,
        led_r: msg.led_r,
        led_g: msg.led_g,
        led_b: msg.led_b,
        lrcu_firmware_version: msg.lrcu_firmware_version.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      frame_counter: msg.frame_counter,
      electrical_status_feedback_id: msg.electrical_status_feedback_id,
      slave_online_status: msg.slave_online_status,
        cdu_fireware_version: msg.cdu_fireware_version.as_str().into(),
      peripheral_status_feedback: msg.peripheral_status_feedback,
      emergency_stop_state: msg.emergency_stop_state,
      control_supply_state: msg.control_supply_state,
      power_supply_state: msg.power_supply_state,
      battery_voltage: msg.battery_voltage,
      motor_bus_voltage: msg.motor_bus_voltage,
      dcdc_bus_voltage: msg.dcdc_bus_voltage,
      voltage_24v: msg.voltage_24v,
      voltage_12v: msg.voltage_12v,
      motor_bus_current: msg.motor_bus_current,
      current_24v: msg.current_24v,
      current_12v: msg.current_12v,
        pcu_firmware_version: msg.pcu_firmware_version.as_str().into(),
      low_battery_warning: msg.low_battery_warning,
      battery_warning_status_history_l2: msg.battery_warning_status_history_l2,
      battery_soc: msg.battery_soc,
      battery_soh: msg.battery_soh,
      nominal_battery_capacity: msg.nominal_battery_capacity,
      current_battery_capacity: msg.current_battery_capacity,
      total_battery_voltage: msg.total_battery_voltage,
      total_battery_current: msg.total_battery_current,
      average_battery_temperature: msg.average_battery_temperature,
      peak_battery_temperature: msg.peak_battery_temperature,
      battery_warning_status_l1: msg.battery_warning_status_l1,
      battery_warning_status_l2: msg.battery_warning_status_l2,
      mosfet_status: msg.mosfet_status,
      battery_cycle_count: msg.battery_cycle_count,
      ntc_count: msg.ntc_count,
      series_cell_count: msg.series_cell_count,
      current_control_source: msg.current_control_source,
      led_mode: msg.led_mode,
      led_period: msg.led_period,
      led_r: msg.led_r,
      led_g: msg.led_g,
      led_b: msg.led_b,
        lrcu_firmware_version: msg.lrcu_firmware_version.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      frame_counter: msg.frame_counter,
      electrical_status_feedback_id: msg.electrical_status_feedback_id,
      slave_online_status: msg.slave_online_status,
      cdu_fireware_version: msg.cdu_fireware_version.to_string(),
      peripheral_status_feedback: msg.peripheral_status_feedback,
      emergency_stop_state: msg.emergency_stop_state,
      control_supply_state: msg.control_supply_state,
      power_supply_state: msg.power_supply_state,
      battery_voltage: msg.battery_voltage,
      motor_bus_voltage: msg.motor_bus_voltage,
      dcdc_bus_voltage: msg.dcdc_bus_voltage,
      voltage_24v: msg.voltage_24v,
      voltage_12v: msg.voltage_12v,
      motor_bus_current: msg.motor_bus_current,
      current_24v: msg.current_24v,
      current_12v: msg.current_12v,
      pcu_firmware_version: msg.pcu_firmware_version.to_string(),
      low_battery_warning: msg.low_battery_warning,
      battery_warning_status_history_l2: msg.battery_warning_status_history_l2,
      battery_soc: msg.battery_soc,
      battery_soh: msg.battery_soh,
      nominal_battery_capacity: msg.nominal_battery_capacity,
      current_battery_capacity: msg.current_battery_capacity,
      total_battery_voltage: msg.total_battery_voltage,
      total_battery_current: msg.total_battery_current,
      average_battery_temperature: msg.average_battery_temperature,
      peak_battery_temperature: msg.peak_battery_temperature,
      battery_warning_status_l1: msg.battery_warning_status_l1,
      battery_warning_status_l2: msg.battery_warning_status_l2,
      mosfet_status: msg.mosfet_status,
      battery_cycle_count: msg.battery_cycle_count,
      ntc_count: msg.ntc_count,
      series_cell_count: msg.series_cell_count,
      current_control_source: msg.current_control_source,
      led_mode: msg.led_mode,
      led_period: msg.led_period,
      led_r: msg.led_r,
      led_g: msg.led_g,
      led_b: msg.led_b,
      lrcu_firmware_version: msg.lrcu_firmware_version.to_string(),
    }
  }
}


// Corresponds to h2x__msg__GripperDiagnosis

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperDiagnosis {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ds_data: [super::msg::GripperDiagnosticData; 2],


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperDiagnosis::default())
  }
}

impl rosidl_runtime_rs::Message for GripperDiagnosis {
  type RmwMsg = super::msg::rmw::GripperDiagnosis;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ds_data: msg.ds_data
          .map(|elem| super::msg::GripperDiagnosticData::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        error_code: msg.error_code,
        warning_code: msg.warning_code,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ds_data: msg.ds_data
          .iter()
          .map(|elem| super::msg::GripperDiagnosticData::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        error_code: msg.error_code,
        warning_code: msg.warning_code,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ds_data: msg.ds_data
        .map(super::msg::GripperDiagnosticData::from_rmw_message),
      error_code: msg.error_code,
      warning_code: msg.warning_code,
      crc: msg.crc,
    }
  }
}


// Corresponds to h2x__msg__GripperDiagnosticData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GripperDiagnosticData::default())
  }
}

impl rosidl_runtime_rs::Message for GripperDiagnosticData {
  type RmwMsg = super::msg::rmw::GripperDiagnosticData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode_of_operation: msg.mode_of_operation,
        mode_display: msg.mode_display,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode_of_operation: msg.mode_of_operation,
      mode_display: msg.mode_display,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode_of_operation: msg.mode_of_operation,
      mode_display: msg.mode_display,
    }
  }
}


