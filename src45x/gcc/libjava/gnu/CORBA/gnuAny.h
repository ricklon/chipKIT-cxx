
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_gnuAny__
#define __gnu_CORBA_gnuAny__

#pragma interface

#include <org/omg/CORBA/Any.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class gnuAny;
    }
  }
  namespace java
  {
    namespace math
    {
        class BigDecimal;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class ORB;
          class Object;
          class Principal;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
            class Streamable;
        }
      }
    }
  }
}

class gnu::CORBA::gnuAny : public ::org::omg::CORBA::Any
{

public:
  gnuAny();
  virtual void setOrb(::org::omg::CORBA::ORB *);
  virtual ::gnu::CORBA::gnuAny * Clone();
  virtual ::org::omg::CORBA::portable::InputStream * create_input_stream();
  virtual ::org::omg::CORBA::portable::OutputStream * create_output_stream();
  virtual jboolean equal(::org::omg::CORBA::Any *);
  virtual jint hashCode();
  virtual jboolean equals(::java::lang::Object *);
  virtual ::org::omg::CORBA::Object * extract_Object();
  virtual ::org::omg::CORBA::Principal * extract_Principal();
  virtual ::org::omg::CORBA::portable::Streamable * extract_Streamable();
  virtual ::org::omg::CORBA::TypeCode * extract_TypeCode();
  virtual ::java::io::Serializable * extract_Value();
  virtual ::org::omg::CORBA::Any * extract_any();
  virtual jboolean extract_boolean();
  virtual jchar extract_char();
  virtual jdouble extract_double();
  virtual ::java::math::BigDecimal * extract_fixed();
  virtual jfloat extract_float();
  virtual jint extract_long();
  virtual jlong extract_longlong();
  virtual jbyte extract_octet();
  virtual jshort extract_short();
  virtual ::java::lang::String * extract_string();
  virtual jint extract_ulong();
  virtual jlong extract_ulonglong();
  virtual jshort extract_ushort();
  virtual jchar extract_wchar();
  virtual ::java::lang::String * extract_wstring();
  virtual void insert_Object(::org::omg::CORBA::Object *, ::org::omg::CORBA::TypeCode *);
  virtual void insert_Object(::org::omg::CORBA::Object *);
  virtual void insert_Principal(::org::omg::CORBA::Principal *);
  virtual void insert_Streamable(::org::omg::CORBA::portable::Streamable *);
  virtual void insert_TypeCode(::org::omg::CORBA::TypeCode *);
  virtual void insert_Value(::java::io::Serializable *, ::org::omg::CORBA::TypeCode *);
  virtual void insert_Value(::java::io::Serializable *);
  virtual void insert_any(::org::omg::CORBA::Any *);
  virtual void insert_boolean(jboolean);
  virtual void insert_char(jchar);
  virtual void insert_double(jdouble);
  virtual void insert_fixed(::java::math::BigDecimal *, ::org::omg::CORBA::TypeCode *);
  virtual void insert_fixed(::java::math::BigDecimal *);
  virtual void insert_float(jfloat);
  virtual void insert_long(jint);
  virtual void insert_longlong(jlong);
  virtual void insert_octet(jbyte);
  virtual void insert_short(jshort);
  virtual void insert_string(::java::lang::String *);
  virtual void insert_ulong(jint);
  virtual void insert_ulonglong(jlong);
  virtual void insert_ushort(jshort);
  virtual void insert_wchar(jchar);
  virtual void insert_wstring(::java::lang::String *);
  virtual ::org::omg::CORBA::ORB * orb();
  virtual void read_value(::org::omg::CORBA::portable::InputStream *, ::org::omg::CORBA::TypeCode *);
  virtual ::org::omg::CORBA::TypeCode * type();
  virtual void type(::org::omg::CORBA::TypeCode *);
  virtual void write_value(::org::omg::CORBA::portable::OutputStream *);
public: // actually protected
  virtual void check(jint);
private:
  void resetTypes();
  static const jlong serialVersionUID = 1LL;
public: // actually protected
  static ::org::omg::CORBA::TypeCode * nullType;
  ::org::omg::CORBA::portable::Streamable * __attribute__((aligned(__alignof__( ::org::omg::CORBA::Any)))) has;
  ::org::omg::CORBA::TypeCode * typecode;
  jint xKind;
private:
  ::org::omg::CORBA::ORB * orb__;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_gnuAny__
