#include <ruby.h>

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
static VALUE turbo_false_bson_dump(VALUE io, VALUE key);

/*
 * Initialize FalseClass by adding the appropriate methods to it.
 *
 * @since 0.0.0
 */
void Init_false_class();
