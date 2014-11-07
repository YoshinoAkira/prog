
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_server_UnicastConnection__
#define __gnu_java_rmi_server_UnicastConnection__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace server
        {
            class UnicastConnection;
            class UnicastConnectionManager;
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class Socket;
    }
  }
}

class gnu::java::rmi::server::UnicastConnection : public ::java::lang::Object
{

public: // actually package-private
  UnicastConnection(::gnu::java::rmi::server::UnicastConnectionManager *, ::java::net::Socket *);
  virtual void acceptConnection();
  virtual void makeConnection(jint);
  virtual ::java::io::DataInputStream * getDataInputStream();
  virtual ::java::io::DataOutputStream * getDataOutputStream();
  virtual ::java::io::ObjectInputStream * getObjectInputStream();
  virtual ::java::io::ObjectInputStream * startObjectInputStream();
  virtual ::java::io::ObjectOutputStream * getObjectOutputStream();
  virtual ::java::io::ObjectOutputStream * startObjectOutputStream();
  virtual void disconnect();
  static jboolean isExpired(::gnu::java::rmi::server::UnicastConnection *, jlong);
  static void resetTime(::gnu::java::rmi::server::UnicastConnection *);
public:
  virtual void run();
public: // actually package-private
  ::gnu::java::rmi::server::UnicastConnectionManager * __attribute__((aligned(__alignof__( ::java::lang::Object)))) manager;
  ::java::net::Socket * sock;
  ::java::io::DataInputStream * din;
  ::java::io::DataOutputStream * dout;
  ::java::io::ObjectInputStream * oin;
  ::java::io::ObjectOutputStream * oout;
  jlong reviveTime;
  jlong expireTime;
public:
  static const jlong CONNECTION_TIMEOUT = 10000LL;
  static ::java::lang::Class class$;
};

#endif // __gnu_java_rmi_server_UnicastConnection__
