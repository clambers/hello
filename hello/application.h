#ifndef JLR_HELLO_APPLICATION_H__
#define JLR_HELLO_APPLICATION_H__

#include <gio/gio.h>

G_BEGIN_DECLS

#define HELLO_TYPE_APPLICATION hello_application_get_type()

G_DECLARE_FINAL_TYPE(HelloApplication, hello_application, HELLO, APPLICATION, GApplication)

HelloApplication *hello_application_new(void);
void hello_application_set_argc(HelloApplication *, int);
void hello_application_set_argv(HelloApplication *, char **);

G_END_DECLS

#endif
