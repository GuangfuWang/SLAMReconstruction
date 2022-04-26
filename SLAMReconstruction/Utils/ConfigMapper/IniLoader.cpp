//#include "IniLoader.h"
//#include "Utils/Logger/Logger.h"
//
//namespace gf {
//    ConfList     IniLoader::IniFileList = ConfList();
//    ConfFileMap  IniLoader::MainKeyList = ConfFileMap();
//    RenderKeyMap IniLoader::RenderConf  = RenderKeyMap();
//    SLAMKeyMap   IniLoader::SLAMConf    = SLAMKeyMap();
//    UIKeyMap     IniLoader::UIConf      = UIKeyMap();
//
//    UniqueRef<IniLoader> &IniLoader::instance() {
//        static UniqueRef<IniLoader> conf;
//        if (!conf.get()) {
//            conf = createUniqueRef<IniLoader>();
//        }
//        return conf;
//    }
//
//    IniLoader::~IniLoader() {
//
//    }
//
//    IniLoader::IniLoader() {
//        loadAll();
//    }
//
//    bool IniLoader::loadAll() {
//        return false;
//    }
//}
//
