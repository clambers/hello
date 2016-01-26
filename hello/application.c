#include "application.h"
#include "hello.h"

struct _HelloApplication {
  GApplication parent_instance;
};

typedef struct {
  int argc;
  char **argv;
} HelloApplicationPrivate;

G_DEFINE_TYPE_WITH_PRIVATE(HelloApplication, hello_application, G_TYPE_APPLICATION);

static void hello_application_activate(GApplication *);

static void hello_application_class_init(HelloApplicationClass *class) {
  G_APPLICATION_CLASS(class)->activate = hello_application_activate;
}

static void hello_application_init(HelloApplication *this) {}

static void hello_application_activate(GApplication *this) {
  HelloApplicationPrivate *priv;

  priv = hello_application_get_instance_private(HELLO_APPLICATION(this));

  present_application(priv->argc, priv->argv);
}

HelloApplication *hello_application_new(void) {
  return g_object_new(HELLO_TYPE_APPLICATION,
                      "application-id", "com.jaguarlandrover.Hello",
                      "flags", G_APPLICATION_FLAGS_NONE,
                      NULL);
}

void hello_application_set_argc(HelloApplication *this, int argc) {
  HelloApplicationPrivate *priv;

  priv = hello_application_get_instance_private(this);

  priv->argc = argc;
}

void hello_application_set_argv(HelloApplication *this, char **argv) {
  HelloApplicationPrivate *priv;

  priv = hello_application_get_instance_private(this);

  priv->argv = argv;
}

int main(int argc, char **argv) {
  HelloApplication *app;

  app = hello_application_new();
  hello_application_set_argc(app, argc);
  hello_application_set_argv(app, argv);

  return g_application_run(G_APPLICATION(app), argc, argv);
}
