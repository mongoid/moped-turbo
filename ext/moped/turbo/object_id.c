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
  return self;
}

/*
 * Initialize the ObjectId by adding the appropriate methods to it.
 *
 * @param [ Module ] bson The BSON module.
 *
 * @since 0.0.0
 */
void initialize_object_id(VALUE bson)
{
  VALUE object_id = rb_const_get(bson, rb_intern("ObjectId"));
  VALUE generator = rb_const_get(object_id, rb_intern("Generator"));
  rb_define_method(generator, "next", object_id_generator_next, 0);
}
