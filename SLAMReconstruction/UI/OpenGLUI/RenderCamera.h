#ifndef SLAMRECONSTRUCTION_RENDERCAMERA_H
#define SLAMRECONSTRUCTION_RENDERCAMERA_H

#include <Qt3DRender/QCamera>
#include <QVector2D>
#include <Utils/Util>
#include <QOpenGLShaderProgram>
#include <QMatrix4x4>

namespace gf {
    using CameraProjectionType = Qt3DRender::QCameraLens::ProjectionType;

    class RenderCamera {

    public:
        RenderCamera(const float &fov, const float &aspect, const float &nearP, const float &farP);

        virtual ~RenderCamera();

    public:

        void setProjectionType(const CameraProjectionType &type) {
            mCameraType = type;
            mCamera->setProjectionType(mCameraType);
        }

        const CameraProjectionType getProjectionType() const { return mCameraType; }

        void setZoomSpeed(const float &zoomSpeed) { mZoomSpeed = zoomSpeed; }

        const float getZoomSpeed() const { return mZoomSpeed; }

        void setPanSpeed(const float &panSpeed) { mPanSpeed = panSpeed; }

        const float getPanSpeed() const { return mPanSpeed; }

        void setRotateSpeed(const float &rSpeed) { mRotateSpeed = rSpeed; }

        const float getRotateSpeed() const { return mRotateSpeed; }

        void setFineMotionSpeed(const float &fSpeed) { mFineMotionSpeed = fSpeed; }

        const float getFineMotionSpeed() const { return mFineMotionSpeed; }

        void toggleFineMotion() { mFineMotionEnabled = !mFineMotionEnabled; }

        const bool getFineMotionEnabled() const { return mFineMotionEnabled; }

        void setFov(const float &fov) { mCamera->setFieldOfView(fov); }

        const float getFov() { return mCamera->fieldOfView(); }

        void setAspectRatio(const float &aspect) { mCamera->setAspectRatio(aspect); }

        const float getAspectRatio() { return mCamera->aspectRatio(); }

        void setNearPlane(const float &nearP) { mCamera->setNearPlane(nearP); }

        const float getNearPlane() { return mCamera->nearPlane(); }

        void setFarPlane(const float &farP) { mCamera->setFarPlane(farP); }

        const float getFarPlane() { return mCamera->farPlane(); }

    public:
        /// this part is mainly for camera controllers.
        void zoomViewCenter(const int &delta, const unsigned int &modifier = Qt::NoModifier);

        void zoom(const int &delta, const unsigned int &modifier = Qt::NoModifier);

        void pan(const QPoint &pos, const unsigned int &modifier = Qt::NoModifier);

        void panViewCenter(const QPoint &pos, const unsigned int &modifier = Qt::NoModifier);

        void rotate(const QPoint &pos, const unsigned int &modifier = Qt::NoModifier);

        void rotateViewCenter(const QPoint &pos, const unsigned int &modifier = Qt::NoModifier);

        void setMousePos(const QPoint &mousePos);

        void update(UniqueRef<QOpenGLShaderProgram> &program);

    private:
        void zoomScene(const float &zs, const unsigned int &option = Qt3DRender::QCamera::DontTranslateViewCenter);

        float zoomDistance(const QVec3f &posFirst, const QVec3f &posSecond);

    private:

        float mZoomSpeed       = 50.0f;
        float mPanSpeed        = 20.0f;
        float mRotateSpeed     = 800.0f;
        float mFineMotionSpeed = 0.1f;
        float dt               = 0.0001f;
        float zoomLimit        = 0.16f;
        float mPan             = 0.0f;
        float mTilt            = 0.0f;

        QVec3f                         mUpVector   = QVec3f(0, 1, 0);
        QPoint                         mLastCursorPos;
        UniqueRef<Qt3DRender::QCamera> mCamera;
        CameraProjectionType           mCameraType = Qt3DRender::QCameraLens::PerspectiveProjection;

        bool mFineMotionEnabled = false;

    };
}


#endif //SLAMRECONSTRUCTION_RENDERCAMERA_H
