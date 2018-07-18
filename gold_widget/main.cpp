#include <QApplication>
#include <QCoreApplication>
#include "gold.hh"


int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Gold G;
  G.show();
  return app.exec();
}
