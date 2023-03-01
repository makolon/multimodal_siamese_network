// Generated by gencpp from file xarm_planner/joint_planRequest.msg
// DO NOT EDIT!


#ifndef XARM_PLANNER_MESSAGE_JOINT_PLANREQUEST_H
#define XARM_PLANNER_MESSAGE_JOINT_PLANREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xarm_planner
{
template <class ContainerAllocator>
struct joint_planRequest_
{
  typedef joint_planRequest_<ContainerAllocator> Type;

  joint_planRequest_()
    : target()  {
    }
  joint_planRequest_(const ContainerAllocator& _alloc)
    : target(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _target_type;
  _target_type target;





  typedef boost::shared_ptr< ::xarm_planner::joint_planRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_planner::joint_planRequest_<ContainerAllocator> const> ConstPtr;

}; // struct joint_planRequest_

typedef ::xarm_planner::joint_planRequest_<std::allocator<void> > joint_planRequest;

typedef boost::shared_ptr< ::xarm_planner::joint_planRequest > joint_planRequestPtr;
typedef boost::shared_ptr< ::xarm_planner::joint_planRequest const> joint_planRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_planner::joint_planRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_planner::joint_planRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xarm_planner::joint_planRequest_<ContainerAllocator1> & lhs, const ::xarm_planner::joint_planRequest_<ContainerAllocator2> & rhs)
{
  return lhs.target == rhs.target;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xarm_planner::joint_planRequest_<ContainerAllocator1> & lhs, const ::xarm_planner::joint_planRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xarm_planner

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xarm_planner::joint_planRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_planner::joint_planRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_planner::joint_planRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_planner::joint_planRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_planner::joint_planRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_planner::joint_planRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_planner::joint_planRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b497188d656d59d92c0ddf8ac50fe8a";
  }

  static const char* value(const ::xarm_planner::joint_planRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b497188d656d59dULL;
  static const uint64_t static_value2 = 0x92c0ddf8ac50fe8aULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_planner::joint_planRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_planner/joint_planRequest";
  }

  static const char* value(const ::xarm_planner::joint_planRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_planner::joint_planRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# list of target joint positions in radian.\n"
"float64[] target\n"
"\n"
;
  }

  static const char* value(const ::xarm_planner::joint_planRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_planner::joint_planRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct joint_planRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_planner::joint_planRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_planner::joint_planRequest_<ContainerAllocator>& v)
  {
    s << indent << "target[]" << std::endl;
    for (size_t i = 0; i < v.target.size(); ++i)
    {
      s << indent << "  target[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.target[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_PLANNER_MESSAGE_JOINT_PLANREQUEST_H
