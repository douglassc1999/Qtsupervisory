#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

/**
 * @brief A classe MainWindow é responsável pela construção da interface gráfica.
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
    /**
   * @brief MainWindow é o construtor da classe MainWindow.
   */
  explicit MainWindow(QWidget *parent = 0);

   /**
   * @brief ~MainWindow é o destrutor da classe MainWindow.
   */
  ~MainWindow();
    /**
   * @brief aleatorio serve para gerar números aleatórios.
   * @return
   */
  float aleatorio();
  /**
   * @brief timerEvent chama o produtor de dados aleatórios de acordo
   * com um temporizador.
   */
  void timerEvent(QTimerEvent *e);
public slots:
  /**
   * @brief putData é uma função que manda para o servidor dados aleatórios de acordo com a função
   * *aleatorio()*.
   */
  void putData();
  /**
   * @brief start inicia um temporizador que chama o produtor de dados e envia-os para
   * o servidor.
   */
  void start();
  /**
   * @brief stop é usado para chamar a função que encerra o temporizador.
   */
  void stop();
  /**
   * @brief tcpConnect ao ser chamada, inicia a conexão, através do ip, com o módulo servidor.
   */
  void tcpConnect();
  /**
   * @brief tcpDisconnect ao ser chamada, desconecta o produtor do módulo servidor.
   */
  void tcpDisconnect();

private:
  /**
   * @brief ui é um ponteiro para navegar nos layouts da *MainWindow*.
   */
  Ui::MainWindow *ui;
  /**
   * @brief socket é um ponteiro para lidar com métodos da classe *QTcpSocket*.
   */
  QTcpSocket *socket;
  /**
   * @brief ip QString usada para guardar ip's de máquinas digitadas pelo usuário.
   */
  QString ip;
  /**
   * @brief timer guarda o id de retorno da função startTimer, da classe QTimer.
   */
  int timer;
};

#endif // MAINWINDOW_H
