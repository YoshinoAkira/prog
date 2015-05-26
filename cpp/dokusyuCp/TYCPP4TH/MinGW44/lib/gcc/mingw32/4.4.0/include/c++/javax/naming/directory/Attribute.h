
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_directory_Attribute__
#define __javax_naming_directory_Attribute__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace naming
    {
        class NamingEnumeration;
      namespace directory
      {
          class Attribute;
          class DirContext;
      }
    }
  }
}

class javax::naming::directory::Attribute : public ::java::lang::Object
{

public:
  virtual ::javax::naming::NamingEnumeration * getAll() = 0;
  virtual ::java::lang::Object * get() = 0;
  virtual jint size() = 0;
  virtual ::java::lang::String * getID() = 0;
  virtual jboolean contains(::java::lang::Object *) = 0;
  virtual jboolean add(::java::lang::Object *) = 0;
  virtual jboolean remove(::java::lang::Object *) = 0;
  virtual void clear() = 0;
  virtual ::javax::naming::directory::DirContext * getAttributeSyntaxDefinition() = 0;
  virtual ::javax::naming::directory::DirContext * getAttributeDefinition() = 0;
  virtual ::java::lang::Object * clone() = 0;
  virtual jboolean isOrdered() = 0;
  virtual ::java::lang::Object * get(jint) = 0;
  virtual ::java::lang::Object * remove(jint) = 0;
  virtual void add(jint, ::java::lang::Object *) = 0;
  virtual ::java::lang::Object * set(jint, ::java::lang::Object *) = 0;
  static const jlong serialVersionUID = 8707690322213556804LL;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_naming_directory_Attribute__
