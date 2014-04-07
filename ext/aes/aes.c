#include <ruby.h>

static VALUE hello_world(VALUE mod)
{
  return rb_str_new2("hello world");
}

void Init_aes()
{
  VALUE mAes = rb_define_module("Aes");
  rb_define_singleton_method(mAes, "hello_world", hello_world, 0);
}