/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Dataset;
    QAction *actionOpen_3D_Model;
    QAction *actionOpen_Vocabulary;
    QAction *actionSave_Model;
    QAction *actionSettings;
    QAction *actionExit;
    QAction *actionPLY;
    QAction *actionFBX;
    QAction *actionSTL;
    QAction *actionOBJ;
    QAction *actionSTEP;
    QAction *action3DS;
    QAction *actionDAE;
    QAction *actionOpen_Recent;
    QAction *actionPLY_2;
    QAction *actionOBJ_2;
    QAction *actionFBX_2;
    QAction *actionSTL_2;
    QAction *actionSTEP_2;
    QAction *actionDAE_2;
    QAction *actionCamera;
    QAction *actionIMU;
    QAction *actionStereo_Camera;
    QAction *actionMono_Camera;
    QAction *actionLasers;
    QAction *actionOthers;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionExit_Control;
    QAction *actionWiki;
    QAction *actionShortcuts;
    QAction *actionTips_of_day;
    QAction *actionFeedbacks;
    QAction *actionSuggestions;
    QAction *actionAbout_me;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QOpenGLWidget *openGLWidget;
    QHBoxLayout *horizontalLayout;
    QVideoWidget *widget1;
    QVideoWidget *widget_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuSave_As;
    QMenu *menuOpen_File;
    QMenu *menuSensors;
    QMenu *menuControls;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 1080);
        MainWindow->setMinimumSize(QSize(1500, 1080));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MainWindow/MainWindowIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolTipDuration(5);
        MainWindow->setDockNestingEnabled(false);
        actionOpen_Dataset = new QAction(MainWindow);
        actionOpen_Dataset->setObjectName(QString::fromUtf8("actionOpen_Dataset"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/dataset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Dataset->setIcon(icon1);
        actionOpen_3D_Model = new QAction(MainWindow);
        actionOpen_3D_Model->setObjectName(QString::fromUtf8("actionOpen_3D_Model"));
        actionOpen_Vocabulary = new QAction(MainWindow);
        actionOpen_Vocabulary->setObjectName(QString::fromUtf8("actionOpen_Vocabulary"));
        actionSave_Model = new QAction(MainWindow);
        actionSave_Model->setObjectName(QString::fromUtf8("actionSave_Model"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Setting.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/exit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionPLY = new QAction(MainWindow);
        actionPLY->setObjectName(QString::fromUtf8("actionPLY"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPLY->setIcon(icon4);
        actionFBX = new QAction(MainWindow);
        actionFBX->setObjectName(QString::fromUtf8("actionFBX"));
        actionSTL = new QAction(MainWindow);
        actionSTL->setObjectName(QString::fromUtf8("actionSTL"));
        actionOBJ = new QAction(MainWindow);
        actionOBJ->setObjectName(QString::fromUtf8("actionOBJ"));
        actionSTEP = new QAction(MainWindow);
        actionSTEP->setObjectName(QString::fromUtf8("actionSTEP"));
        action3DS = new QAction(MainWindow);
        action3DS->setObjectName(QString::fromUtf8("action3DS"));
        actionDAE = new QAction(MainWindow);
        actionDAE->setObjectName(QString::fromUtf8("actionDAE"));
        actionOpen_Recent = new QAction(MainWindow);
        actionOpen_Recent->setObjectName(QString::fromUtf8("actionOpen_Recent"));
        actionPLY_2 = new QAction(MainWindow);
        actionPLY_2->setObjectName(QString::fromUtf8("actionPLY_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/ply.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPLY_2->setIcon(icon5);
        actionOBJ_2 = new QAction(MainWindow);
        actionOBJ_2->setObjectName(QString::fromUtf8("actionOBJ_2"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/obj.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOBJ_2->setIcon(icon6);
        actionFBX_2 = new QAction(MainWindow);
        actionFBX_2->setObjectName(QString::fromUtf8("actionFBX_2"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/FBX.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFBX_2->setIcon(icon7);
        actionSTL_2 = new QAction(MainWindow);
        actionSTL_2->setObjectName(QString::fromUtf8("actionSTL_2"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/stl.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSTL_2->setIcon(icon8);
        actionSTEP_2 = new QAction(MainWindow);
        actionSTEP_2->setObjectName(QString::fromUtf8("actionSTEP_2"));
        actionDAE_2 = new QAction(MainWindow);
        actionDAE_2->setObjectName(QString::fromUtf8("actionDAE_2"));
        actionCamera = new QAction(MainWindow);
        actionCamera->setObjectName(QString::fromUtf8("actionCamera"));
        actionIMU = new QAction(MainWindow);
        actionIMU->setObjectName(QString::fromUtf8("actionIMU"));
        actionStereo_Camera = new QAction(MainWindow);
        actionStereo_Camera->setObjectName(QString::fromUtf8("actionStereo_Camera"));
        actionMono_Camera = new QAction(MainWindow);
        actionMono_Camera->setObjectName(QString::fromUtf8("actionMono_Camera"));
        actionLasers = new QAction(MainWindow);
        actionLasers->setObjectName(QString::fromUtf8("actionLasers"));
        actionOthers = new QAction(MainWindow);
        actionOthers->setObjectName(QString::fromUtf8("actionOthers"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon9);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/pause.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon10);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon11);
        actionExit_Control = new QAction(MainWindow);
        actionExit_Control->setObjectName(QString::fromUtf8("actionExit_Control"));
        actionWiki = new QAction(MainWindow);
        actionWiki->setObjectName(QString::fromUtf8("actionWiki"));
        actionShortcuts = new QAction(MainWindow);
        actionShortcuts->setObjectName(QString::fromUtf8("actionShortcuts"));
        actionTips_of_day = new QAction(MainWindow);
        actionTips_of_day->setObjectName(QString::fromUtf8("actionTips_of_day"));
        actionFeedbacks = new QAction(MainWindow);
        actionFeedbacks->setObjectName(QString::fromUtf8("actionFeedbacks"));
        actionSuggestions = new QAction(MainWindow);
        actionSuggestions->setObjectName(QString::fromUtf8("actionSuggestions"));
        actionAbout_me = new QAction(MainWindow);
        actionAbout_me->setObjectName(QString::fromUtf8("actionAbout_me"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 2, 2, 2);
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setMinimumSize(QSize(1080, 706));

        verticalLayout_2->addWidget(openGLWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        widget1 = new QVideoWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(355, 240));
        widget1->setAutoFillBackground(false);

        horizontalLayout->addWidget(widget1);

        widget_2 = new QVideoWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(356, 240));

        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(355, 240));

        horizontalLayout->addWidget(widget_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, 0, -1);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setMinimumSize(QSize(0, 0));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_2->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget_2);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(graphicsView);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 2);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1500, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuSave_As = new QMenu(menu);
        menuSave_As->setObjectName(QString::fromUtf8("menuSave_As"));
        menuOpen_File = new QMenu(menu);
        menuOpen_File->setObjectName(QString::fromUtf8("menuOpen_File"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuOpen_File->setIcon(icon12);
        menuSensors = new QMenu(menubar);
        menuSensors->setObjectName(QString::fromUtf8("menuSensors"));
        menuControls = new QMenu(menubar);
        menuControls->setObjectName(QString::fromUtf8("menuControls"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuSensors->menuAction());
        menubar->addAction(menuControls->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu->addAction(actionOpen_Dataset);
        menu->addSeparator();
        menu->addAction(actionOpen_3D_Model);
        menu->addAction(menuOpen_File->menuAction());
        menu->addAction(actionOpen_Recent);
        menu->addSeparator();
        menu->addAction(actionOpen_Vocabulary);
        menu->addSeparator();
        menu->addAction(actionSave_Model);
        menu->addAction(menuSave_As->menuAction());
        menu->addSeparator();
        menu->addAction(actionSettings);
        menu->addSeparator();
        menu->addAction(actionExit);
        menuSave_As->addAction(actionPLY);
        menuSave_As->addAction(actionFBX);
        menuSave_As->addAction(actionSTL);
        menuSave_As->addAction(actionOBJ);
        menuSave_As->addAction(actionSTEP);
        menuSave_As->addAction(action3DS);
        menuSave_As->addAction(actionDAE);
        menuOpen_File->addAction(actionPLY_2);
        menuOpen_File->addAction(actionOBJ_2);
        menuOpen_File->addAction(actionFBX_2);
        menuOpen_File->addAction(actionSTL_2);
        menuOpen_File->addAction(actionSTEP_2);
        menuOpen_File->addAction(actionDAE_2);
        menuSensors->addAction(actionCamera);
        menuSensors->addAction(actionStereo_Camera);
        menuSensors->addAction(actionMono_Camera);
        menuSensors->addSeparator();
        menuSensors->addAction(actionIMU);
        menuSensors->addAction(actionLasers);
        menuSensors->addSeparator();
        menuSensors->addAction(actionOthers);
        menuControls->addAction(actionStart);
        menuControls->addAction(actionPause);
        menuControls->addAction(actionStop);
        menuControls->addSeparator();
        menuControls->addAction(actionExit_Control);
        menuHelp->addAction(actionWiki);
        menuHelp->addAction(actionShortcuts);
        menuHelp->addSeparator();
        menuHelp->addAction(actionTips_of_day);
        menuHelp->addSeparator();
        menuHelp->addAction(actionFeedbacks);
        menuHelp->addAction(actionSuggestions);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_me);
        toolBar->addAction(actionPLY_2);
        toolBar->addSeparator();
        toolBar->addAction(actionPLY);
        toolBar->addSeparator();
        toolBar->addAction(actionStart);
        toolBar->addAction(actionPause);
        toolBar->addAction(actionStop);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SLAM Reconstruction", nullptr));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "SLAM Reconstruction Project", nullptr));
#endif // QT_NO_TOOLTIP
        actionOpen_Dataset->setText(QApplication::translate("MainWindow", "Open Dataset", nullptr));
        actionOpen_3D_Model->setText(QApplication::translate("MainWindow", "Open 3D Model", nullptr));
        actionOpen_Vocabulary->setText(QApplication::translate("MainWindow", "Open Vocabulary", nullptr));
        actionSave_Model->setText(QApplication::translate("MainWindow", "Save Model", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionPLY->setText(QApplication::translate("MainWindow", "PLY", nullptr));
        actionFBX->setText(QApplication::translate("MainWindow", "FBX", nullptr));
        actionSTL->setText(QApplication::translate("MainWindow", "STL", nullptr));
        actionOBJ->setText(QApplication::translate("MainWindow", "OBJ", nullptr));
        actionSTEP->setText(QApplication::translate("MainWindow", "STEP", nullptr));
        action3DS->setText(QApplication::translate("MainWindow", "3DS", nullptr));
        actionDAE->setText(QApplication::translate("MainWindow", "DAE", nullptr));
        actionOpen_Recent->setText(QApplication::translate("MainWindow", "Open Recent", nullptr));
        actionPLY_2->setText(QApplication::translate("MainWindow", "PLY", nullptr));
        actionOBJ_2->setText(QApplication::translate("MainWindow", "OBJ", nullptr));
        actionFBX_2->setText(QApplication::translate("MainWindow", "FBX", nullptr));
        actionSTL_2->setText(QApplication::translate("MainWindow", "STL", nullptr));
        actionSTEP_2->setText(QApplication::translate("MainWindow", "STEP", nullptr));
        actionDAE_2->setText(QApplication::translate("MainWindow", "DAE", nullptr));
        actionCamera->setText(QApplication::translate("MainWindow", "RGBD Camera", nullptr));
        actionIMU->setText(QApplication::translate("MainWindow", "IMU", nullptr));
        actionStereo_Camera->setText(QApplication::translate("MainWindow", "Stereo Camera", nullptr));
        actionMono_Camera->setText(QApplication::translate("MainWindow", "Mono Camera", nullptr));
        actionLasers->setText(QApplication::translate("MainWindow", "Lidars", nullptr));
        actionOthers->setText(QApplication::translate("MainWindow", "Others", nullptr));
        actionStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", nullptr));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        actionExit_Control->setText(QApplication::translate("MainWindow", "Exit Control", nullptr));
        actionWiki->setText(QApplication::translate("MainWindow", "Project Wiki", nullptr));
        actionShortcuts->setText(QApplication::translate("MainWindow", "Shortcuts", nullptr));
        actionTips_of_day->setText(QApplication::translate("MainWindow", "Tips of day", nullptr));
        actionFeedbacks->setText(QApplication::translate("MainWindow", "Feedbacks", nullptr));
        actionSuggestions->setText(QApplication::translate("MainWindow", "Suggestions", nullptr));
        actionAbout_me->setText(QApplication::translate("MainWindow", "About me", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Tab 2", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "Files", nullptr));
        menuSave_As->setTitle(QApplication::translate("MainWindow", "Save As", nullptr));
        menuOpen_File->setTitle(QApplication::translate("MainWindow", "Open File", nullptr));
        menuSensors->setTitle(QApplication::translate("MainWindow", "Sensors", nullptr));
        menuControls->setTitle(QApplication::translate("MainWindow", "Controls", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
