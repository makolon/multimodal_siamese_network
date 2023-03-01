// Generated by gencpp from file xarm_msgs/SetFloat32Request.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_SETFLOAT32REQUEST_H
#define XARM_MSGS_MESSAGE_SETFLOAT32REQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xarm_msgs
{
template <class ContainerAllocator>
struct SetFloat32Request_
{
  typedef SetFloat32Request_<ContainerAllocator> Type;

  SetFloat32Request_()
    : data(0.0)  {
    }
  SetFloat32Request_(const ContainerAllocator& _alloc)
    : data(0.0)  {
  (void)_alloc;
    }



   typedef float _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> const> ConstPtr;

}; // struct SetFloat32Request_

typedef ::xarm_msgs::SetFloat32Request_<std::allocator<void> > SetFloat32Request;

typedef boost::shared_ptr< ::xarm_msgs::SetFloat32Request > SetFloat32RequestPtr;
typedef boost::shared_ptr< ::xarm_msgs::SetFloat32Request const> SetFloat32RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_msgs::SetFloat32Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xarm_msgs::SetFloat32Request_<ContainerAllocator1> & lhs, const ::xarm_msgs::SetFloat32Request_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xarm_msgs::SetFloat32Request_<ContainerAllocator1> & lhs, const ::xarm_msgs::SetFloat32Request_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xarm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "73fcbf46b49191e672908e50842a83d4";
  }

  static const char* value(const ::xarm_msgs::SetFloat32Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x73fcbf46b49191e6ULL;
  static const uint64_t static_value2 = 0x72908e50842a83d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_msgs/SetFloat32Request";
  }

  static const char* value(const ::xarm_msgs::SetFloat32Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# request: set single floating point parameters.\n"
"# data: floating point (32-bit) parameter value.\n"
"\n"
"float32 data\n"
"\n"
;
  }

  static const char* value(const ::xarm_msgs::SetFloat32Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetFloat32Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_msgs::SetFloat32Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_msgs::SetFloat32Request_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<float>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_MSGS_MESSAGE_SETFLOAT32REQUEST_H