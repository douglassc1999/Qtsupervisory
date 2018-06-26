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
    /**
     * @brief Construtor da classe
     */
    explicit MainWindow(QWidget *parent = 0);
    /**
     *@brief Destrutor da classe
     */
    ~MainWindow();

public slots:
    /**
     * @brief getData resgata os dados enviado ao servidor.
     */
    void getData();
    /**
     * @brief timerEvent chama getData num tempo estabelecido.
     */
    void timerEvent(QTimerEvent *e);
    /**
     * @brief tcpConnect inicializa a comunicação com o servidor.
     */
    void tcpConnect();
    /**
     * @brief tcpDisconnect finaliza a comunicação com servidor.
     */
    void tcpDisconnect();
    /**
     * @brief start inicializa o processo de aquisição de dados.
     */
    void start();
    /**
     * @brief stop finaliza o processo de aquisição de dados.
     */
    void stop();
    /**
     * @brief update atualiza a lista de ips que produziram dados.
     */
    void update();
    /**
     * @brief updateLineEditIP conecta-se ao ip clicado no listwidget.
     */
    void updateLineEditIP();

private slots:

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    int timer;
};

#endif // MAINWINDOW_H
