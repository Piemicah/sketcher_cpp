#include "freehand.h"

FreeHand::FreeHand()
{

}
FreeHand::FreeHand(QList<QPoint> pts,QPen pen,QColor c):Shape(QPoint(0,0),QPoint(0,0),pen,c)
{
    points=pts;
}
void FreeHand::draw(QMainWindow *win, QPainter *painter)
{
    painter->begin(win);
    painter->setPen(pen);
    for(int i = 0;i<points.size()-1;i++)
              {
                QPoint p1 = points.at(i);
                QPoint p2 = points.at(i+1);
                painter->drawLine(p1,p2);

              }
    painter->end();
}

void FreeHand::drawToFile(QImage *image)
{
    QPainter painter(image);
    painter.setPen(pen);
    for(int i = 0;i<points.size()-1;i++)
              {
                QPoint p1 = points.at(i);
                QPoint p2 = points.at(i+1);
                painter.drawLine(p1,p2);

              }
    painter.end();
}
