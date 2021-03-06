#include "Inc/client.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Client::Client(QObject *parent) : QObject(parent){
  id="-1";
  socket=NULL;
}

void Client::Send_message(QString data){
  qDebug() << "S Send: " << data;
  socket->write(data.toStdString().c_str());
  socket->flush();
  socket->waitForBytesWritten(3000);
}

void Client::Connect_to_socket(QTcpSocket *s){
  socket = s;
  //  socket->write("Welcome new player by client! \r\n");
  // socket->flush();
  //socket->waitForBytesWritten(3000);
  connect(socket, SIGNAL(readyRead()), this, SLOT(Receive_message()));
}

QString Client::Pull_message(){
  if(messages.isEmpty()) return "";
  QString tmp = messages.first();
  messages.removeFirst();
  return tmp;
}

////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Client::Receive_message(){
  QString buffer;
  buffer = socket->read(1000);      //max tysiac
  messages.append(buffer);
  qDebug() << "S Receive: " << buffer;
  emit New_message();  
}


