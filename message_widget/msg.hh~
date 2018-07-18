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

class Gold : public QWidget{
  Q_OBJECT

  
public:
  explicit Gold(QWidget *parent = 0);
  void Set_gold(qint32 g);
  void Set_bank(qint32 b);
  qint32 Gold_to_bacc(){ return to_bank; }
  qint32 Gold_to_friend(){ return to_friend; }
private:
  void Set_bank_inside(qint32 b);
  void Set_friend_inside(qint32 f);
  
signals:

public slots:
  void Set_friend_p1000(){ Set_friend_inside(1000); }
  void Set_friend_p100(){ Set_friend_inside(100); }
  void Set_friend_p10(){ Set_friend_inside(10); }
  void Set_friend_p1(){ Set_friend_inside(1); }

  void Set_friend_m1000(){ Set_friend_inside(-1000); }
  void Set_friend_m100(){ Set_friend_inside(-100); }
  void Set_friend_m10(){ Set_friend_inside(-10); }
  void Set_friend_m1(){ Set_friend_inside(-1); }
  
  void Set_bank_p1000(){ Set_bank_inside(1000); }
  void Set_bank_p100(){ Set_bank_inside(100); }
  void Set_bank_p10(){ Set_bank_inside(10); }
  void Set_bank_p1(){ Set_bank_inside(1); }

  void Set_bank_m1000(){ Set_bank_inside(-1000); }
  void Set_bank_m100(){ Set_bank_inside(-100); }
  void Set_bank_m10(){ Set_bank_inside(-10); }
  void Set_bank_m1(){ Set_bank_inside(-1); }

private:
  qint32 gold=10000;
  qint32 bank=10000;
  qint32 to_bank=0;
  qint32 to_friend=0;
  
  QVBoxLayout *main_layout;
  QHBoxLayout *bank_1_layout;
  QHBoxLayout *bank_2_layout;
  QHBoxLayout *friend_1_layout;
  QHBoxLayout *friend_2_layout;

  QLabel *gold_label;
  QLabel *bank_label;
  QLabel *friend_label;

  QPushButton *bank_p1000_button;
  QPushButton *bank_p100_button;
  QPushButton *bank_p10_button;
  QPushButton *bank_p1_button;

  QPushButton *bank_m1000_button;
  QPushButton *bank_m100_button;
  QPushButton *bank_m10_button;
  QPushButton *bank_m1_button;

  QPushButton *friend_p1000_button;
  QPushButton *friend_p100_button;
  QPushButton *friend_p10_button;
  QPushButton *friend_p1_button;

  QPushButton *friend_m1000_button;
  QPushButton *friend_m100_button;
  QPushButton *friend_m10_button;
  QPushButton *friend_m1_button; 
};
////////////////////////////////////////////////////////////////////////////////
#endif
