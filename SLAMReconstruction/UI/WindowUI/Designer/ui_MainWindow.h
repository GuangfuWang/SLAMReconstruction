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
#include "UI/OpenGLUI/OpenGLWindow.h"

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
    QAction *actionSavePLY;
    QAction *actionSaveFBX;
    QAction *actionSaveSTL;
    QAction *actionSaveOBJ;
    QAction *actionSaveSTEP;
    QAction *actionSave3DS;
    QAction *actionSaveDAE;
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/3DMODEL.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_3D_Model->setIcon(icon2);
        actionOpen_Vocabulary = new QAction(MainWindow);
        actionOpen_Vocabulary->setObjectName(QString::fromUtf8("actionOpen_Vocabulary"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Icons/voc.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Vocabulary->setIcon(icon3);
        actionSave_Model = new QAction(MainWindow);
        actionSave_Model->setObjectName(QString::fromUtf8("actionSave_Model"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Model->setIcon(icon4);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/Setting.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon5);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/exit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon6);
        actionSavePLY = new QAction(MainWindow);
        actionSavePLY->setObjectName(QString::fromUtf8("actionSavePLY"));
        actionSavePLY->setCheckable(false);
        actionSavePLY->setIcon(icon4);
        actionSaveFBX = new QAction(MainWindow);
        actionSaveFBX->setObjectName(QString::fromUtf8("actionSaveFBX"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/FBX.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveFBX->setIcon(icon7);
        actionSaveSTL = new QAction(MainWindow);
        actionSaveSTL->setObjectName(QString::fromUtf8("actionSaveSTL"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/stl.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSTL->setIcon(icon8);
        actionSaveOBJ = new QAction(MainWindow);
        actionSaveOBJ->setObjectName(QString::fromUtf8("actionSaveOBJ"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/obj.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveOBJ->setIcon(icon9);
        actionSaveSTEP = new QAction(MainWindow);
        actionSaveSTEP->setObjectName(QString::fromUtf8("actionSaveSTEP"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/Icons/step.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSTEP->setIcon(icon10);
        actionSave3DS = new QAction(MainWindow);
        actionSave3DS->setObjectName(QString::fromUtf8("actionSave3DS"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/Icons/3ds.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave3DS->setIcon(icon11);
        actionSaveDAE = new QAction(MainWindow);
        actionSaveDAE->setObjectName(QString::fromUtf8("actionSaveDAE"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/Icons/dae.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveDAE->setIcon(icon12);
        actionOpen_Recent = new QAction(MainWindow);
        actionOpen_Recent->setObjectName(QString::fromUtf8("actionOpen_Recent"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Icons/Icons/open-recent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Recent->setIcon(icon13);
        actionPLY_2 = new QAction(MainWindow);
        actionPLY_2->setObjectName(QString::fromUtf8("actionPLY_2"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Icons/ply.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPLY_2->setIcon(icon14);
        actionOBJ_2 = new QAction(MainWindow);
        actionOBJ_2->setObjectName(QString::fromUtf8("actionOBJ_2"));
        actionOBJ_2->setIcon(icon9);
        actionFBX_2 = new QAction(MainWindow);
        actionFBX_2->setObjectName(QString::fromUtf8("actionFBX_2"));
        actionFBX_2->setIcon(icon7);
        actionSTL_2 = new QAction(MainWindow);
        actionSTL_2->setObjectName(QString::fromUtf8("actionSTL_2"));
        actionSTL_2->setIcon(icon8);
        actionSTEP_2 = new QAction(MainWindow);
        actionSTEP_2->setObjectName(QString::fromUtf8("actionSTEP_2"));
        actionSTEP_2->setIcon(icon10);
        actionDAE_2 = new QAction(MainWindow);
        actionDAE_2->setObjectName(QString::fromUtf8("actionDAE_2"));
        actionDAE_2->setIcon(icon12);
        actionCamera = new QAction(MainWindow);
        actionCamera->setObjectName(QString::fromUtf8("actionCamera"));
        actionCamera->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Icons/Icons/RGBD.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCamera->setIcon(icon15);
        actionIMU = new QAction(MainWindow);
        actionIMU->setObjectName(QString::fromUtf8("actionIMU"));
        actionIMU->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Icons/Icons/gyro.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIMU->setIcon(icon16);
        actionStereo_Camera = new QAction(MainWindow);
        actionStereo_Camera->setObjectName(QString::fromUtf8("actionStereo_Camera"));
        actionStereo_Camera->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Icons/Icons/stereo.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStereo_Camera->setIcon(icon17);
        actionMono_Camera = new QAction(MainWindow);
        actionMono_Camera->setObjectName(QString::fromUtf8("actionMono_Camera"));
        actionMono_Camera->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Icons/Icons/camera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMono_Camera->setIcon(icon18);
        actionLasers = new QAction(MainWindow);
        actionLasers->setObjectName(QString::fromUtf8("actionLasers"));
        actionLasers->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Icons/Icons/laser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLasers->setIcon(icon19);
        actionOthers = new QAction(MainWindow);
        actionOthers->setObjectName(QString::fromUtf8("actionOthers"));
        actionOthers->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Icons/Icons/otherhardware.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOthers->setIcon(icon20);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStart->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Icons/start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon21);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionPause->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/Icons/pause.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon22);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionStop->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/Icons/stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon23);
        actionExit_Control = new QAction(MainWindow);
        actionExit_Control->setObjectName(QString::fromUtf8("actionExit_Control"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/Icons/Icons/exit-ctl.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit_Control->setIcon(icon24);
        actionWiki = new QAction(MainWindow);
        actionWiki->setObjectName(QString::fromUtf8("actionWiki"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/Icons/Icons/wiki.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWiki->setIcon(icon25);
        actionShortcuts = new QAction(MainWindow);
        actionShortcuts->setObjectName(QString::fromUtf8("actionShortcuts"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/Icons/Icons/quick.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionShortcuts->setIcon(icon26);
        actionTips_of_day = new QAction(MainWindow);
        actionTips_of_day->setObjectName(QString::fromUtf8("actionTips_of_day"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/Icons/Icons/today-tips.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionTips_of_day->setIcon(icon27);
        actionFeedbacks = new QAction(MainWindow);
        actionFeedbacks->setObjectName(QString::fromUtf8("actionFeedbacks"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/Icons/Icons/ic-feedback.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFeedbacks->setIcon(icon28);
        actionSuggestions = new QAction(MainWindow);
        actionSuggestions->setObjectName(QString::fromUtf8("actionSuggestions"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/Icons/Icons/suggestions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSuggestions->setIcon(icon29);
        actionAbout_me = new QAction(MainWindow);
        actionAbout_me->setObjectName(QString::fromUtf8("actionAbout_me"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/Icons/Icons/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_me->setIcon(icon30);
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
        openGLWidget = new gf::OpenGLWindow(centralwidget);
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
        menubar->setGeometry(QRect(0, 0, 1500, 32));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuSave_As = new QMenu(menu);
        menuSave_As->setObjectName(QString::fromUtf8("menuSave_As"));
        menuOpen_File = new QMenu(menu);
        menuOpen_File->setObjectName(QString::fromUtf8("menuOpen_File"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/Icons/open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuOpen_File->setIcon(icon31);
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
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
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
        menuSave_As->addAction(actionSavePLY);
        menuSave_As->addAction(actionSaveFBX);
        menuSave_As->addAction(actionSaveSTL);
        menuSave_As->addAction(actionSaveOBJ);
        menuSave_As->addAction(actionSaveSTEP);
        menuSave_As->addAction(actionSave3DS);
        menuSave_As->addAction(actionSaveDAE);
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
        toolBar->addAction(actionSavePLY);
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
        actionSavePLY->setText(QApplication::translate("MainWindow", "PLY", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSavePLY->setToolTip(QApplication::translate("MainWindow", "Save to PLY", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveFBX->setText(QApplication::translate("MainWindow", "FBX", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveFBX->setToolTip(QApplication::translate("MainWindow", "Save to FBX", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveSTL->setText(QApplication::translate("MainWindow", "STL", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveSTL->setToolTip(QApplication::translate("MainWindow", "Save to STL", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveOBJ->setText(QApplication::translate("MainWindow", "OBJ", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveOBJ->setToolTip(QApplication::translate("MainWindow", "Save to OBJ", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveSTEP->setText(QApplication::translate("MainWindow", "STEP", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveSTEP->setToolTip(QApplication::translate("MainWindow", "Save to STEP", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave3DS->setText(QApplication::translate("MainWindow", "3DS", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave3DS->setToolTip(QApplication::translate("MainWindow", "Save to 3DS", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveDAE->setText(QApplication::translate("MainWindow", "DAE", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveDAE->setToolTip(QApplication::translate("MainWindow", "Save to DAE", nullptr));
#endif // QT_NO_TOOLTIP
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "SLAM", nullptr));
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
