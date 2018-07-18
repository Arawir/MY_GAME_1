#ifndef GUI_HH
#define GUI_HH
 
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QComboBox>
#include <QDebug>
////////////////////////////////////////////////////////////////////////////////
namespace Ui {
  class MainWindow;
}
 
class Gui : public QMainWindow{
  Q_OBJECT
private:
  QWidget *window;
  QVBoxLayout *main_layout;
  
  QPushButton *connect_button;
  QPushButton *set_name_button;
  QPushButton *select_role_button;
  QPushButton *start_button;
  QPushButton *debug_button;
  QLabel *player_data_label;
  QLabel *info_nick_label;
  QLabel *info_role_label;
  QTextEdit * name_textbox;
  QComboBox *free_roles_combobox;
  
  QString user_data_status="YOU ARE NOT CONNECTED";
  QString user_data_id="";
  QString user_data_name="";
  QString user_data_role="";

  ///////////
  QWidget window_3; // game_window

  QVBoxLayout *main_layout_3;
  QHBoxLayout *up_layout_3;
  QHBoxLayout *down_layout_3;
  QVBoxLayout *gold_layout_3;
  QVBoxLayout *cards_layout_3;
  QVBoxLayout *letters_layout_3;
  
  QLabel *player_data_label_3;
  QLabel *round_data_label_3;
  QPushButton *next_turn_button_3;


  QLabel your_gold_label_3;
  QLabel your_bacc_label_3;
  QLabel your_fr_gold_label_3;
  QPushButton *gold_to_bacc_button; //+100 to bank acc
  QPushButton *gold_fr_bacc_button; //-100 to bank acc if possible
  QPushButton *gold_to_friend_button; // +100 to friend +2%6
  QPushButton *gold_fr_friend_button; // -100

  
public:
  explicit Gui(QWidget *parent = 0);
  void Is_connected();
  void Has_name(QString n);
  void Has_id(QString id);
  void Has_role(QString role);
  void Set_free_jobs(QStringList L);

  QString Name();
  QString Role();

  void Init_3();
signals:
  void Debug_sig();
  void Set_name_sig();
  void Start_sig();
  void Select_role_sig();
  void Connect_sig();
private slots:
  void Debug();
  void Start();
  void Select_role();
  void Set_name();
  void Connect();
};
////////////////////////////////////////////////////////////////////////////////
#endif
