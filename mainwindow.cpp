#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtWidgets/qaction.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    image=QImage(this->size(),QImage::Format_RGB32);
    image.fill(Qt::white);
    type=LINE;
    color=Qt::black;
    lineStyle=Qt::SolidLine;
    penSize=1;
    isFilled=false;
    setRadioGroup();
    widthEdit=new QLineEdit;
    widthEdit->setFixedSize(60,20);
    widthEdit->setInputMask("90");
    widthEdit->setText("1");
    ui->toolBar->addSeparator();
    ui->toolBar->addWidget(new QLabel(" Pen Width "));
    ui->toolBar->addWidget(widthEdit);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setRadioGroup()
{
    shapeGroup->setExclusive(true);
    shapeGroup->addAction(ui->actionLine);
    shapeGroup->addAction(ui->actionCircle);
    shapeGroup->addAction(ui->actionRectangle);
    shapeGroup->addAction(ui->actionArc);
    shapeGroup->addAction(ui->actionEllipse);
    shapeGroup->addAction(ui->actionFreehand);

    colorGroup->setExclusive(true);
    colorGroup->addAction(ui->actionBlack);
    colorGroup->addAction(ui->actionRed);
    colorGroup->addAction(ui->actionBlue);
    colorGroup->addAction(ui->actionGreen);

    modeGroup->setExclusive(true);
    modeGroup->addAction(ui->actionNormal);
    modeGroup->addAction(ui->actionFilled);

    styleGroup->setExclusive(true);
    styleGroup->addAction(ui->actionSolid);
    styleGroup->addAction(ui->actionDashDot);
    styleGroup->addAction(ui->actionDashDotDot);
    styleGroup->addAction(ui->actionDotted);
}

void MainWindow::paintEvent(QPaintEvent *event)
{

    painter.begin(this);
    painter.drawImage(QPoint(0,0),image);
    painter.end();

    if(drawing)
    {


    pen.setColor(color);
    pen.setStyle(lineStyle);
    pen.setWidth(penSize);

    switch (type) {
        case LINE:
    {
        shape = new Line(point1,point2,pen,color);
        shape->draw(this,&painter);
        break;
    }
    case RECTANGLE:
    {
        shape=new Rectangle(point1,point2,pen,color,isFilled);
        shape->draw(this,&painter);
        break;
    }

    case CIRCLE:
    {

        shape = new Circle(point1,point2,pen,color,isFilled);
        shape->draw(this,&painter);
        break;
    }

    case ELLIPSE:
    {
        if(shiftKeyDown){shape = new Circle(point1,point2,pen,color,isFilled);}
        else
        shape = new Ellipse(point1,point2,pen,color,isFilled);
        shape->draw(this,&painter);
        break;
    }
    case FREEHAND:
    {
        shape=new FreeHand(freehandPoints,pen,color);
        shape->draw(this,&painter);
        break;
    }
    case ARC:
    {
        shape=new Arc(arcPoints,pen,color);
        shape->draw(this,&painter);

        QPen pen1;
        pen1.setColor(color);
        pen1.setWidth(8);
        painter.begin(this);
        painter.setPen(pen1);
        painter.drawPoint(currentArcPoint);
        painter.end();

        for(QPointF p : arcPoints )
            {
                pen1.setWidth(8);
                painter.begin(this);
                painter.setPen(pen1);
                painter.drawPoint(p);
                painter.end();
            }
        break;
    }

    }
}
    for(Shape *shape : shapes )
    {
        shape->draw(this,&painter);
    }


}

void MainWindow::mousePressEvent(QMouseEvent *event)
{

    penSize=widthEdit->text().toInt();
    freehandPoints.clear();

    if(arcPoints.size()>=3) arcPoints.clear();
    if(event->buttons()==Qt::LeftButton)
    {
        drawing=true;
        point1=event->pos();
        if(type==FREEHAND) freehandPoints.append(point1);
        if(type==ARC)
        {
            arcPoints.append(point1);
            currentArcPoint=event->pos();
            this->update();
        }
    }

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()==Qt::LeftButton && drawing==true)
    {
        //drawing=true;
        if(event->modifiers()==Qt::ShiftModifier) shiftKeyDown=true;
        else shiftKeyDown=false;
        point2=event->pos();
        if(type==FREEHAND) freehandPoints.append(point2);
        this->update();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{

     drawing=false;
    switch (type) {

    case LINE:
{
    shapes.append(new Line(point1,point2,pen,color));
    shape->drawToFile(&image);
    break;
}
case RECTANGLE:
{
    shapes.append(new Rectangle(point1,point2,pen,color,isFilled));
    shape->drawToFile(&image);
    break;
}
case CIRCLE:
{
        shapes.append(new Circle(point1,point2,pen,color,isFilled));
        shape->drawToFile(&image);
        break;
}
case ELLIPSE:
    {
        if(shiftKeyDown){
            shape = new Circle(point1,point2,pen,color,isFilled);
        }
        else{
            shape = new Ellipse(point1,point2,pen,color,isFilled);
        }
     shapes.append(shape);
     shape->drawToFile(&image);
     break;
    }

case FREEHAND:
    {
      shapes.append(new FreeHand(freehandPoints,pen,color));
      shape->drawToFile(&image);
      break;
    }

case ARC:
    {
        shapes.append(new Arc(arcPoints,pen,color));
        shape->drawToFile(&image);
        break;
    }

    }

}

void MainWindow::on_actionLine_triggered()
{
    type=LINE;
}


void MainWindow::on_actionCircle_triggered()
{
    type=CIRCLE;
}


void MainWindow::on_actionRectangle_triggered()
{
    type=RECTANGLE;
}


void MainWindow::on_actionEllipse_triggered()
{
    type=ELLIPSE;
}


void MainWindow::on_actionArc_triggered()
{
    type=ARC;
}


void MainWindow::on_actionRed_triggered()
{
    color=Qt::red;
}


void MainWindow::on_actionGreen_triggered()
{
    color=Qt::green;
}


void MainWindow::on_actionBlue_triggered()
{
    color=Qt::blue;
}


void MainWindow::on_actionSolid_triggered()
{
    lineStyle=Qt::SolidLine;
}


void MainWindow::on_actionDotted_triggered()
{
    lineStyle=Qt::DotLine;
}


void MainWindow::on_actionBlack_triggered()
{
    color=Qt::black;
}


void MainWindow::on_actionDashDot_triggered()
{
    lineStyle=Qt::DashDotLine;
}


void MainWindow::on_actionDashDotDot_triggered()
{
    lineStyle=Qt::DashDotDotLine;
}


void MainWindow::on_actionNormal_triggered()
{
    isFilled=false;
}


void MainWindow::on_actionFilled_triggered()
{
    isFilled=true;
}

void MainWindow::on_actionChoose_Color_triggered()
{

    QColor col=QColorDialog::getColor(color,this);
    color=col.isValid()? col:color;
}


void MainWindow::on_actionFreehand_triggered()
{
    type=FREEHAND;
}


void MainWindow::on_actionSave_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save Image", "", "PNG (*.png);;JPEG (*.jpg *.jpeg);;All files (*.*)");
        if (filePath == "")
        return;
        image.save(filePath);
}


void MainWindow::on_actionOpen_triggered()
{

    //drawing=true;
        QString filename=QFileDialog::getOpenFileName(this,"open the file");
             currentFile=filename;
            if(currentFile=="")   return;


        shapes.clear();
        setWindowTitle(filename);

           image.load(currentFile);
           this->update();

}


void MainWindow::on_actionClear_Drawings_triggered()
{
    shapes.clear();
    image.fill(Qt::white);
    this->update();
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}

