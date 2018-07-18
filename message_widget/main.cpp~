#include <QApplication>
#include <QCoreApplication>
#include "Inc/socket.hh"
#include "Inc/gui.hh"
#include "Inc/main_app.hh"

int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Gui G;
  Socket S;
  Main_app M;
  M.Connect_to_socket(&S);
  M.Connect_to_gui(&G);
  G.show();
  return app.exec();
}
