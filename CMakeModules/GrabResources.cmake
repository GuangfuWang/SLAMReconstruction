set(UI_RESOURCE_PREFIX ${PROJECT_SOURCE_DIR}/Resources/UI)
set(UI_RAW_SRC
        ${UI_RESOURCE_PREFIX}/MainWindow.ui
        ${UI_RESOURCE_PREFIX}/Settings.ui
        )

set(ICON_SRC ${PROJECT_SOURCE_DIR}/Resources/Icons/MainWindowIcon.qrc)

set(RESOURCE_SRC ${UI_RAW_SRC} ${ICON_SRC})