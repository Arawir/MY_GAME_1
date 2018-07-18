#include <QApplication>
#include <QPushButton>
#include <QCoreApplication>
#include "Inc/server.hh"
#include "Inc/gui.hh"
#include "Inc/main_app.hh"

int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Window W;
  Server S;
  Main_app A;
  A.Connect_to_server(&S);
  A.Connect_to_gui(&W);
  W.show();
  return app.exec();
}
