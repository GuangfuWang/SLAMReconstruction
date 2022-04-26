#include "SettingPanel.h"
#include "SLAMReconstruction/UI/WindowUI/Designer/ui_Settings.h"

namespace gf{

    SettingPanel::SettingPanel(QWidget *parent):
            QWidget(parent),settingsPanel(new Ui::SettingsPanel){
        settingsPanel->setupUi(this);
    }

    SettingPanel::~SettingPanel() {
        delete settingsPanel;
    }
}