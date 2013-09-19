/* Auto-generated by genmsg_cpp for file /home/qiaosong/Desktop/workspace/ud_mesh/ud_mesh/srv/rgbdslam_ros_ui.srv */
#ifndef UD_MESH_SERVICE_RGBDSLAM_ROS_UI_H
#define UD_MESH_SERVICE_RGBDSLAM_ROS_UI_H
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




namespace ud_mesh
{
template <class ContainerAllocator>
struct rgbdslam_ros_uiRequest_ {
  typedef rgbdslam_ros_uiRequest_<ContainerAllocator> Type;

  rgbdslam_ros_uiRequest_()
  : command()
  {
  }

  rgbdslam_ros_uiRequest_(const ContainerAllocator& _alloc)
  : command(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  command;


  typedef boost::shared_ptr< ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct rgbdslam_ros_uiRequest
typedef  ::ud_mesh::rgbdslam_ros_uiRequest_<std::allocator<void> > rgbdslam_ros_uiRequest;

typedef boost::shared_ptr< ::ud_mesh::rgbdslam_ros_uiRequest> rgbdslam_ros_uiRequestPtr;
typedef boost::shared_ptr< ::ud_mesh::rgbdslam_ros_uiRequest const> rgbdslam_ros_uiRequestConstPtr;



template <class ContainerAllocator>
struct rgbdslam_ros_uiResponse_ {
  typedef rgbdslam_ros_uiResponse_<ContainerAllocator> Type;

  rgbdslam_ros_uiResponse_()
  {
  }

  rgbdslam_ros_uiResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct rgbdslam_ros_uiResponse
typedef  ::ud_mesh::rgbdslam_ros_uiResponse_<std::allocator<void> > rgbdslam_ros_uiResponse;

typedef boost::shared_ptr< ::ud_mesh::rgbdslam_ros_uiResponse> rgbdslam_ros_uiResponsePtr;
typedef boost::shared_ptr< ::ud_mesh::rgbdslam_ros_uiResponse const> rgbdslam_ros_uiResponseConstPtr;


struct rgbdslam_ros_ui
{

typedef rgbdslam_ros_uiRequest Request;
typedef rgbdslam_ros_uiResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct rgbdslam_ros_ui
} // namespace ud_mesh

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const  ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xcba5e21e920a3a2bULL;
  static const uint64_t static_value2 = 0x7b375cb65b64cdeaULL;
};

template<class ContainerAllocator>
struct DataType< ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ud_mesh/rgbdslam_ros_uiRequest";
  }

  static const char* value(const  ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string command\n\
\n\
";
  }

  static const char* value(const  ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ud_mesh/rgbdslam_ros_uiResponse";
  }

  static const char* value(const  ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.command);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct rgbdslam_ros_uiRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct rgbdslam_ros_uiResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<ud_mesh::rgbdslam_ros_ui> {
  static const char* value() 
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const ud_mesh::rgbdslam_ros_ui&) { return value(); } 
};

template<>
struct DataType<ud_mesh::rgbdslam_ros_ui> {
  static const char* value() 
  {
    return "ud_mesh/rgbdslam_ros_ui";
  }

  static const char* value(const ud_mesh::rgbdslam_ros_ui&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ud_mesh/rgbdslam_ros_ui";
  }

  static const char* value(const ud_mesh::rgbdslam_ros_uiRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ud_mesh/rgbdslam_ros_ui";
  }

  static const char* value(const ud_mesh::rgbdslam_ros_uiResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // UD_MESH_SERVICE_RGBDSLAM_ROS_UI_H

