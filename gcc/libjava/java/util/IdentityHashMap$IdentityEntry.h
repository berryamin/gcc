
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_IdentityHashMap$IdentityEntry__
#define __java_util_IdentityHashMap$IdentityEntry__

#pragma interface

#include <java/lang/Object.h>

class java::util::IdentityHashMap$IdentityEntry : public ::java::lang::Object
{

public: // actually package-private
  IdentityHashMap$IdentityEntry(::java::util::IdentityHashMap *, jint);
public:
  jboolean equals(::java::lang::Object *);
  ::java::lang::Object * getKey();
  ::java::lang::Object * getValue();
  jint hashCode();
  ::java::lang::Object * setValue(::java::lang::Object *);
  ::java::lang::String * toString();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) loc;
  jint knownMod;
  ::java::util::IdentityHashMap * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_IdentityHashMap$IdentityEntry__
