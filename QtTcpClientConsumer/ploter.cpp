#include "ploter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QDebug>
#include <cmath>
#define e 2.718281828459045235360287


Ploter::Ploter(QWidget *parent) : QWidget(parent){
    x1 =0;
    deltaX = 0;
    firstPrint = true;
}

void Ploter::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    QBrush brush;
    QPen pen;


    brush.setColor(QColor(255,255,165));
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(QColor(255,10,10));
    pen.setWidth(2);
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());


    pen.setColor(QColor(211,211,211));
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1);
    painter.setPen(pen);

    pen.setColor(QColor(0,0,255));
    pen.setWidth(2);
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);


    double x2,y1,y2;
    if (firstPrint){
        x1 =0;
        y1 = height();
    }else{
        qDebug() << "x1: " <<  (timeList[0]/timeList[29])*width();

        x1  = (timeList[0]/timeList[29])*width() ;
        y1 = height() - valueList[0];
    }

    int size = timeList.size();

    qDebug() << size;
    for(int i=1; i< size  ; i++){

        x2=  (timeList[i]/timeList[29])*width()  ;
        y2= height() - valueList[i];

        painter.drawLine(x1,y1,x2,y2);

        x1 = x2;
        y1 = y2;
    }

    timeList.clear();
    valueList.clear();
}

void Ploter::draw( std::vector<qint64> _timeList, std::vector<int>_valueList){
    double normTimeList [30];

    double x = _timeList[0];
    if(x1 + _timeList[0] >= width() ){
        firstPrint = true;
        x1 = 0;
    }

    if (firstPrint)
        deltaX = _timeList[0]; // pega o primeiro tempo , descidir lidar do variação de tempo

    for(int i =0 ; i <30 ; i++){
        double x = _timeList[i];

        timeList.push_back( (x -deltaX )/1000);
        // 1/ (1 + (e/3.5)^x)) adaptação feita para variar melhor entre 0 e 10, deixando o menor valor de  y = 0.5

        valueList.push_back((1 / (1 +  std::pow(e/3.5,_valueList[i])) ) * height() );
    }
    firstPrint = false;
    repaint();

}
