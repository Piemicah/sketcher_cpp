#ifndef LINE_H
#define LINE_H
#include "shape.h"


class Line : public Shape
{
public:
    Line();
    Line(QPoint p1,QPoint p2,QPen pen,QColor c);
    virtual void draw(QMainWindow *win, QPainter *painter);

    virtual void drawToFile(QImage*);

};

#endif // LINE_H
