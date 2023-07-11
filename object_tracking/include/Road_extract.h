// Generated by gencpp from file object_tracking/Road_extract.msg
// DO NOT EDIT!


#ifndef OBJECT_TRACKING_MESSAGE_ROAD_EXTRACT_H
#define OBJECT_TRACKING_MESSAGE_ROAD_EXTRACT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace object_tracking
{
template <class ContainerAllocator>
struct Road_extract_
{
  typedef Road_extract_<ContainerAllocator> Type;

  Road_extract_()
    : header()
    , cell_length(0.0)
    , cell_width(0.0)
    , x()
    , y()
    , z()  {
    }
  Road_extract_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cell_length(0.0)
    , cell_width(0.0)
    , x(_alloc)
    , y(_alloc)
    , z(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _cell_length_type;
  _cell_length_type cell_length;

   typedef float _cell_width_type;
  _cell_width_type cell_width;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _x_type;
  _x_type x;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _y_type;
  _y_type y;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::object_tracking::Road_extract_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_tracking::Road_extract_<ContainerAllocator> const> ConstPtr;

}; // struct Road_extract_

typedef ::object_tracking::Road_extract_<std::allocator<void> > Road_extract;

typedef boost::shared_ptr< ::object_tracking::Road_extract > Road_extractPtr;
typedef boost::shared_ptr< ::object_tracking::Road_extract const> Road_extractConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_tracking::Road_extract_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_tracking::Road_extract_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::object_tracking::Road_extract_<ContainerAllocator1> & lhs, const ::object_tracking::Road_extract_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.cell_length == rhs.cell_length &&
    lhs.cell_width == rhs.cell_width &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::object_tracking::Road_extract_<ContainerAllocator1> & lhs, const ::object_tracking::Road_extract_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace object_tracking

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::object_tracking::Road_extract_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_tracking::Road_extract_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_tracking::Road_extract_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_tracking::Road_extract_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_tracking::Road_extract_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_tracking::Road_extract_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_tracking::Road_extract_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c6a5f29083f5799d3088f2378a4c2861";
  }

  static const char* value(const ::object_tracking::Road_extract_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc6a5f29083f5799dULL;
  static const uint64_t static_value2 = 0x3088f2378a4c2861ULL;
};

template<class ContainerAllocator>
struct DataType< ::object_tracking::Road_extract_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_tracking/Road_extract";
  }

  static const char* value(const ::object_tracking::Road_extract_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_tracking::Road_extract_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 cell_length\n"
"float32 cell_width\n"
"float32[] x\n"
"float32[] y\n"
"float32[] z\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::object_tracking::Road_extract_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_tracking::Road_extract_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cell_length);
      stream.next(m.cell_width);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Road_extract_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_tracking::Road_extract_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_tracking::Road_extract_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cell_length: ";
    Printer<float>::stream(s, indent + "  ", v.cell_length);
    s << indent << "cell_width: ";
    Printer<float>::stream(s, indent + "  ", v.cell_width);
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.y[i]);
    }
    s << indent << "z[]" << std::endl;
    for (size_t i = 0; i < v.z.size(); ++i)
    {
      s << indent << "  z[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.z[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_TRACKING_MESSAGE_ROAD_EXTRACT_H