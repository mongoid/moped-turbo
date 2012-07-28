#include "ruby.h"

/*
 * Extension for FalseClass#__bson_dump__.
 *
 * @param [ IO ] io The string io object.
 * @param [ String ] key The field name.
 *
 * @return [ IO ] The string io.
 *
 * @since 0.0.0
 */
static VALUE t_bson_dump(VALUE self, VALUE io, VALUE key)
{
  /* io << Types::BOOLEAN */
  /* io << key.to_bson_cstring */
  /* io << NULL_BYTE */
  return io;
}

void Init_FalseClass() {
  rb_define_method(rb_cFalseClass, "__bson_dump__", t_bson_dump, 2);
}
