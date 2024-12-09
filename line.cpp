#include "line.h"

Line::Line()
{

}

Line::Line(QPoint p1,QPoint p2,QPen p,QColor c):Shape(p1,p2,p,c)
{

}

void Line::draw(QMainWindow *win, QPainter *painter)
{
    painter->begin(win);
    painter->setPen(pen);
    painter->drawLine(point1,point2);
    painter->end();
}

void Line::drawToFile(QImage *image)
{
    QPainter imagePainter(image);
    imagePainter.setPen(pen);
    imagePainter.drawLine(point1,point2);
    imagePainter.end();
}

