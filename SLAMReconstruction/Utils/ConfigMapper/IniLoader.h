#ifndef SPATIALRECONSTRUCTION_INILOADER_H
#define SPATIALRECONSTRUCTION_INILOADER_H

#include <QString>
#include <QSettings>
#include <QMap>
#include <Utils/Def/Def.h>
#include "DirMapper.h"

namespace gf {

    enum class CONF_FILE {
        RENDER_CONF = 0,
        SLAM_CONF   = 1,
        UI_CONF     = 2
    };

    struct RenderConf final {
        struct Camera {
            QString type;
            float   zoom_speed;
            float   pan_speed;
            float   rotate_speed;
        };
        struct Shader {
            QString default_vert_shader;
            QString default_frag_shader;
            QString pbr_vert_shader;
            QString pbr_frag_shader;
        };
        struct Light {

        };
        struct Params {
            float metal;
            float roughness;
        };

        struct OpenGL {
            bool         mass;
            unsigned int mass_samples;
        };
    };

    struct SLAMConf final {

    };

    struct UIConf final {

    };

    using ConfList = QStringList;
    using ConfFileMap = QMap<QString, CONF_FILE>;
    using RenderKeyMap = QMap<QString, RenderConf>;
    using SLAMKeyMap = QMap<QString, SLAMConf>;
    using UIKeyMap = QMap<QString, UIConf>;

    class IniLoader final {
    public:
        ~IniLoader();

        static UniqueRef<IniLoader> &instance();

    private:
        IniLoader();

        IniLoader(const IniLoader &) = delete;

        void operator=(const IniLoader &) = delete;

    public:
        ///public methods.


    private:
        bool loadAll();

    public:
        static ConfList     IniFileList;
        static ConfFileMap  MainKeyList;
        static RenderKeyMap RenderConf;
        static SLAMKeyMap   SLAMConf;
        static UIKeyMap     UIConf;
    };


}

#endif //SPATIALRECONSTRUCTION_INILOADER_H
