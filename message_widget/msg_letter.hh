#ifndef MSG_LETTER_HH
#define MSG_LETTER_HH

#include <QCoreApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QComboBox>
#include <QDebug>

////////////////////////////////////////////////////////////////////////////////
class Msg_letter : public QWidget{
  Q_OBJECT
private:
  QString text="";
  QString sender_id="";
  QString sender_name="";
  QString recipient_id="";
  QString recipient_name="";
  QString round="";
  
  QVBoxLayout *main_layout;
  QPushButton *show_button;
  QLabel *letter;

  bool is_hide=0;
public:
  Msg_letter(QObject *parent=nullptr);
  void Set_text(QString t);
  void Set_sender_id(QString sid);
  void Set_sender_name(QString sn);
  void Set_rec_id(QString rid);
  void Set_rec_name(QString rn);
  
signals:
    
public slots:
  void Show_hide_slot();
};
////////////////////////////////////////////////////////////////////////////////
#endif
