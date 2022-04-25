#include "SettingPanel.h"
#include "ui_Settings.h"

namespace gf{

    SettingPanel::SettingPanel(QWidget *parent):
            QWidget(parent),settingsPanel(new Ui::SettingsPanel){
        settingsPanel->setupUi(this);
    }

    SettingPanel::~SettingPanel() {
        delete settingsPanel;
    }
}