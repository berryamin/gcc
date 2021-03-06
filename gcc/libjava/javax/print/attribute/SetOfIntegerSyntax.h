
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_SetOfIntegerSyntax__
#define __javax_print_attribute_SetOfIntegerSyntax__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
        class StringCharacterIterator;
    }
  }
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
          class IntegerSyntax;
          class SetOfIntegerSyntax;
      }
    }
  }
}

class javax::print::attribute::SetOfIntegerSyntax : public ::java::lang::Object
{

  static JArray< JArray< jint > * > * normalize(JArray< JArray< jint > * > *, jint);
public: // actually protected
  SetOfIntegerSyntax(jint);
  SetOfIntegerSyntax(JArray< JArray< jint > * > *);
private:
  jboolean skipWhitespace(::java::text::StringCharacterIterator *);
  jboolean skipNumber(::java::text::StringCharacterIterator *);
public: // actually protected
  SetOfIntegerSyntax(::java::lang::String *);
  SetOfIntegerSyntax(jint, jint);
public:
  virtual jboolean contains(jint);
  virtual jboolean contains(::javax::print::attribute::IntegerSyntax *);
  virtual jboolean equals(::java::lang::Object *);
  virtual JArray< JArray< jint > * > * getMembers();
  virtual jint hashCode();
  virtual jint next(jint);
  virtual ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = 3666874174847632203LL;
  JArray< JArray< jint > * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) members;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_SetOfIntegerSyntax__
