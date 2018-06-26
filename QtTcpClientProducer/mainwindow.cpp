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
  connect(ui->horizontalSliderTime,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(set_Slide(int)));

}

/**
 * @brief Estabelece a conexão com o servidor quando chamada.
 */
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
/**
 * @brief Desconecta o módulo do servidor assim que chamada.
 */
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

/**
 * @brief Gera uma QString a ser mandada  para a caixa de texto e para o servidor.
 */
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

/**
 * @brief Definição do destrutor da classe.
 */
MainWindow::~MainWindow(){
  delete socket;
    delete ui;
}

/**
 * @brief Gera dados aleatórios de acordo com o valores definidos pelo usuário.
 * @return retorna o número aleatório.
 */
float MainWindow::aleatorio()
{
    float aux3;
    int a, b;
    a = ui->horizontalSliderMin->value();
    b = ui->horizontalSliderMax->value() + 1;
    //aux3 = qrand()%ui->horizontalSliderMax->value() + ui->horizontalSliderMin->value() ;


    if(ui->horizontalSliderMax->value() < ui->horizontalSliderMin->value()){
     aux3 = 0 ;
    }else{
        aux3 = a + qrand()%(b-a);
    }

    return aux3;
}

/**
 * @brief Controla o tempo de envio de dados para o servidor.
 */
void MainWindow::timerEvent(QTimerEvent *e){
    putData();

    qDebug() << "Timer ID:" << e->timerId();

}

/**
 * @brief Inicia o envio de dados inicializando um temporizador interno.
 */
void MainWindow::start(){
    timer = startTimer(ui->horizontalSliderTime->value()*10);

}
/**
 * @brief Para o temporizador interrompendo o envio de dados.
 */
void MainWindow::stop(){
    killTimer(timer);
}
