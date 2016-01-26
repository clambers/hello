#include "hello.h"
#include <QApplication>
#include <QQuickView>
#include <QUrl>

int present_application(int argc, char** argv) {
  QApplication app(argc, argv);

  QQuickView view;
  view.setSource(QUrl("qrc:/hello.qml"));
  view.show();

  return app.exec();
}
