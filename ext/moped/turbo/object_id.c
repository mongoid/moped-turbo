#include <ruby.h>
#include <object_id.h>

/*
 * Extension for generation of object ids.
 *
 * @return The generated object id.
 *
 * @since 0.0.0
 */
static VALUE object_id_generator_next(VALUE self)
{
  char data[12];
  return rb_ary_new2(data);
}

/*
 * Initialize the ObjectId by adding the appropriate methods to it.
 *
 * @since 0.0.0
 */
void initialize_object_id()
{
  VALUE moped = rb_const_get(rb_cObject, rb_intern("Moped"));
  VALUE bson = rb_const_get(moped, rb_intern("BSON"));
  VALUE object_id = rb_const_get(bson, rb_intern("ObjectId"));
  VALUE generator = rb_const_get(object_id, rb_intern("Generator"));
  rb_define_method(generator, "next", object_id_generator_next, 0);
}
