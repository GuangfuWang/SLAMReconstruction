set(UI_PREFIX ${PROJECT_SOURCE_DIR}/SLAMReconstruction/UI)
set(WINDOWING_SRC
        ${UI_PREFIX}/WindowUI/ui_MainWindow.h
        ${UI_PREFIX}/WindowUI/MainWindow.h
        ${UI_PREFIX}/WindowUI/MainWindow.cpp
        ${UI_PREFIX}/WindowUI/WindowUtil.h
        ${UI_PREFIX}/WindowUI/SettingPanel.h
        ${UI_PREFIX}/WindowUI/SettingPanel.cpp
        ${UI_PREFIX}/WindowUI/ui_MainWindow.h
        ${UI_PREFIX}/WindowUI/ui_Settings.h
        )

file(GLOB RENDER_SRC ${UI_PREFIX}/OpenGLUI/*.h ${UI_PREFIX}/OpenGLUI/*.cpp)

set(UI_SRC
        ${WINDOWING_SRC}
        ${RENDER_SRC})