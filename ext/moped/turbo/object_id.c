#include <ruby.h>
#include <unistd.h>

/*
 * Extension for generation of object ids.
 *
 * @return The generated object id.
 *
 * @since 0.0.0
 */
static VALUE object_id_generator_next(VALUE self)
{
  static int counter = 0;
  char bytes[12];
  int now = (int) time(0);
  int incremented = counter++;

  VALUE thread = rb_thread_current();
  long thread_id = FIX2LONG(rb_obj_id(thread));

  char *timestamp = (char*) &now;
  char *machine = (char*) &thread_id;
  char *count = (char*) &incremented;

  // 4 Bytes for the timestamp in big endian.
  bytes[0] = timestamp[3];
  bytes[1] = timestamp[2];
  bytes[2] = timestamp[1];
  bytes[3] = timestamp[0];

  // 5 bytes machine id + thread id.
  bytes[4] = machine[0];
  bytes[5] = machine[1];
  bytes[6] = machine[2];
  bytes[7] = machine[3];
  bytes[8] = machine[4];

  // 4 bytes for the counter in big endian.
  bytes[9] = count[2];
  bytes[10] = count[1];
  bytes[11] = count[0];

  return rb_str_new(bytes, 12);
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

  rb_remove_method(generator, "next");
  rb_define_method(generator, "next", object_id_generator_next, 0);
}
