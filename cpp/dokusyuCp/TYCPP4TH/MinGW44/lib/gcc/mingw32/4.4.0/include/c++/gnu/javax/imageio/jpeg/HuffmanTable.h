
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_jpeg_HuffmanTable__
#define __gnu_javax_imageio_jpeg_HuffmanTable__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace jpeg
        {
            class HuffmanTable;
            class JPEGImageInputStream;
        }
      }
    }
  }
  namespace javax
  {
    namespace imageio
    {
      namespace plugins
      {
        namespace jpeg
        {
            class JPEGHuffmanTable;
        }
      }
    }
  }
}

class gnu::javax::imageio::jpeg::HuffmanTable : public ::java::lang::Object
{

public:
  HuffmanTable(::javax::imageio::plugins::jpeg::JPEGHuffmanTable *);
private:
  void generateSizeTable();
  void generateCodeTable();
  void generateDecoderTables();
public:
  virtual void orderCodes(jboolean);
  static jint extend(jint, jint);
  virtual jint decode(::gnu::javax::imageio::jpeg::JPEGImageInputStream *);
  static const jint HUFFMAN_MAX_TABLES = 4;
private:
  JArray< jshort > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) huffcode;
  JArray< jshort > * huffsize;
  JArray< jshort > * EHUFCO;
  JArray< jshort > * EHUFSI;
  JArray< jshort > * valptr;
  JArray< jshort > * mincode;
  JArray< jshort > * maxcode;
  JArray< jshort > * huffval;
  JArray< jshort > * bits;
public: // actually package-private
  static jbyte JPEG_DC_TABLE;
  static jbyte JPEG_AC_TABLE;
private:
  jshort lastk;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_imageio_jpeg_HuffmanTable__
