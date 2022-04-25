#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "ui_Settings.h"

namespace gf {
    MainWindow::MainWindow(QMainWindow *parent) :
            QMainWindow(parent),
            mMainUI(new Ui::MainWindow),
            mSettingPanel(new SettingPanel) {
        mMainUI->setupUi(this);
        connect(mMainUI->actionSettings, SIGNAL(triggered()),
                mSettingPanel.get(), SLOT(show()));
    }

    MainWindow::~MainWindow() {
    }

}
