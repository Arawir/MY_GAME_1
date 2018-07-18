#ifndef GOLD_HH
#define GOLD_HH

#include <QCoreApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QComboBox>
#include <QDebug>
////////////////////////////////////////////////////////////////////////////////

class Msg : public QWidget{
  Q_OBJECT
public:
  explicit Msg(QWidget *parent = 0);
  
signals:

public slots:

private:

};
////////////////////////////////////////////////////////////////////////////////
#endif
