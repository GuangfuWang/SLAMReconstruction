/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsPanel
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QWidget *tab_2;
    QWidget *tab_5;
    QWidget *tab_3;
    QWidget *tab_4;

    void setupUi(QWidget *SettingsPanel)
    {
        if (SettingsPanel->objectName().isEmpty())
            SettingsPanel->setObjectName(QString::fromUtf8("SettingsPanel"));
        SettingsPanel->setWindowModality(Qt::ApplicationModal);
        SettingsPanel->resize(790, 450);
        SettingsPanel->setMinimumSize(QSize(790, 450));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        SettingsPanel->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Setting.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsPanel->setWindowIcon(icon);
        SettingsPanel->setToolTipDuration(5);
        horizontalLayout_2 = new QHBoxLayout(SettingsPanel);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget = new QTabWidget(SettingsPanel);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(468, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ok.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/cancel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayout->setStretch(0, 9);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(739, 70));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));

        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));

        verticalLayout->addWidget(groupBox_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/3D MODEL.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/ROBOT_TXT.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, icon4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/custum.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/shortcuts.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon6, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(SettingsPanel);

        tabWidget->setCurrentIndex(1);
        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(SettingsPanel);
    } // setupUi

    void retranslateUi(QWidget *SettingsPanel)
    {
        SettingsPanel->setWindowTitle(QApplication::translate("SettingsPanel", "Settings", nullptr));
#ifndef QT_NO_TOOLTIP
        SettingsPanel->setToolTip(QApplication::translate("SettingsPanel", "Settings for this project", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("SettingsPanel", "Confirm", nullptr));
        pushButton_2->setText(QApplication::translate("SettingsPanel", "Cancel", nullptr));
        groupBox->setTitle(QApplication::translate("SettingsPanel", "GroupBox", nullptr));
        groupBox_2->setTitle(QApplication::translate("SettingsPanel", "GroupBox", nullptr));
        groupBox_3->setTitle(QApplication::translate("SettingsPanel", "GroupBox", nullptr));
        groupBox_4->setTitle(QApplication::translate("SettingsPanel", "GroupBox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsPanel", "Render Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsPanel", "SLAM Sensor Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("SettingsPanel", "Other SLAM Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingsPanel", "Custum Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SettingsPanel", "Shortcut Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsPanel: public Ui_SettingsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
