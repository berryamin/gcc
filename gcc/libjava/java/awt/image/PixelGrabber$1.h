
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_PixelGrabber$1__
#define __java_awt_image_PixelGrabber$1__

#pragma interface

#include <java/lang/Thread.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
          class PixelGrabber;
          class PixelGrabber$1;
      }
    }
  }
}

class java::awt::image::PixelGrabber$1 : public ::java::lang::Thread
{

public: // actually package-private
  PixelGrabber$1(::java::awt::image::PixelGrabber *);
public:
  virtual void run();
public: // actually package-private
  ::java::awt::image::PixelGrabber * __attribute__((aligned(__alignof__( ::java::lang::Thread)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_image_PixelGrabber$1__
