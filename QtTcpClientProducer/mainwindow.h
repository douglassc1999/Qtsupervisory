#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  float aleatorio();
  void timerEvent(QTimerEvent *e);
public slots:
  void putData();
  void start();
  void stop();
  void tcpConnect();
  void tcpDisconnect();
  void setTiming(int _timing);
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QString ip;
  int timer;
  int timing;
};

#endif // MAINWINDOW_H
