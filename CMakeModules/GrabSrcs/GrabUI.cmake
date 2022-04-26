set(UI_PREFIX ${PROJECT_SOURCE_DIR}/SLAMReconstruction/UI)
set(WINDOWING_SRC
        ${UI_PREFIX}/WindowUI/MainWindow.h
        ${UI_PREFIX}/WindowUI/MainWindow.cpp
        ${UI_PREFIX}/WindowUI/WindowUtil.h
        ${UI_PREFIX}/WindowUI/SettingPanel.h
        ${UI_PREFIX}/WindowUI/SettingPanel.cpp
        ${UI_PREFIX}/WindowUI/Designer/ui_MainWindow.h
        ${UI_PREFIX}/WindowUI/Designer/ui_Settings.h
        ${UI_PREFIX}/WindowUI/Designer/MainWindow.ui
        ${UI_PREFIX}/WindowUI/Designer/Settings.ui
        )

file(GLOB RENDER_SRC ${UI_PREFIX}/OpenGLUI/*.*)

set(UI_SRC
        ${WINDOWING_SRC}
        ${RENDER_SRC})