#include "Inc/main_app.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Main_app::Main_app(QObject *parent){ //player

}

void Main_app::Connect_to_server(){
  if( S->Connect_to_server() ) Set_status("CONNECTED");
}

void Main_app::Connect_to_socket(Socket *soc){
  S = soc;
  connect(S, SIGNAL(New_message()), this, SLOT(Receive_message()));
  connect(S, SIGNAL(Connected()), this, SLOT(Receive_message()));
}

void Main_app::Connect_to_gui(Gui *gui){
  G = gui;
  connect(G, SIGNAL(Debug_sig()), this, SLOT(Gui_debug()));
  connect(G, SIGNAL(Set_name_sig()), this, SLOT(Gui_set_name()));
  connect(G, SIGNAL(Connect_sig()), this, SLOT(Gui_connect()));
  connect(G, SIGNAL(Select_role_sig()), this, SLOT(Gui_set_role()));
  connect(G, SIGNAL(Start_sig()), this, SLOT(Gui_start()));
}

void Main_app::Execute_message(QString msg){
  QString sender_id = "";
  QString command = "";
  
  msg.remove("\r");
  msg.remove("/r");
  msg.remove("\n");
  msg.remove("/n");
  qDebug() << "M receive: " << msg;
      
  QStringList parameters = msg.split("_|_");
  if(parameters.isEmpty()!=1){
    sender_id = parameters[0];
    parameters.removeFirst();
  }
  if(parameters.isEmpty()!=1){
    command = parameters[0];
    parameters.removeFirst();
  }

  /*  qDebug() << "   Sender: " << sender_id
  	   << "\r\n   Command: " << command
 	   << "\r\n   Parameters: ";*/
  
  // foreach(QString s, parameters) qDebug() << "      " << s;
  // qDebug() << "\r\n";


  /////////////////////////////////////////////////////////////////
  if(command=="NEW_ID"){
    Set_id(parameters[0]);
    G->Is_connected();
    G->Has_id(parameters[0]);
    Resend_connection();
    Ask_new_phase("START");
  } 
  if(command=="SET_ID"){ Set_id(parameters[0]); }
  if(command=="SET_NAME"){ Set_name(parameters[0]); G->Has_name(parameters[0]);}
  if(command=="SET_ROLE"){ Set_role(parameters[0]); G->Has_role(parameters[0]);}
  if(command=="FREE_ROLES"){ G->Set_free_jobs(parameters); }
  
  if(command=="SET_PHASE"){ Start_next_phase(parameters[0]); } //long
  if(command=="YOURS_GOLD"){ Set_gold(parameters[0]); }
  if(command=="YOURS_BANK_ACC"){ Set_bank_acc(parameters[0]); }
  // if(command=="YOURS_CARDS"){ Set_cards(parameters); }  // long
  //if(command=="YOURS_LETTERS"){ Set_letters(parameters); } //long
}


void Main_app::Ask_new_name(QString n){
  QString msg = id + "_|_" + "SET_NAME" + "_|_" + n + "\r\n";
  if(S!=NULL) S->Send_message(msg);
}

void Main_app::Ask_free_roles(){
  QString msg = id + "_|_" + "FREE_ROLES" + "\r\n";
  if(S!=NULL) S->Send_message(msg);
}

void Main_app::Ask_new_role(QString r){
  QString msg = id + "_|_" + "SET_ROLE" + "_|_" + r + "\r\n";
  if(S!=NULL) S->Send_message(msg);
}

void Main_app::Ask_new_phase(QString ph){
  QString msg = id + "_|_" + "SET_PHASE" + "_|_" + ph + "\r\n";
  if(S!=NULL) S->Send_message(msg);
}


void Main_app::Resend_connection(){
  QString msg = id + "_|_" + "CONNECTED";
  S->Send_message(msg);
}

void Main_app::Start_next_phase(QString new_phase){
  if((phase=="-1")&&(new_phase=="START")) Set_phase("START");
  if((phase=="START")&&(new_phase=="READY_TO_START")) Set_phase("READY_TO_START");
  G->Init_3();
}

void Main_app::Debug(){
  qDebug() << "Debug button clicked";
  qDebug() << "   Phase  : " << phase; 
  qDebug() << "   Name   :  " << name;
  qDebug() << "   Role   :  " << role;
}
////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Main_app::Receive_message(){
  QString msg;
  while(!S->Messages_empty()){
    msg = S->Pull_message();
    Execute_message(msg);
  }
}

void Main_app::Gui_debug(){
  Debug();
}

void Main_app::Gui_start(){
  if((id!="-1")&&(name!="")&&(role!="")){
    Ask_new_phase("READY_TO_START");
  }
}

void Main_app::Gui_connect(){
  Connect_to_server();
}

void Main_app::Gui_set_name(){
  QString n = G->Name();
  Ask_new_name(n);
}

void Main_app::Gui_set_role(){
  QString r = G->Role();
  Ask_new_role(r);
}

