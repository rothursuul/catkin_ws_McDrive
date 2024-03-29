// Generated by gencpp from file simple_parking_maneuver/ParkingManeuverRequest.msg
// DO NOT EDIT!


#ifndef SIMPLE_PARKING_MANEUVER_MESSAGE_PARKINGMANEUVERREQUEST_H
#define SIMPLE_PARKING_MANEUVER_MESSAGE_PARKINGMANEUVERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simple_parking_maneuver
{
template <class ContainerAllocator>
struct ParkingManeuverRequest_
{
  typedef ParkingManeuverRequest_<ContainerAllocator> Type;

  ParkingManeuverRequest_()
    : direction()  {
    }
  ParkingManeuverRequest_(const ContainerAllocator& _alloc)
    : direction(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _direction_type;
  _direction_type direction;





  typedef boost::shared_ptr< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ParkingManeuverRequest_

typedef ::simple_parking_maneuver::ParkingManeuverRequest_<std::allocator<void> > ParkingManeuverRequest;

typedef boost::shared_ptr< ::simple_parking_maneuver::ParkingManeuverRequest > ParkingManeuverRequestPtr;
typedef boost::shared_ptr< ::simple_parking_maneuver::ParkingManeuverRequest const> ParkingManeuverRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simple_parking_maneuver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "326e9417def5db9a05a2704a4d8de15e";
  }

  static const char* value(const ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x326e9417def5db9aULL;
  static const uint64_t static_value2 = 0x05a2704a4d8de15eULL;
};

template<class ContainerAllocator>
struct DataType< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simple_parking_maneuver/ParkingManeuverRequest";
  }

  static const char* value(const ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string direction\n"
;
  }

  static const char* value(const ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParkingManeuverRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simple_parking_maneuver::ParkingManeuverRequest_<ContainerAllocator>& v)
  {
    s << indent << "direction: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMPLE_PARKING_MANEUVER_MESSAGE_PARKINGMANEUVERREQUEST_H
