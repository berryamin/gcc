
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_portable_StreamableValue__
#define __org_omg_CORBA_portable_StreamableValue__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
            class StreamableValue;
        }
      }
    }
  }
}

class org::omg::CORBA::portable::StreamableValue : public ::java::lang::Object
{

public:
  virtual void _read(::org::omg::CORBA::portable::InputStream *) = 0;
  virtual ::org::omg::CORBA::TypeCode * _type() = 0;
  virtual void _write(::org::omg::CORBA::portable::OutputStream *) = 0;
  virtual JArray< ::java::lang::String * > * _truncatable_ids() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_omg_CORBA_portable_StreamableValue__
