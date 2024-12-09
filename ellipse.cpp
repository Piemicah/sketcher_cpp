#include "ellipse.h"

Ellipse::Ellipse()
{

}
Ellipse::Ellipse(QPoint p1,QPoint p2,QPen pen,QColor c,bool isFilled):Shape(p1,p2,pen,c)
{
    filled=isFilled;
}

void Ellipse::draw(QMainWindow *win, QPainter *painter)
{
    painter->begin(win);
    if(filled) painter->setBrush(color);
    painter->setPen(pen);
    int width=abs(point2.x()-point1.x());
    int height=abs(point2.y()-point1.y());
    int x= qMin(point2.x(),point1.x());
    int y= qMin(point2.y(),point1.y());
    painter->drawEllipse(x,y,width,height);
    painter->end();
}

void Ellipse::drawToFile(QImage *image)
{
    QPainter painter(image);
    if(filled) painter.setBrush(color);
    painter.setPen(pen);
    int width=abs(point2.x()-point1.x());
    int height=abs(point2.y()-point1.y());
    int x= qMin(point2.x(),point1.x());
    int y= qMin(point2.y(),point1.y());
    painter.drawEllipse(x,y,width,height);
    painter.end();
}
