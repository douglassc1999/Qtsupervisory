#include "plotter.h"

#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <QMouseEvent>
#include <cmath>
#include <QDebug>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
     startTimer(20);
}

void Plotter::timerEvent(QTimerEvent *event)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    // habilita o anti aliasing (atenua o
    // efeito de serrilhado nas figuras geometricas)
    //painter.setRenderHint(QPainter::Antialiasing);

    // brush com a cor amarela com preenchimento
    // solido
    brush.setColor(QColor(255,165,0));
    brush.setStyle(Qt::SolidPattern);
    // informa ao painter qual o pincel atual
    painter.setBrush(brush);

    // pen com cor vermelha e dois pixels de largura
    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);

    // informa ao painter qual o pen atual
    painter.setPen(pen);

    // desenha um retangulo tomando toda a area
    // do componente
    painter.drawRect(0,0,width(), height());

    // muda o estilo do tracejado
    //pen.setStyle(Qt::DashLine);
    //pen.setWidth(1);
    // comunica ao painter a nova caneta
    //painter.setPen(pen);

    // desenha o eixo x
    //painter.drawLine(0,height()/2,width(),height()/2);

    // desenha o seno com cor azul
    /*pen.setColor(QColor(0,0,255));
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);


    int x1, y1, x2, y2;

    x1 = 0;
    y1 = height()/2 -
        height()/2*sin(2*M_PI*x1
                       + 0)*
        1/100.0;

    for(int i=1; i<width(); i++){
      x2 = i;
      y2 = height()/2 -
          height()/2*sin(2*M_PI*x2/width()
                         + 0)*
         1/100.0;
      painter.drawLine(x1,y1,x2,y2);
      x1 = x2;
      y1 = y2;
    }
    */

}


