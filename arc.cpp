#include "arc.h"
#include<QtMath>

Arc::Arc()
{

}

Arc::Arc(QList<QPoint> pts,QPen p,QColor c):Shape(QPoint(0,0),QPoint(0,0),p,c)
{
    points=pts;
}

void Arc::draw(QMainWindow *win, QPainter *painter)
{
    if(points.size()==3)
    {
        float x1=points.at(0).x();
        float y1=points.at(0).y();
        float x2=points.at(1).x();
        float y2=points.at(1).y();
        float x3=points.at(2).x();
        float y3=points.at(2).y();

        float c1=(x2*x2+y2*y2-x1*x1-y1*y1)/2;
        float c2=(x3*x3+y3*y3-x1*x1-y1*y1)/2;
        float k1=x2-x1;
        float k2=y2-y1;
        float k3=x3-x1;
        float k4=y3-y1;

        float a = (c1*k4-c2*k2)/(k1*k4-k2*k3);
        float b = (c2*k1-c1*k3)/(k1*k4-k2*k3);

        float radius = qSqrt(qPow(x1-a,2)+powf(y1-b,2));

        float x=qAbs(a-radius);
        float y=qAbs(b-radius);
        //p1=QPointF(x,y);
        int w=2*radius;
        int h=2*radius;
        float ratio1=(points.at(0).x()-a)/radius;
        float ratio2=(points.at(2).x()-a)/radius;

        float start_a = qRadiansToDegrees(qAcos(ratio1));
        float end_a = qRadiansToDegrees(qAcos(ratio2));



        if((points.at(0).y()>b)) start_a=-start_a;

        if(points.at(2).y()>b) end_a=-end_a;
        float span_a=end_a-start_a;

        painter->begin(win);
        //if(filled) painter->setBrush(color);
        painter->setPen(pen);
        painter->drawArc(x,y,w,h,start_a*16,span_a*16);
        painter->end();


    }  

}
void Arc::drawToFile(QImage *image)
{
    if(points.size()==3)
    {
        float x1=points.at(0).x();
        float y1=points.at(0).y();
        float x2=points.at(1).x();
        float y2=points.at(1).y();
        float x3=points.at(2).x();
        float y3=points.at(2).y();

        float c1=(x2*x2+y2*y2-x1*x1-y1*y1)/2;
        float c2=(x3*x3+y3*y3-x1*x1-y1*y1)/2;
        float k1=x2-x1;
        float k2=y2-y1;
        float k3=x3-x1;
        float k4=y3-y1;

        float a = (c1*k4-c2*k2)/(k1*k4-k2*k3);
        float b = (c2*k1-c1*k3)/(k1*k4-k2*k3);

        float radius = qSqrt(qPow(x1-a,2)+powf(y1-b,2));

        float x=qAbs(a-radius);
        float y=qAbs(b-radius);
        //p1=QPointF(x,y);
        int w=2*radius;
        int h=2*radius;
        float ratio1=(points.at(0).x()-a)/radius;
        float ratio2=(points.at(2).x()-a)/radius;

        float start_a = qRadiansToDegrees(qAcos(ratio1));
        float end_a = qRadiansToDegrees(qAcos(ratio2));



        if((points.at(0).y()>b)) start_a=-start_a;

        if(points.at(2).y()>b) end_a=-end_a;
        float span_a=end_a-start_a;

        QPainter painter(image);
        //if(filled) painter->setBrush(color);
        painter.setPen(pen);
        painter.drawArc(x,y,w,h,start_a*16,span_a*16);
        painter.end();


    }
}

