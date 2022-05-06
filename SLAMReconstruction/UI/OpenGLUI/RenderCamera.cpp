#include "RenderCamera.h"

namespace gf {
    RenderCamera::RenderCamera(const float &fov,
                               const float &aspect,
                               const float &nearP,
                               const float &farP) {
        mCamera      = createUniqueRef<Qt3DRender::QCamera>();
        mCamera->setFieldOfView(fov);
        mCamera->setAspectRatio(aspect);
        mCamera->setNearPlane(nearP);
        mCamera->setFarPlane(farP);
        mCamera->setPosition(QVec3f(0.0f, 0.0f, 40.0f));
        mCamera->setProjectionType(Qt3DRender::QCameraLens::PerspectiveProjection);
        mCamera->setUpVector(QVec3f(0.0f, 1.0f, 0.0f));
        mCamera->setViewCenter(QVec3f(0.0f, 0.0f, 0.0f));

    }

    RenderCamera::~RenderCamera() {

    }

    void RenderCamera::zoomScene(const float &zs, const unsigned int &option) {
        if ( zoomDistance(mCamera->position(), mCamera->viewCenter()) < zoomLimit) {
            return;
        }
        mCamera->translate(QVec3f(0, 0, zs),
                           (Qt3DRender::QCamera::CameraTranslationOption) option);
    }

    float RenderCamera::zoomDistance(const QVec3f &posFirst, const QVec3f &posSecond) {
        return (posSecond - posFirst).length();
    }

    void RenderCamera::zoomViewCenter(const int &delta, const unsigned int &modifier) {
        if ((modifier & Qt::ControlModifier) || mFineMotionEnabled) {
            zoomScene(delta * dt * mZoomSpeed * mFineMotionSpeed);
        } else {
            zoomScene(delta * dt * mZoomSpeed);
        }
    }

    void RenderCamera::zoom(const int &delta, const unsigned int &modifier) {
        if ((modifier & Qt::ControlModifier) || mFineMotionEnabled) {
            zoomScene(delta * dt * mZoomSpeed * mFineMotionSpeed, Qt3DRender::QCamera::TranslateViewCenter);
        } else {
            zoomScene(delta * dt * mZoomSpeed, Qt3DRender::QCamera::TranslateViewCenter);
        }
    }

    void RenderCamera::pan(const QPoint &pos, const unsigned int &modifier) {
        if (mFineMotionEnabled || (modifier & Qt::ControlModifier)) {
            float rx = -(pos.x() - mLastCursorPos.x()) * dt * mPanSpeed * mFineMotionSpeed;
            float ry = (pos.y() - mLastCursorPos.y()) * dt * mPanSpeed * mFineMotionSpeed;
            mCamera->translate(QVec3f(rx, ry, 0.0f), Qt3DRender::QCamera::DontTranslateViewCenter);
        } else {
            float rx = -(pos.x() - mLastCursorPos.x()) * dt * mPanSpeed;
            float ry = (pos.y() - mLastCursorPos.y()) * dt * mPanSpeed;
            mCamera->translate(QVec3f(rx, ry, 0.0f), Qt3DRender::QCamera::DontTranslateViewCenter);
        }
    }

    void RenderCamera::panViewCenter(const QPoint &pos, const unsigned int &modifier) {
        if (mFineMotionEnabled || (modifier & Qt::ControlModifier)) {
            float rx = -(pos.x() - mLastCursorPos.x()) * dt * mPanSpeed * mFineMotionSpeed;
            float ry = (pos.y() - mLastCursorPos.y()) * dt * mPanSpeed * mFineMotionSpeed;
            mCamera->translate(QVec3f(rx, ry, 0.0f));
        } else {
            float rx = -(pos.x() - mLastCursorPos.x()) * dt * mPanSpeed;
            float ry = (pos.y() - mLastCursorPos.y()) * dt * mPanSpeed;
            mCamera->translate(QVec3f(rx, ry, 0.0f));
        }
    }

    void RenderCamera::rotate(const QPoint &pos, const unsigned int &modifier) {
        if (mFineMotionEnabled || (modifier & Qt::ControlModifier)) {
            mPan  = -(pos.x() - mLastCursorPos.x()) * dt * mRotateSpeed * mFineMotionSpeed;
            mTilt = (pos.y() - mLastCursorPos.y()) * dt * mRotateSpeed * mFineMotionSpeed;
            mCamera->pan(mPan, mUpVector);
            mCamera->tilt(mTilt);
        } else {
            mPan  = -(pos.x() - mLastCursorPos.x()) * dt * mRotateSpeed;
            mTilt = (pos.y() - mLastCursorPos.y()) * dt * mRotateSpeed;
            mCamera->pan(mPan, mUpVector);
            mCamera->tilt(mTilt);
        }
    }

    void RenderCamera::rotateViewCenter(const QPoint &pos, const unsigned int &modifier) {
        if (mFineMotionEnabled || (modifier & Qt::ControlModifier)) {
            mPan  = -(pos.x() - mLastCursorPos.x()) * dt * mRotateSpeed * mFineMotionSpeed;
            mTilt = (pos.y() - mLastCursorPos.y()) * dt * mRotateSpeed * mFineMotionSpeed;
            mCamera->panAboutViewCenter(mPan, mUpVector);
            mCamera->tiltAboutViewCenter(mTilt);
        } else {
            mPan  = -(pos.x() - mLastCursorPos.x()) * dt * mRotateSpeed;
            mTilt = (pos.y() - mLastCursorPos.y()) * dt * mRotateSpeed;
            mCamera->panAboutViewCenter(mPan, mUpVector);
            mCamera->tiltAboutViewCenter(mTilt);
        }
    }

    void RenderCamera::update(UniqueRef<QOpenGLShaderProgram> &program) {
        program->setUniformValue("mModelMatrix", QMatrix4x4());
        program->setUniformValue("mViewMatrix", mCamera->viewMatrix());
        program->setUniformValue("mProjectionMatrix", mCamera->projectionMatrix());
    }

    void RenderCamera::setMousePos(const QPoint &mousePos) {
        mLastCursorPos = mousePos;
    }
}

