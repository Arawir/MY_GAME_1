#include "Inc/gui.hh"
 
#include <QCoreApplication>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Gui::Gui(QWidget *parent) : QMainWindow(parent){
  
  main_layout = new QVBoxLayout(this);
 
  player_data_label = new QLabel(user_data_status);
  info_nick_label = new QLabel("Select your name");
  info_role_label = new QLabel("Select your job");
  connect_button = new QPushButton("Connect to server");
  set_name_button = new QPushButton("Set name");
  select_role_button = new QPushButton("Select role");
  start_button = new QPushButton("Start game");
  debug_button = new QPushButton("Debug");

  name_textbox = new QTextEdit(); 
  free_roles_combobox = new QComboBox();

  
  main_layout->addWidget(player_data_label);
  main_layout->addWidget(connect_button);
  main_layout->addWidget(info_nick_label);
  main_layout->addWidget(name_textbox);
  main_layout->addWidget(set_name_button);
  main_layout->addWidget(info_role_label);
  main_layout->addWidget(free_roles_combobox);
  main_layout->addWidget(select_role_button);
  main_layout->addWidget(start_button);
  main_layout->addWidget(debug_button);


  connect(connect_button, SIGNAL (released()), this, SLOT (Connect()));
  connect(set_name_button, SIGNAL (released()), this, SLOT (Set_name()));
  connect(select_role_button, SIGNAL (released()), this, SLOT(Select_role()));
  connect(debug_button, SIGNAL (released()), this, SLOT (Debug()));
  connect(start_button, SIGNAL (released()), this, SLOT (Start()));
    
  window = new QWidget();
  window->setLayout(main_layout);
  setCentralWidget(window);
}


void Gui::Is_connected(){
  user_data_status="YOU ARE CONNECTED";
  user_data_id="\r\nWait for new id";
  user_data_name="\r\nSelect your name";
  user_data_role="\r\nSelect your role";
  QString tmp = user_data_status + user_data_id + user_data_name + user_data_role;
  player_data_label->setText(tmp);
}

void Gui::Has_name(QString n){
  user_data_name="\r\nYour name: " + n; 
  QString tmp = user_data_status + user_data_id + user_data_name + user_data_role;
  player_data_label->setText(tmp);
}

void Gui::Has_id(QString id){
  user_data_id="\r\nYour id: " + id;  
  QString tmp = user_data_status + user_data_id + user_data_name + user_data_role;
  player_data_label->setText(tmp);
}
void Gui::Has_role(QString role){
  user_data_role="\r\nYour role: " + role;
  QString tmp = user_data_status + user_data_id + user_data_name + user_data_role;
  player_data_label->setText(tmp);
}

void Gui::Set_free_jobs(QStringList L){
  free_roles_combobox->clear();

  foreach(QString S, L){
    free_roles_combobox->addItem(S);
  }
}

QString Gui::Name(){
  return name_textbox->toPlainText();
}

QString Gui::Role(){
  return free_roles_combobox->currentText();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Gui::Debug(){
  qDebug() << "Debug_button";
  emit Debug_sig();
}

void Gui::Start(){
  qDebug() << "Start_button";
  emit Start_sig();
}

void Gui::Select_role(){
  qDebug() << "Role_button";
  emit Select_role_sig();
}

void Gui::Set_name(){
  //  QString new_name = name_textbox->toPlainText();
  //qDebug() << "set name: " << new_name;
  emit Set_name_sig();
}

void Gui::Connect(){
  qDebug() << "connect_button";
  emit Connect_sig();
}

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
void Gui::Init_3(){
  main_layout_3 = new QVBoxLayout();

  up_layout_3 = new QHBoxLayout();
  main_layout_3->addLayout(up_layout_3);
  down_layout_3 = new QHBoxLayout();
  main_layout_3->addLayout(down_layout_3);
  gold_layout_3 = new QVBoxLayout();
  down_layout_3->addLayout(gold_layout_3);
  cards_layout_3 = new QVBoxLayout();
  down_layout_3->addLayout(cards_layout_3);
  letters_layout_3 = new QVBoxLayout();
  down_layout_3->addLayout(letters_layout_3);

  player_data_label_3 = new QLabel("Player data");
  up_layout_3->addWidget(player_data_label_3);
  round_data_label_3 = new QLabel("round");
  up_layout_3->addWidget(round_data_label_3);
  next_turn_button_3 = new QPushButton("Next round");
  up_layout_3->addWidget(next_turn_button_3);
  
  
  window_3 = new QWidget();
  window_3->setLayout(main_layout);
  setCentralWidget(window_3);
}
////////////////////////////////////////////////////////////////////////////////
//SLOTS


