#ifndef SLAMRECONSTRUCTION_SETTINGPANEL_H
#define SLAMRECONSTRUCTION_SETTINGPANEL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SettingsPanel; }
QT_END_NAMESPACE

namespace gf {


    class SettingPanel : public QWidget {
    Q_OBJECT

    public:
        explicit SettingPanel(QWidget *parent = nullptr);

        ~SettingPanel() override;

    private:
        Ui::SettingsPanel *settingsPanel;
    };
}

using SettingPanel = gf::SettingPanel;

#endif //SLAMRECONSTRUCTION_SETTINGPANEL_H
