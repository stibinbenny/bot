// Generated by gencpp from file bumperbot_examples/AddTwointsRequest.msg
// DO NOT EDIT!


#ifndef BUMPERBOT_EXAMPLES_MESSAGE_ADDTWOINTSREQUEST_H
#define BUMPERBOT_EXAMPLES_MESSAGE_ADDTWOINTSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bumperbot_examples
{
template <class ContainerAllocator>
struct AddTwointsRequest_
{
  typedef AddTwointsRequest_<ContainerAllocator> Type;

  AddTwointsRequest_()
    : a(0)
    , b(0)  {
    }
  AddTwointsRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int64_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddTwointsRequest_

typedef ::bumperbot_examples::AddTwointsRequest_<std::allocator<void> > AddTwointsRequest;

typedef boost::shared_ptr< ::bumperbot_examples::AddTwointsRequest > AddTwointsRequestPtr;
typedef boost::shared_ptr< ::bumperbot_examples::AddTwointsRequest const> AddTwointsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator1> & lhs, const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator1> & lhs, const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bumperbot_examples

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36d09b846be0b371c5f190354dd3153e";
  }

  static const char* value(const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36d09b846be0b371ULL;
  static const uint64_t static_value2 = 0xc5f190354dd3153eULL;
};

template<class ContainerAllocator>
struct DataType< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bumperbot_examples/AddTwointsRequest";
  }

  static const char* value(const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Request\n"
"int64 a\n"
"int64 b\n"
;
  }

  static const char* value(const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddTwointsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bumperbot_examples::AddTwointsRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BUMPERBOT_EXAMPLES_MESSAGE_ADDTWOINTSREQUEST_H
