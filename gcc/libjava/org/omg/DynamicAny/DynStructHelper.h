
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_DynamicAny_DynStructHelper__
#define __org_omg_DynamicAny_DynStructHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Object;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace DynamicAny
      {
          class DynStruct;
          class DynStructHelper;
      }
    }
  }
}

class org::omg::DynamicAny::DynStructHelper : public ::java::lang::Object
{

public:
  DynStructHelper();
  static ::org::omg::DynamicAny::DynStruct * narrow(::org::omg::CORBA::Object *);
  static ::org::omg::DynamicAny::DynStruct * unchecked_narrow(::org::omg::CORBA::Object *);
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::DynamicAny::DynStruct *);
  static ::org::omg::DynamicAny::DynStruct * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::DynamicAny::DynStruct * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::DynamicAny::DynStruct *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_DynamicAny_DynStructHelper__