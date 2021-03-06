/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/parbot/ros_workspace/src/roboteq_mc_nxtgen_driver/srv/CustomCmd.srv
 *
 */


#ifndef ROBOTEQ_MC_NXTGEN_DRIVER_MESSAGE_CUSTOMCMDREQUEST_H
#define ROBOTEQ_MC_NXTGEN_DRIVER_MESSAGE_CUSTOMCMDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboteq_mc_nxtgen_driver
{
template <class ContainerAllocator>
struct CustomCmdRequest_
{
  typedef CustomCmdRequest_<ContainerAllocator> Type;

  CustomCmdRequest_()
    : req()  {
    }
  CustomCmdRequest_(const ContainerAllocator& _alloc)
    : req(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _req_type;
  _req_type req;




  typedef boost::shared_ptr< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct CustomCmdRequest_

typedef ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<std::allocator<void> > CustomCmdRequest;

typedef boost::shared_ptr< ::roboteq_mc_nxtgen_driver::CustomCmdRequest > CustomCmdRequestPtr;
typedef boost::shared_ptr< ::roboteq_mc_nxtgen_driver::CustomCmdRequest const> CustomCmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboteq_mc_nxtgen_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/hydro/share/nav_msgs/cmake/../msg'], 'roboteq_mc_nxtgen_driver': ['/home/parbot/ros_workspace/src/roboteq_mc_nxtgen_driver/msg'], 'actionlib_msgs': ['/opt/ros/hydro/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8dc53fbc3707f169aa5dbf7b19d2567";
  }

  static const char* value(const ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8dc53fbc3707f16ULL;
  static const uint64_t static_value2 = 0x9aa5dbf7b19d2567ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboteq_mc_nxtgen_driver/CustomCmdRequest";
  }

  static const char* value(const ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string req\n\
";
  }

  static const char* value(const ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.req);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CustomCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboteq_mc_nxtgen_driver::CustomCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "req: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.req);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTEQ_MC_NXTGEN_DRIVER_MESSAGE_CUSTOMCMDREQUEST_H
