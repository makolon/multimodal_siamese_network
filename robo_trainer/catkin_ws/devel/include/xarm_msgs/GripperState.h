// Generated by gencpp from file xarm_msgs/GripperState.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_GRIPPERSTATE_H
#define XARM_MSGS_MESSAGE_GRIPPERSTATE_H

#include <ros/service_traits.h>


#include <xarm_msgs/GripperStateRequest.h>
#include <xarm_msgs/GripperStateResponse.h>


namespace xarm_msgs
{

struct GripperState
{

typedef GripperStateRequest Request;
typedef GripperStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GripperState
} // namespace xarm_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::xarm_msgs::GripperState > {
  static const char* value()
  {
    return "b5eb0261d03e545bc9905bb8e7e041a8";
  }

  static const char* value(const ::xarm_msgs::GripperState&) { return value(); }
};

template<>
struct DataType< ::xarm_msgs::GripperState > {
  static const char* value()
  {
    return "xarm_msgs/GripperState";
  }

  static const char* value(const ::xarm_msgs::GripperState&) { return value(); }
};


// service_traits::MD5Sum< ::xarm_msgs::GripperStateRequest> should match
// service_traits::MD5Sum< ::xarm_msgs::GripperState >
template<>
struct MD5Sum< ::xarm_msgs::GripperStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::GripperState >::value();
  }
  static const char* value(const ::xarm_msgs::GripperStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::GripperStateRequest> should match
// service_traits::DataType< ::xarm_msgs::GripperState >
template<>
struct DataType< ::xarm_msgs::GripperStateRequest>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::GripperState >::value();
  }
  static const char* value(const ::xarm_msgs::GripperStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::xarm_msgs::GripperStateResponse> should match
// service_traits::MD5Sum< ::xarm_msgs::GripperState >
template<>
struct MD5Sum< ::xarm_msgs::GripperStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::GripperState >::value();
  }
  static const char* value(const ::xarm_msgs::GripperStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::GripperStateResponse> should match
// service_traits::DataType< ::xarm_msgs::GripperState >
template<>
struct DataType< ::xarm_msgs::GripperStateResponse>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::GripperState >::value();
  }
  static const char* value(const ::xarm_msgs::GripperStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // XARM_MSGS_MESSAGE_GRIPPERSTATE_H