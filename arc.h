#ifndef ARC_H
#define ARC_H

#include "shape.h"

class Arc : public Shape
{
public:
    Arc();
    Arc(QList<QPoint> pts,QPen p,QColor c);
    virtual void draw(QMainWindow *win,QPainter *painter);
    virtual void drawToFile(QImage*);

private:
    QList<QPoint> points;
};

#endif // ARC_H
