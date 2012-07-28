#include <ruby.h>

/*
 * Extension for generation of object ids.
 *
 * @return The generated object id.
 *
 * @since 0.0.0
 */
static VALUE object_id_generator_next(VALUE self);

/*
 * Initialize the ObjectId by adding the appropriate methods to it.
 *
 * @param [ Module ] bson The BSON module.
 *
 * @since 0.0.0
 */
void initialize_object_id(VALUE bson);
