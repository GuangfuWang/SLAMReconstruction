set(SLAM_DIR SLAMReconstruction/Src)

file(GLOB_RECURSE SENSOR_SRC ${SLAM_DIR}/Sensor/*)

file(GLOB FRONTEND_SRC ${SLAM_DIR}/FrontEnd/*)

set(BACKEND_SRC)

set(LOOP_CLOSURE_SRC)

set(SLAM_SRC
        ${SENSOR_SRC}
        ${FRONTEND_SRC}
        ${BACKEND_SRC}
        ${LOOP_CLOSURE_SRC})