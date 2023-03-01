// Auto-generated. Do not edit!

// (in-package khi_rs_gripper.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class MoveGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.target_pulse = null;
      this.pulse_speed = null;
    }
    else {
      if (initObj.hasOwnProperty('target_pulse')) {
        this.target_pulse = initObj.target_pulse
      }
      else {
        this.target_pulse = 0.0;
      }
      if (initObj.hasOwnProperty('pulse_speed')) {
        this.pulse_speed = initObj.pulse_speed
      }
      else {
        this.pulse_speed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MoveGoal
    // Serialize message field [target_pulse]
    bufferOffset = _serializer.float32(obj.target_pulse, buffer, bufferOffset);
    // Serialize message field [pulse_speed]
    bufferOffset = _serializer.float32(obj.pulse_speed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MoveGoal
    let len;
    let data = new MoveGoal(null);
    // Deserialize message field [target_pulse]
    data.target_pulse = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [pulse_speed]
    data.pulse_speed = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'khi_rs_gripper/MoveGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b6814055eb1aabbec6940b763f67eadb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    float32 target_pulse
    
    float32 pulse_speed
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MoveGoal(null);
    if (msg.target_pulse !== undefined) {
      resolved.target_pulse = msg.target_pulse;
    }
    else {
      resolved.target_pulse = 0.0
    }

    if (msg.pulse_speed !== undefined) {
      resolved.pulse_speed = msg.pulse_speed;
    }
    else {
      resolved.pulse_speed = 0.0
    }

    return resolved;
    }
};

module.exports = MoveGoal;
