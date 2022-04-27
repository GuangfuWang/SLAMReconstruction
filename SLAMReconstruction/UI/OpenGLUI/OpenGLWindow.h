
#ifndef SLAMRECONSTRUCTION_OPENGLWINDOW_H
#define SLAMRECONSTRUCTION_OPENGLWINDOW_H

#include <Qt3DRender/QCamera>
#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <Utils/Def/Def.h>
#include "RenderShaders.h"
#include "RenderCamera.h"
#include "VertexHolder.h"
#include "VertexMetaInfo.h"

namespace gf {
    class OpenGLWindow : public QOpenGLWidget, public QOpenGLFunctions {
    public:
    Q_OBJECT
    public:
        enum DrawTypeEnum {
            ARRAY   = 0,
            ELEMENT = 1
        };
    public:
        OpenGLWindow(QWidget *parent = nullptr);

        ~OpenGLWindow();

    public:
        void initializeGL() override;

        void resizeGL(int w, int h) override;

        void paintGL() override;

    public:

        void mousePressEvent(QMouseEvent *event) override;

        void mouseMoveEvent(QMouseEvent *event) override;

        void wheelEvent(QWheelEvent *event) override;

        void dragEnterEvent(QDragEnterEvent *event) override;

        void dropEvent(QDropEvent *event) override;

    public:
        void setupMASS(const unsigned int &samples_num = 8);

        void enableMSAA(const bool &msaa) { mMultiSampleAntiAliasingFlag = msaa; }

        void setRenderDataMetaInfo(const unsigned char &info) { mVertMetaInfo.info = info; }

        void setRenderDataUniColor(const QVec3f &c) { mRenderDataUniColor = c; }

        void setupTextureFile(const QString &t_file) { mTextureFile = t_file; }

    private:
        void determineShaders(const bool &hasNormal = false,
                                          const bool &hasColor = true,
                                          const bool &hasTextureCoord = false,
                                          const bool &hasIndices = false);
        void mInitializeGL();

        void mPaintGL();

        void setups();

        void handleData();

        void allocateMemForVBO(unsigned int &bytes_);

        void setupShaders();

        bool setupVertVAO();

        bool setupVertIndexVAO();

        bool setupVertColorVAO();

        bool setupVertColorIndexVAO();

        bool setupVertUVVAO();

        bool setupVertUVIndexVAO();

        bool setupVertUVNormVAO();

        bool setupVertUVNormIndexVAO();

        bool setupVertNormVAO();

        bool setupVertNormIndexVAO();

        bool setupVertColorNormVAO();

        bool setupVertColorNormIndexVAO();

    private:
        UniqueRef<QOpenGLShaderProgram> mShaderProgram;
        UniqueRef<RenderShaders>        mShaders;
        UniqueRef<RenderCamera>         mRenderCamera;
        QOpenGLBuffer                   mVBO;
        QOpenGLVertexArrayObject        mVAO;
        QOpenGLBuffer                   mEBO;
        QVec3f                          mBgColor;
        QVec3f                          mRenderDataUniColor;
        DrawTypeEnum                    mDrawType;
        unsigned int                    mCurrentShaderType;
        VertMeta                        mVertMetaInfo;

        float         *mRenderData  = nullptr;
        unsigned int  *mRenderIndex = nullptr;
        unsigned int  mNumVertex    = 0;
        unsigned int  mNumIndex     = 0;
        unsigned int  mNumFace      = 0; //note we currently only support triangle mesh.
        bool          mMultiSampleAntiAliasingFlag;
        unsigned char mMSAASampleNum;
        QString       mTextureFile  = QString();
    };
}


#endif //SLAMRECONSTRUCTION_OPENGLWINDOW_H
