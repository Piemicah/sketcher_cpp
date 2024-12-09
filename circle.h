#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"



class Circle : public Shape
{
public:
    Circle();

    Circle(QPoint p1, QPoint p2,QPen pen,QColor c,bool isFilled);

    virtual void draw(QMainWindow *win, QPainter *painter);
    virtual void drawToFile(QImage*);

private:
    bool filled;

};

#endif // CIRCLE_H
