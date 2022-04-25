#ifndef SLAMRECONSTRUCTION_MAINWINDOW_H
#define SLAMRECONSTRUCTION_MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <Utils/Def/Def.h>
#include "SettingPanel.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

namespace gf {
    class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit MainWindow(QMainWindow *parent = nullptr);

        ~MainWindow() override;

    private:
        UniqueRef<Ui::MainWindow> mMainUI;
        UniqueRef<SettingPanel>   mSettingPanel;
    };

}

using MainWindow = gf::MainWindow;


#endif //SLAMRECONSTRUCTION_MAINWINDOW_H
