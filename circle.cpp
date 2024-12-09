#include "circle.h"

Circle::Circle()
{

}
Circle::Circle(QPoint p1,QPoint p2,QPen pen,QColor c,bool isFilled):Shape(p1,p2,pen,c)
{
    filled=isFilled;
}

void Circle::draw(QMainWindow *win, QPainter *painter)
{
    painter->begin(win);
    if(filled) painter->setBrush(color);
    painter->setPen(pen);
    int radius = qAbs(point2.x()-point1.x());
    int x = qAbs(point1.x()-radius);
    int y = qAbs(point1.y()-radius);
    painter->drawEllipse(x,y,2*radius,2*radius);
    painter->end();
}

void Circle::drawToFile(QImage *image)
{
    QPainter painter(image);
    if(filled) painter.setBrush(color);
    painter.setPen(pen);
    int radius = qAbs(point2.x()-point1.x());
    int x = qAbs(point1.x()-radius);
    int y = qAbs(point1.y()-radius);
    painter.drawEllipse(x,y,2*radius,2*radius);
    painter.end();
}
