#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include<QtPrintSupport/QPrinter>
#include<QtPrintSupport/QPrintDialog>

#include <QMainWindow>
#include<QPainter>
#include<QMouseEvent>
#include<QActionGroup>
#include<QColorDialog>
#include<QComboBox>
#include<QLineEdit>
#include<QLabel>
#include "shape.h"
#include "line.h"
#include "rectangle.h"
#include "circle.h"
#include "ellipse.h"
#include "freehand.h"
#include "arc.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void setRadioGroup();

    enum shapeType{LINE,RECTANGLE,CIRCLE,ARC,FREEHAND,ELLIPSE};
    shapeType type;
    Qt::PenStyle lineStyle;
    QActionGroup *shapeGroup=new QActionGroup(this);
    QActionGroup *colorGroup=new QActionGroup(this);
    QActionGroup *modeGroup=new QActionGroup(this);
    QActionGroup *penSizeGroup=new QActionGroup(this);
    QActionGroup *styleGroup=new QActionGroup(this);
    QLineEdit *widthEdit;



private slots:
    void on_actionLine_triggered();

    void on_actionCircle_triggered();

    void on_actionRectangle_triggered();

    void on_actionEllipse_triggered();

    void on_actionArc_triggered();

    void on_actionRed_triggered();

    void on_actionGreen_triggered();

    void on_actionBlue_triggered();

    void on_actionSolid_triggered();

    void on_actionDotted_triggered();

    void on_actionBlack_triggered();

    void on_actionDashDot_triggered();

    void on_actionDashDotDot_triggered();

    void on_actionNormal_triggered();

    void on_actionFilled_triggered();

    void on_actionChoose_Color_triggered();

    void on_actionFreehand_triggered();

    void on_actionSave_triggered();

    void on_actionOpen_triggered();

    void on_actionClear_Drawings_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    QVector<Shape*> shapes;
    Shape *shape;
    QPoint point1;
    QPoint point2;
    QColor color;
    QPen pen;
    bool isFilled;
    int penSize;
    bool shiftKeyDown;
    QList<QPoint> freehandPoints;
    QList<QPoint> arcPoints;
    QPointF currentArcPoint;
    QString currentFile;
    QImage image;
    QPainter painter;
    bool drawing=false;
   // QPainter imagePainter;
};
#endif // MAINWINDOW_H
