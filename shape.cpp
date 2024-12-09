#include "shape.h"

Shape::Shape()
{

}

Shape::Shape(QPoint p1,QPoint p2,QPen pen,QColor c)
{
    point1=p1;
    point2=p2;
    this->pen=pen;
    color=c;
}

void Shape::draw(QMainWindow *win, QPainter *painter){}

