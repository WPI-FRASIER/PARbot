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
 * Auto-generated by genmsg_cpp from file /home/parbot/ros_workspace/devel/share/device_driver_base/msg/SetMotorPositionResult.msg
 *
 */


#ifndef DEVICE_DRIVER_BASE_MESSAGE_SETMOTORPOSITIONRESULT_H
#define DEVICE_DRIVER_BASE_MESSAGE_SETMOTORPOSITIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace device_driver_base
{
template <class ContainerAllocator>
struct SetMotorPositionResult_
{
  typedef SetMotorPositionResult_<ContainerAllocator> Type;

  SetMotorPositionResult_()
    : final_position(0)  {
    }
  SetMotorPositionResult_(const ContainerAllocator& _alloc)
    : final_position(0)  {
    }



   typedef int32_t _final_position_type;
  _final_position_type final_position;




  typedef boost::shared_ptr< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct SetMotorPositionResult_

typedef ::device_driver_base::SetMotorPositionResult_<std::allocator<void> > SetMotorPositionResult;

typedef boost::shared_ptr< ::device_driver_base::SetMotorPositionResult > SetMotorPositionResultPtr;
typedef boost::shared_ptr< ::device_driver_base::SetMotorPositionResult const> SetMotorPositionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace device_driver_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/hydro/share/actionlib_msgs/cmake/../msg'], 'device_driver_base': ['/home/parbot/ros_workspace/devel/share/device_driver_base/msg', '/home/parbot/ros_workspace/src/river_util/device_driver_base/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab176b822e74d6c47e3016da483f3b23";
  }

  static const char* value(const ::device_driver_base::SetMotorPositionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab176b822e74d6c4ULL;
  static const uint64_t static_value2 = 0x7e3016da483f3b23ULL;
};

template<class ContainerAllocator>
struct DataType< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "device_driver_base/SetMotorPositionResult";
  }

  static const char* value(const ::device_driver_base::SetMotorPositionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
int32 final_position\n\
";
  }

  static const char* value(const ::device_driver_base::SetMotorPositionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.final_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetMotorPositionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::device_driver_base::SetMotorPositionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::device_driver_base::SetMotorPositionResult_<ContainerAllocator>& v)
  {
    s << indent << "final_position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.final_position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEVICE_DRIVER_BASE_MESSAGE_SETMOTORPOSITIONRESULT_H
