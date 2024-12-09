/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include<QtWidgets/qaction.h>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLine;
    QAction *actionCircle;
    QAction *actionRectangle;
    QAction *actionEllipse;
    QAction *actionArc;
    QAction *actionFreehand;
    QAction *actionRed;
    QAction *actionGreen;
    QAction *actionBlue;
    QAction *actionSolid;
    QAction *actionDotted;
    QAction *actionBlack;
    QAction *actionDashDot;
    QAction *actionDashDotDot;
    QAction *actionNormal;
    QAction *actionFilled;
    QAction *actionChoose_Color;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionClear_Drawings;
    QAction *actionExit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuShape;
    QMenu *menuCOlor;
    QMenu *menuLine_Style;
    QMenu *menuMode;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow {background-color: rgb(255, 255, 255);}"));
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionLine->setCheckable(true);
        actionLine->setChecked(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/line.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLine->setIcon(icon1);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        actionCircle->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/circle.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCircle->setIcon(icon2);
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        actionRectangle->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/rectangle.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRectangle->setIcon(icon3);
        actionEllipse = new QAction(MainWindow);
        actionEllipse->setObjectName(QString::fromUtf8("actionEllipse"));
        actionEllipse->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/ellipse.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEllipse->setIcon(icon4);
        actionArc = new QAction(MainWindow);
        actionArc->setObjectName(QString::fromUtf8("actionArc"));
        actionArc->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/arc.png"), QSize(), QIcon::Normal, QIcon::On);
        actionArc->setIcon(icon5);
        actionFreehand = new QAction(MainWindow);
        actionFreehand->setObjectName(QString::fromUtf8("actionFreehand"));
        actionFreehand->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/freehand.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFreehand->setIcon(icon6);
        actionRed = new QAction(MainWindow);
        actionRed->setObjectName(QString::fromUtf8("actionRed"));
        actionRed->setCheckable(true);
        actionGreen = new QAction(MainWindow);
        actionGreen->setObjectName(QString::fromUtf8("actionGreen"));
        actionGreen->setCheckable(true);
        actionBlue = new QAction(MainWindow);
        actionBlue->setObjectName(QString::fromUtf8("actionBlue"));
        actionBlue->setCheckable(true);
        actionSolid = new QAction(MainWindow);
        actionSolid->setObjectName(QString::fromUtf8("actionSolid"));
        actionSolid->setCheckable(true);
        actionSolid->setChecked(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/solid.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSolid->setIcon(icon7);
        actionDotted = new QAction(MainWindow);
        actionDotted->setObjectName(QString::fromUtf8("actionDotted"));
        actionDotted->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/dotted.png"), QSize(), QIcon::Normal, QIcon::On);
        actionDotted->setIcon(icon8);
        actionBlack = new QAction(MainWindow);
        actionBlack->setObjectName(QString::fromUtf8("actionBlack"));
        actionBlack->setCheckable(true);
        actionBlack->setChecked(true);
        actionDashDot = new QAction(MainWindow);
        actionDashDot->setObjectName(QString::fromUtf8("actionDashDot"));
        actionDashDot->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/dashdot.png"), QSize(), QIcon::Normal, QIcon::On);
        actionDashDot->setIcon(icon9);
        actionDashDotDot = new QAction(MainWindow);
        actionDashDotDot->setObjectName(QString::fromUtf8("actionDashDotDot"));
        actionDashDotDot->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/dashdotdotdah.png"), QSize(), QIcon::Normal, QIcon::On);
        actionDashDotDot->setIcon(icon10);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
        actionNormal->setCheckable(true);
        actionNormal->setChecked(true);
        actionFilled = new QAction(MainWindow);
        actionFilled->setObjectName(QString::fromUtf8("actionFilled"));
        actionFilled->setCheckable(true);
        actionChoose_Color = new QAction(MainWindow);
        actionChoose_Color->setObjectName(QString::fromUtf8("actionChoose_Color"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionClear_Drawings = new QAction(MainWindow);
        actionClear_Drawings->setObjectName(QString::fromUtf8("actionClear_Drawings"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuShape = new QMenu(menubar);
        menuShape->setObjectName(QString::fromUtf8("menuShape"));
        menuCOlor = new QMenu(menubar);
        menuCOlor->setObjectName(QString::fromUtf8("menuCOlor"));
        menuLine_Style = new QMenu(menubar);
        menuLine_Style->setObjectName(QString::fromUtf8("menuLine_Style"));
        menuMode = new QMenu(menubar);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuShape->menuAction());
        menubar->addAction(menuCOlor->menuAction());
        menubar->addAction(menuLine_Style->menuAction());
        menubar->addAction(menuMode->menuAction());
        menuShape->addAction(actionLine);
        menuShape->addAction(actionCircle);
        menuShape->addAction(actionRectangle);
        menuShape->addAction(actionEllipse);
        menuShape->addAction(actionArc);
        menuShape->addAction(actionFreehand);
        menuCOlor->addAction(actionBlack);
        menuCOlor->addAction(actionRed);
        menuCOlor->addAction(actionGreen);
        menuCOlor->addAction(actionBlue);
        menuCOlor->addAction(actionChoose_Color);
        menuLine_Style->addAction(actionSolid);
        menuLine_Style->addAction(actionDotted);
        menuLine_Style->addAction(actionDashDot);
        menuLine_Style->addAction(actionDashDotDot);
        menuMode->addAction(actionNormal);
        menuMode->addAction(actionFilled);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClear_Drawings);
        menuFile->addAction(actionExit);
        toolBar->addAction(actionLine);
        toolBar->addAction(actionCircle);
        toolBar->addAction(actionRectangle);
        toolBar->addAction(actionEllipse);
        toolBar->addAction(actionFreehand);
        toolBar->addAction(actionArc);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLine->setText(QApplication::translate("MainWindow", "Line", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLine->setShortcut(QApplication::translate("MainWindow", "L", nullptr));
#endif // QT_NO_SHORTCUT
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCircle->setShortcut(QApplication::translate("MainWindow", "C", nullptr));
#endif // QT_NO_SHORTCUT
        actionRectangle->setText(QApplication::translate("MainWindow", "Rectangle", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRectangle->setShortcut(QApplication::translate("MainWindow", "R", nullptr));
#endif // QT_NO_SHORTCUT
        actionEllipse->setText(QApplication::translate("MainWindow", "Ellipse", nullptr));
        actionArc->setText(QApplication::translate("MainWindow", "Arc", nullptr));
        actionFreehand->setText(QApplication::translate("MainWindow", "Freehand", nullptr));
        actionRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        actionGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        actionBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        actionSolid->setText(QApplication::translate("MainWindow", "Solid", nullptr));
        actionDotted->setText(QApplication::translate("MainWindow", "Dotted", nullptr));
        actionBlack->setText(QApplication::translate("MainWindow", "Black", nullptr));
        actionDashDot->setText(QApplication::translate("MainWindow", "DashDot", nullptr));
        actionDashDotDot->setText(QApplication::translate("MainWindow", "DashDotDot", nullptr));
        actionNormal->setText(QApplication::translate("MainWindow", "Normal", nullptr));
        actionFilled->setText(QApplication::translate("MainWindow", "Filled", nullptr));
        actionChoose_Color->setText(QApplication::translate("MainWindow", "Choose Color", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionClear_Drawings->setText(QApplication::translate("MainWindow", "Clear Drawings", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        menuShape->setTitle(QApplication::translate("MainWindow", "Shape", nullptr));
        menuCOlor->setTitle(QApplication::translate("MainWindow", "Color", nullptr));
        menuLine_Style->setTitle(QApplication::translate("MainWindow", "Line Style", nullptr));
        menuMode->setTitle(QApplication::translate("MainWindow", "Mode", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
