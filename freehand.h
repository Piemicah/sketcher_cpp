#ifndef FREEHAND_H
#define FREEHAND_H

#include "shape.h"

class FreeHand : public Shape
{
public:
    FreeHand();
    FreeHand(QList<QPoint> pts,QPen pen,QColor c);
    virtual void draw(QMainWindow *win, QPainter *painter);
    virtual void drawToFile(QImage*);


private:
    QList<QPoint> points;
};

#endif // FREEHAND_H
