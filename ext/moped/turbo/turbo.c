#include <ruby.h>
#include <object_id.h>

/*
 * Initialize the moped turbo extensions.
 *
 * @since 0.0.0
 */
void Init_turbo()
{
  VALUE moped = rb_const_get(rb_cObject, rb_intern("Moped"));
  VALUE bson = rb_const_get(moped, rb_intern("BSON"));
  initialize_object_id(bson);
}
