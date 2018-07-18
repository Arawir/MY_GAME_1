#include "msg_letter.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Msg_letter::Msg_letter(QObject *parent=nullptr){
  QString button_string = "Round: " + round + "  Sender: " + sender_name;
  main_layout = new QVBoxLayout();
  show_button = new QPushButton(button_string);
  main_layout->addWidgetttttt(show_button);

  
  setLayout(main_layout);
  
}
  void Set_text(QString t);
  void Set_sender_id(QString sid);
  void Set_sender_name(QString sn);
  void Set_rec_id(QString rid);
  void Set_rec_name(QString rn);
////////////////////////////////////////////////////////////////////////////////
//SLOTS
