#include <ruby.h>

static VALUE hello_world(VALUE klass)
{
  return rb_str_new2("hello world");
}

void Init_hello()
{
  VALUE mHello = rb_define_class("Hello", rb_cObject);
  rb_define_singleton_method(mHello, "hello_world", hello_world, 0);
}
