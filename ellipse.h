#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse : public Shape
{
public:
    Ellipse();
    Ellipse(QPoint p1, QPoint p2,QPen pen,QColor c,bool isFilled);
    virtual void draw(QMainWindow *win, QPainter *painter);
    virtual void drawToFile(QImage*);


private:
    bool filled;
};

#endif // ELLIPSE_H
