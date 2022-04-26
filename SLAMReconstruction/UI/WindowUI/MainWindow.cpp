#include "MainWindow.h"
#include "SLAMReconstruction/UI/WindowUI/Designer/ui_MainWindow.h"
#include "SLAMReconstruction/UI/WindowUI/Designer/ui_Settings.h"

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
