#ifndef MAIN_APP_HH
#define MAIN_APP_HH

#include "socket.hh"
#include "gui.hh"

////////////////////////////////////////////////////////////////////////////////
class Main_app : public QObject{
  Q_OBJECT
private:
  Socket *S=NULL;
  Gui *G=NULL;
  QString status="UNCONNECTED"; // DISONNECTED / CONNECTED
  
  QString id="-1";
  QString name="";
  QString role="";
  QString phase="-1"; // START / READY_TO_START / MOVE / READY / 
  bool debug_tribe=1;

  qint32 gold=0;
  qint32 bank_acc=0;
public:
  explicit Main_app(QObject *parent = NULL);
  void Connect_to_socket(Socket *soc); 
  void Connect_to_gui(Gui *gui); 
  void Connect_to_server();

  void Ask_new_name(QString n);  // F ->
  void Ask_free_roles();
  void Ask_new_role(QString r);
  void Ask_new_phase(QString ph);
   
  void Execute_message(QString msg);                       //F <-
  void Set_id(QString i){ id = i; }
  void Set_role(QString r){ role = r; }
  void Set_name(QString n){ name = n; }
  void Set_phase(QString ph){ phase = ph; }
  void Set_status(QString stat){ status = stat; }
  void Set_gold(QString g){ gold = g.toInt(); }
  void Set_bank_acc(QString g){ bank_acc = g.toInt(); }
  void Set_cards(QStringList L);
  void Set_letters(QStringList L);

  void Resend_connection();
  
  void Start_next_phase(QString new_phase);

  void Send_all_data();

  void Debug();
  void Set_debug_tribe(bool t){ debug_tribe = t; }
public slots:
  void Receive_message();
  void Gui_debug();
  void Gui_connect();
  void Gui_start();
  void Gui_set_name();
  void Gui_set_role();
};
////////////////////////////////////////////////////////////////////////////////
#endif
