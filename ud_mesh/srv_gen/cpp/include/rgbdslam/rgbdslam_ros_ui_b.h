/* Auto-generated by genmsg_cpp for file /home/qiaosong/Desktop/workspace/rgbdslam_freiburg/rgbdslam/srv/rgbdslam_ros_ui_b.srv */
#ifndef RGBDSLAM_SERVICE_RGBDSLAM_ROS_UI_B_H
#define RGBDSLAM_SERVICE_RGBDSLAM_ROS_UI_B_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace rgbdslam
{
template <class ContainerAllocator>
struct rgbdslam_ros_ui_bRequest_ {
  typedef rgbdslam_ros_ui_bRequest_<ContainerAllocator> Type;

  rgbdslam_ros_ui_bRequest_()
  : command()
  , value(false)
  {
  }

  rgbdslam_ros_ui_bRequest_(const ContainerAllocator& _alloc)
  : command(_alloc)
  , value(false)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  command;

  typedef uint8_t _value_type;
  uint8_t value;


  typedef boost::shared_ptr< ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct rgbdslam_ros_ui_bRequest
typedef  ::rgbdslam::rgbdslam_ros_ui_bRequest_<std::allocator<void> > rgbdslam_ros_ui_bRequest;

typedef boost::shared_ptr< ::rgbdslam::rgbdslam_ros_ui_bRequest> rgbdslam_ros_ui_bRequestPtr;
typedef boost::shared_ptr< ::rgbdslam::rgbdslam_ros_ui_bRequest const> rgbdslam_ros_ui_bRequestConstPtr;



template <class ContainerAllocator>
struct rgbdslam_ros_ui_bResponse_ {
  typedef rgbdslam_ros_ui_bResponse_<ContainerAllocator> Type;

  rgbdslam_ros_ui_bResponse_()
  {
  }

  rgbdslam_ros_ui_bResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct rgbdslam_ros_ui_bResponse
typedef  ::rgbdslam::rgbdslam_ros_ui_bResponse_<std::allocator<void> > rgbdslam_ros_ui_bResponse;

typedef boost::shared_ptr< ::rgbdslam::rgbdslam_ros_ui_bResponse> rgbdslam_ros_ui_bResponsePtr;
typedef boost::shared_ptr< ::rgbdslam::rgbdslam_ros_ui_bResponse const> rgbdslam_ros_ui_bResponseConstPtr;


struct rgbdslam_ros_ui_b
{

typedef rgbdslam_ros_ui_bRequest Request;
typedef rgbdslam_ros_ui_bResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct rgbdslam_ros_ui_b
} // namespace rgbdslam

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "95aa0151a35e3de365041ffa089ce8c7";
  }

  static const char* value(const  ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x95aa0151a35e3de3ULL;
  static const uint64_t static_value2 = 0x65041ffa089ce8c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rgbdslam/rgbdslam_ros_ui_bRequest";
  }

  static const char* value(const  ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string command\n\
bool value\n\
\n\
";
  }

  static const char* value(const  ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rgbdslam/rgbdslam_ros_ui_bResponse";
  }

  static const char* value(const  ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.command);
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct rgbdslam_ros_ui_bRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct rgbdslam_ros_ui_bResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rgbdslam::rgbdslam_ros_ui_b> {
  static const char* value() 
  {
    return "95aa0151a35e3de365041ffa089ce8c7";
  }

  static const char* value(const rgbdslam::rgbdslam_ros_ui_b&) { return value(); } 
};

template<>
struct DataType<rgbdslam::rgbdslam_ros_ui_b> {
  static const char* value() 
  {
    return "rgbdslam/rgbdslam_ros_ui_b";
  }

  static const char* value(const rgbdslam::rgbdslam_ros_ui_b&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "95aa0151a35e3de365041ffa089ce8c7";
  }

  static const char* value(const rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rgbdslam/rgbdslam_ros_ui_b";
  }

  static const char* value(const rgbdslam::rgbdslam_ros_ui_bRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "95aa0151a35e3de365041ffa089ce8c7";
  }

  static const char* value(const rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rgbdslam/rgbdslam_ros_ui_b";
  }

  static const char* value(const rgbdslam::rgbdslam_ros_ui_bResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // RGBDSLAM_SERVICE_RGBDSLAM_ROS_UI_B_H

