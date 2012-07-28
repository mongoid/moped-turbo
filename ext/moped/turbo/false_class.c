#include <ruby.h>
#include <false_class.h>

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
static VALUE turbo_false_bson_dump(VALUE self, VALUE io, VALUE key)
{
  /* io << Types::BOOLEAN */
  /* io << key.to_bson_cstring */
  /* io << NULL_BYTE */
  puts("in false bson dump");
  return io;
}

/*
 * Initialize FalseClass by adding the appropriate methods to it.
 *
 * @since 0.0.0
 */
void Init_false_class()
{
  rb_define_method(rb_cFalseClass, "__bson_dump__", turbo_false_bson_dump, 2);
}
