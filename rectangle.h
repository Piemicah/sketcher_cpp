#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle();
    Rectangle(QPoint p1, QPoint p2,QPen pen,QColor c,bool isFilled);
    virtual void draw(QMainWindow *win, QPainter *painter);
    virtual void drawToFile(QImage*);

private:
    bool filled;

};

#endif // RECTANGLE_H
