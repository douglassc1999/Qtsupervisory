#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  tcpConnect();

 /* connect(ui->pushButtonPut,
          SIGNAL(clicked(bool)),
          this,
          SLOT(putData()));
*/
  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));
  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));
  connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(start()));
  connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(stop()));
  connect(ui->horizontalSliderTime,
          SIGNAL(valueChanged(int)),
          ui->textBrowser,
          SLOT(setTiming(int)));

}

void MainWindow::tcpConnect(){
  ip = ui->lineEdit->displayText();
  socket->connectToHost(ip,1234); // 127.0.0.1
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    ui->textBrowser->setText("Connected\n");
  }
  else{
    qDebug() << "Disconnected";
    ui->textBrowser->setText("Disconnected\n");
  }
}
void MainWindow::tcpDisconnect(){
  socket->disconnectFromHost();
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    ui->textBrowser->setText("Connected\n");
  }
  else{
    qDebug() << "Disconnected";
    ui->textBrowser->setText("Disconnected\n");
  }
}

void MainWindow::setTiming(int _timing)
{
    timing = _timing;
}
void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " + QString::number(aleatorio())+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
      ui->textBrowser->append(str.toStdString().c_str());

      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
  }
}

MainWindow::~MainWindow(){
  delete socket;
    delete ui;
}

float MainWindow::aleatorio()
{
    float aux3;

    aux3 = rand()%ui->horizontalSliderMax->value() +ui->horizontalSliderMin->value() ;

    return aux3;
}

void MainWindow::timerEvent(QTimerEvent *e){
    putData();

    qDebug() << "Timer ID:" << e->timerId();

}

void MainWindow::start(){
    timer = startTimer(ui->horizontalSliderTime->value()*10);

}
void MainWindow::stop(){
    killTimer(timer);
}
