#include "gold.hh"
 

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Gold::Gold(QWidget *parent) : QWidget(parent){

  main_layout = new QVBoxLayout(this);
  bank_1_layout = new QHBoxLayout();
  bank_2_layout = new QHBoxLayout();
  friend_1_layout = new QHBoxLayout();
  friend_2_layout = new QHBoxLayout();

  gold_label = new QLabel("Your gold: " + QString::number(gold));
  bank_label = new QLabel( "Your bank: " + QString::number(bank));
  friend_label = new QLabel("Give your friend: "  + QString::number(to_friend));


  main_layout->addWidget(gold_label);
  main_layout->addWidget(bank_label);
  main_layout->addLayout(bank_1_layout);
  main_layout->addLayout(bank_2_layout);
  main_layout->addWidget(friend_label);
  main_layout->addLayout(friend_1_layout);
  main_layout->addLayout(friend_2_layout);

  bank_p1000_button = new QPushButton("+1000");
  bank_p100_button = new QPushButton("+100");
  bank_p10_button = new QPushButton("+10");
  bank_p1_button = new QPushButton("+1");
  bank_m1000_button = new QPushButton("-1000");
  bank_m100_button = new QPushButton("-100");
  bank_m10_button = new QPushButton("-10");
  bank_m1_button = new QPushButton("-1");

  bank_1_layout->addWidget(bank_p1000_button);
  bank_1_layout->addWidget(bank_p100_button);
  bank_1_layout->addWidget(bank_p10_button);
  bank_1_layout->addWidget(bank_p1_button);
  
  bank_2_layout->addWidget(bank_m1000_button);
  bank_2_layout->addWidget(bank_m100_button);
  bank_2_layout->addWidget(bank_m10_button);
  bank_2_layout->addWidget(bank_m1_button);
  
  friend_p1000_button = new QPushButton("+1000");
  friend_p100_button = new QPushButton("+100");
  friend_p10_button = new QPushButton("+10");
  friend_p1_button = new QPushButton("+1");
  
  friend_m1000_button = new QPushButton("-1000");
  friend_m100_button = new QPushButton("-100");
  friend_m10_button = new QPushButton("-10");
  friend_m1_button = new QPushButton("-1");

  friend_1_layout->addWidget(friend_p1000_button);
  friend_1_layout->addWidget(friend_p100_button);
  friend_1_layout->addWidget(friend_p10_button);
  friend_1_layout->addWidget(friend_p1_button);
  
  friend_2_layout->addWidget(friend_m1000_button);
  friend_2_layout->addWidget(friend_m100_button);
  friend_2_layout->addWidget(friend_m10_button);
  friend_2_layout->addWidget(friend_m1_button);

  connect(bank_p1000_button, SIGNAL (clicked()), this, SLOT (Set_bank_p1000()));
  connect(bank_p100_button, SIGNAL (clicked()), this, SLOT (Set_bank_p100()));
  connect(bank_p10_button, SIGNAL (clicked()), this, SLOT (Set_bank_p10()));
  connect(bank_p1_button, SIGNAL (clicked()), this, SLOT (Set_bank_p1()));
      
  connect(bank_m1000_button, SIGNAL (clicked()), this, SLOT (Set_bank_m1000()));
  connect(bank_m100_button, SIGNAL (clicked()), this, SLOT (Set_bank_m100()));
  connect(bank_m10_button, SIGNAL (clicked()), this, SLOT (Set_bank_m10()));
  connect(bank_m1_button, SIGNAL (clicked()), this, SLOT (Set_bank_m1()));

  connect(friend_p1000_button, SIGNAL (clicked()), this, SLOT (Set_friend_p1000()));
  connect(friend_p100_button, SIGNAL (clicked()), this, SLOT (Set_friend_p100()));
  connect(friend_p10_button, SIGNAL (clicked()), this, SLOT (Set_friend_p10()));
  connect(friend_p1_button, SIGNAL (clicked()), this, SLOT (Set_friend_p1()));
  
  connect(friend_m1000_button, SIGNAL (clicked()), this, SLOT (Set_friend_m1000()));
  connect(friend_m100_button, SIGNAL (clicked()), this, SLOT (Set_friend_m100()));
  connect(friend_m10_button, SIGNAL (clicked()), this, SLOT (Set_friend_m10()));
  connect(friend_m1_button, SIGNAL (clicked()), this, SLOT (Set_friend_m1()));
  
  setLayout(main_layout);
}

void Gold::Set_bank_inside(qint32 b){
  if(((gold-b)>=0)&&((to_bank+b)>=0)){
    to_bank += b;
    gold -= b;
    gold_label->setText( "Your gold: " + QString::number(gold) );
    bank_label->setText( "Your bank: " + QString::number(bank) + " + "  + QString::number(to_bank) );
  }
  //  else qDebug() << "No enought many";
}

void Gold::Set_friend_inside(qint32 f){
  if(((gold-f)>=0)&&((to_friend+f)>=0)){
    to_friend += f;
    gold -= f;
    gold_label->setText( "Your gold: " + QString::number(gold) );
    friend_label->setText( "Give your friend: "  + QString::number(to_friend) );
  }
  //  else qDebug() << "No enought many";
}

////////////////////////////////////////////////////////////////////////////////
//SLOTS




