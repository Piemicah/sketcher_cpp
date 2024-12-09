#ifndef SHAPE_H
#define SHAPE_H

#include<QPainter>
#include<QMainWindow>
#include<QDataStream>

class Shape
{
public:
    Shape();
    Shape(QPoint,QPoint,QPen,QColor);
    virtual void draw(QMainWindow *win,QPainter *painter)=0;
    virtual void drawToFile(QImage*)=0;

protected:
    QPoint point1;
    QPoint point2;
    QPen pen;
    QColor color;

};

#endif // SHAPE_H
