// Generated by gencpp from file khi_robot_msgs/KhiRobotCmdResponse.msg
// DO NOT EDIT!


#ifndef KHI_ROBOT_MSGS_MESSAGE_KHIROBOTCMDRESPONSE_H
#define KHI_ROBOT_MSGS_MESSAGE_KHIROBOTCMDRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace khi_robot_msgs
{
template <class ContainerAllocator>
struct KhiRobotCmdResponse_
{
  typedef KhiRobotCmdResponse_<ContainerAllocator> Type;

  KhiRobotCmdResponse_()
    : driver_ret(0)
    , as_ret(0)
    , cmd_ret()  {
    }
  KhiRobotCmdResponse_(const ContainerAllocator& _alloc)
    : driver_ret(0)
    , as_ret(0)
    , cmd_ret(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _driver_ret_type;
  _driver_ret_type driver_ret;

   typedef int32_t _as_ret_type;
  _as_ret_type as_ret;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_ret_type;
  _cmd_ret_type cmd_ret;





  typedef boost::shared_ptr< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct KhiRobotCmdResponse_

typedef ::khi_robot_msgs::KhiRobotCmdResponse_<std::allocator<void> > KhiRobotCmdResponse;

typedef boost::shared_ptr< ::khi_robot_msgs::KhiRobotCmdResponse > KhiRobotCmdResponsePtr;
typedef boost::shared_ptr< ::khi_robot_msgs::KhiRobotCmdResponse const> KhiRobotCmdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator1> & lhs, const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator2> & rhs)
{
  return lhs.driver_ret == rhs.driver_ret &&
    lhs.as_ret == rhs.as_ret &&
    lhs.cmd_ret == rhs.cmd_ret;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator1> & lhs, const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace khi_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baff9913c1b46a5cd1d4da599ea7743d";
  }

  static const char* value(const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbaff9913c1b46a5cULL;
  static const uint64_t static_value2 = 0xd1d4da599ea7743dULL;
};

template<class ContainerAllocator>
struct DataType< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "khi_robot_msgs/KhiRobotCmdResponse";
  }

  static const char* value(const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 driver_ret\n"
"int32 as_ret\n"
"string cmd_ret\n"
;
  }

  static const char* value(const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.driver_ret);
      stream.next(m.as_ret);
      stream.next(m.cmd_ret);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KhiRobotCmdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::khi_robot_msgs::KhiRobotCmdResponse_<ContainerAllocator>& v)
  {
    s << indent << "driver_ret: ";
    Printer<int32_t>::stream(s, indent + "  ", v.driver_ret);
    s << indent << "as_ret: ";
    Printer<int32_t>::stream(s, indent + "  ", v.as_ret);
    s << indent << "cmd_ret: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd_ret);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KHI_ROBOT_MSGS_MESSAGE_KHIROBOTCMDRESPONSE_H
