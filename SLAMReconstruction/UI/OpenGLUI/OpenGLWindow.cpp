#include <QMouseEvent>
#include <Utils/Logger/Logger.h>
#include "OpenGLWindow.h"

namespace gf {

    OpenGLWindow::OpenGLWindow(QWidget *parent) :
            QOpenGLWidget(parent), mMultiSampleAntiAliasingFlag(true) {
        {
            this->setObjectName(QString::fromUtf8("openGLWidget"));
            this->setMinimumSize(QSize(1080, 706));
            QPalette palette;
            QBrush   brush(QColor(0, 0, 0, 255));
            brush.setStyle(Qt::SolidPattern);
            palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
            QBrush brush1(QColor(238, 238, 236, 255));
            brush1.setStyle(Qt::SolidPattern);
            palette.setBrush(QPalette::Active, QPalette::Button, brush1);
            QBrush brush2(QColor(255, 255, 255, 255));
            brush2.setStyle(Qt::SolidPattern);
            palette.setBrush(QPalette::Active, QPalette::Light, brush2);
            QBrush brush3(QColor(246, 246, 245, 255));
            brush3.setStyle(Qt::SolidPattern);
            palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
            QBrush brush4(QColor(119, 119, 118, 255));
            brush4.setStyle(Qt::SolidPattern);
            palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
            QBrush brush5(QColor(159, 159, 157, 255));
            brush5.setStyle(Qt::SolidPattern);
            palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
            palette.setBrush(QPalette::Active, QPalette::Text, brush);
            palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
            palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
            palette.setBrush(QPalette::Active, QPalette::Base, brush2);
            palette.setBrush(QPalette::Active, QPalette::Window, brush1);
            palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
            palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
            QBrush brush6(QColor(255, 255, 220, 255));
            brush6.setStyle(Qt::SolidPattern);
            palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
            palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
            QBrush brush7(QColor(0, 0, 0, 128));
            brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
            palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
            palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
            palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
            palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
            palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
            palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
            palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
            palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
            palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
            palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
            palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
            palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
            palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
            palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
            palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
            palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
            palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
            palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
            palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
            palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
            palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
            palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
            palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
            palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
            palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
            palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
            palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
            palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
            palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
            palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
            palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
            palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
            palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
            this->setPalette(palette);
        }
        setups();
    }

    void OpenGLWindow::initializeGL() {
        mInitializeGL();
    }

    void OpenGLWindow::resizeGL(int w, int h) {
        QOpenGLWidget::resizeGL(w, h);
        mRenderCamera->setAspectRatio((float) (w / h));
        mRenderCamera->update(mShaderProgram);
    }

    void OpenGLWindow::paintGL() {
        mPaintGL();
    }

    OpenGLWindow::~OpenGLWindow() {
        makeCurrent();
        mVAO.destroy();
        mVBO.destroy();
        if (mDrawType == DrawTypeEnum::ELEMENT)mEBO.destroy();
        doneCurrent();
        if (mRenderData)delete[] mRenderData;
    }

    //------Events handling-----------------------------------------------------------------//
    void OpenGLWindow::mousePressEvent(QMouseEvent *event) {
        setMouseTracking(true);
        if (event->buttons() == Qt::LeftButton) {
            mRenderCamera->setMousePos(event->pos());
        }
        if (event->buttons() == Qt::RightButton) {
            mRenderCamera->setMousePos(event->pos());
        }
        update();
        setMouseTracking(false);
    }

    void OpenGLWindow::wheelEvent(QWheelEvent *event) {
        const int degree = event->delta();
        mRenderCamera->zoomViewCenter(degree);
        update();
    }

    void OpenGLWindow::mouseMoveEvent(QMouseEvent *event) {
        if (event->buttons() & Qt::LeftButton) {
            mRenderCamera->rotateViewCenter(event->pos());
        }
        if (event->buttons() & Qt::RightButton) {
            mRenderCamera->panViewCenter(event->pos());
        }
        update();
        mRenderCamera->setMousePos(event->pos());
    }

    void OpenGLWindow::dragEnterEvent(QDragEnterEvent *event) {
        mBgColor = QVec3f(0.745f, 0.745f, 0.745f);
        QOpenGLFunctions::glClearColor(mBgColor.x(), mBgColor.y(), mBgColor.z(), 1.0f);
        update();
        QWidget::dragEnterEvent(event);
    }

    void OpenGLWindow::dropEvent(QDropEvent *event) {
        QWidget::dropEvent(event);
    }

    //-----------setups------------------------------------------------------------//
    void OpenGLWindow::setupMASS(const unsigned int &samples_num) {
        mMSAASampleNum = samples_num;
        if (mMultiSampleAntiAliasingFlag) {
            QSurfaceFormat format;
            format.setSamples(mMSAASampleNum); //this creates a 4x MSAA surface format
            this->setFormat(format);
        }
    }

    void OpenGLWindow::determineShaders(const bool &hasNormal,
                                        const bool &hasColor,
                                        const bool &hasTextureCoord,
                                        const bool &hasIndices) {
        if (hasIndices)mDrawType = ELEMENT;
        else mDrawType = ARRAY;
        if (hasColor) {
            if (hasNormal) { mCurrentShaderType = RenderShaders::ShaderEnum::CColorWNorm; }
            else mCurrentShaderType = RenderShaders::ShaderEnum::CColorONorm;
        } else {
            if (hasTextureCoord) {
                if (hasNormal)
                    mCurrentShaderType = RenderShaders::ShaderEnum::UVWNorm;
                else mCurrentShaderType = RenderShaders::ShaderEnum::UVONorm;
            } else {
                if (hasNormal) mCurrentShaderType = RenderShaders::ShaderEnum::UniColorWNorm;
                else mCurrentShaderType = RenderShaders::ShaderEnum::UniColorONorm;
            }
        }
    }

    void OpenGLWindow::setups() {
        setupMASS();
        mShaders = createUniqueRef<RenderShaders>();
        determineShaders();
        mVertMetaInfo.info = 0x02;
        mShaderProgram = createUniqueRef<QOpenGLShaderProgram>();
        mRenderCamera  = createUniqueRef<RenderCamera>(60.0f,
                                                       (float) this->width() / ((float) this->height()),
                                                       0.1f,
                                                       1000.0f);

        mBgColor            = QVec3f(0.941f, 0.973f, 1.0f);
        mRenderDataUniColor = QVec3f(0.11765f, 0.5647f, 1.0f);

        Vector<float> temp{
                0.8f, 0.2f, 0.6f, 0.5f, 0.2f, 0.1f,
                0.5f, 0.2f, 0.6f, 0.1f, 0.5f, 0.1f,
                0.3f, 0.6f, 0.1f, 0.6f, 0.3f, 0.1f
        };
        mRenderData = new float[18];
        memcpy(mRenderData, temp.data(), sizeof(float) * 18);
        mNumVertex = 3;
        //enable drag-drop functionality.
        this->setAcceptDrops(true);
    }

    //------------------data handling and rendering here--------------------------//
    void OpenGLWindow::mInitializeGL() {
        initializeOpenGLFunctions();
        if (mMultiSampleAntiAliasingFlag) {
            ///the effect is determined by platform and hardware.
            QOpenGLFunctions::glEnable(GL_MULTISAMPLE);
        }
        setupShaders();
        mShaders->compileShaders(mCurrentShaderType);
        mShaderProgram->addShader(mShaders->mShaders[mCurrentShaderType]);
        mShaderProgram->addShader(mShaders->mShaders[mCurrentShaderType + 1]);
        mShaderProgram->link();
        mShaderProgram->bind();
        mVBO = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
        mEBO = QOpenGLBuffer(QOpenGLBuffer::IndexBuffer);
        mVBO.create();
        if (!mVBO.isCreated()) {
            GF_ERROR("Cannot create vertex buffer object!");
            return;
        }
        mVBO.bind();
        mVAO.create();
        if (!mVAO.isCreated()) {
            GF_ERROR("Cannot create array buffer object!");
            return;
        }
        mVAO.bind();
        handleData();
        mRenderCamera->update(mShaderProgram);
        mVAO.release();
        mVBO.release();
        if (mDrawType == DrawTypeEnum::ELEMENT)mEBO.release();
        mShaderProgram->release();
        QOpenGLFunctions::glClearColor(mBgColor.x(), mBgColor.y(), mBgColor.z(), 0.0f);
        QOpenGLFunctions::glEnable(GL_DEPTH_TEST);
    }

    void OpenGLWindow::mPaintGL() {
        QOpenGLFunctions::glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        QOpenGLWidget::paintGL();
        mShaderProgram->bind();
        mVAO.bind();
        mRenderCamera->update(mShaderProgram);

        if (mDrawType == DrawTypeEnum::ARRAY) {
            QOpenGLFunctions::glDrawArrays(GL_TRIANGLES, 0, mNumVertex);
//            GF_INFO("array %f",mRenderData[0]);
        } else if (mDrawType == DrawTypeEnum::ELEMENT)
            QOpenGLFunctions::glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT,
                                             nullptr);
        mVAO.release();
        mShaderProgram->release();
        /// draw data here.
    }

    void OpenGLWindow::handleData() {
        unsigned int RenderDataSizeByte = 0;
        if ((mVertMetaInfo.info & 0x0F) == Meta_Vert) {
            mDrawType          = DrawTypeEnum::ARRAY;
            RenderDataSizeByte = sizeof(float) * 3;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Color) {
            mDrawType          = DrawTypeEnum::ARRAY;
            RenderDataSizeByte = sizeof(float) * 6;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertColorVAO()) {
                GF_WARN("Cannot setup vao...");
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Color_Index) {
            mDrawType          = DrawTypeEnum::ELEMENT;
            RenderDataSizeByte = sizeof(float) * 6;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertColorIndexVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Color_Norm_Index) {
            mDrawType          = DrawTypeEnum::ELEMENT;
            RenderDataSizeByte = sizeof(float) * 9;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertColorNormIndexVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Index) {
            mDrawType          = DrawTypeEnum::ELEMENT;
            RenderDataSizeByte = sizeof(float) * 3;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertIndexVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Norm) {
            mDrawType          = DrawTypeEnum::ARRAY;
            RenderDataSizeByte = sizeof(float) * 6;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertNormVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Norm_Index) {
            mDrawType          = DrawTypeEnum::ELEMENT;
            RenderDataSizeByte = sizeof(float) * 6;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertNormIndexVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Norm_UV) {
            mDrawType          = DrawTypeEnum::ARRAY;
            RenderDataSizeByte = sizeof(float) * 8;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertUVNormVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Norm_UV_Index) {
            mDrawType          = DrawTypeEnum::ELEMENT;
            RenderDataSizeByte = sizeof(float) * 8;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertUVNormIndexVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_Color_Norm) {
            mDrawType          = DrawTypeEnum::ARRAY;
            RenderDataSizeByte = sizeof(float) * 9;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertColorNormVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_UV) {
            mDrawType          = DrawTypeEnum::ARRAY;
            RenderDataSizeByte = sizeof(float) * 5;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertUVVAO()) {
                return;
            }
        } else if ((mVertMetaInfo.info & 0x0F) == Meta_Vert_UV_Index) {
            mDrawType          = DrawTypeEnum::ELEMENT;
            RenderDataSizeByte = sizeof(float) * 5;
            allocateMemForVBO(RenderDataSizeByte);
            mVBO.setUsagePattern(QOpenGLBuffer::StaticDraw);
            if (!setupVertUVIndexVAO()) {
                return;
            }
        } else {
            GF_WARN("Your data might be corrupt with format: {\n hasIndices: %B\n hasColor: %B\n hasTextures: %B\n hasNorm: %B\n}",
                    mVertMetaInfo.info & 0x01, mVertMetaInfo.info & 0x02,
                    mVertMetaInfo.info & 0x04, mVertMetaInfo.info & 0x08);
            GF_WARN("No data will rendered...");
            return;
        }

        if (mDrawType == DrawTypeEnum::ELEMENT) {
            mEBO.create();
            if (!mEBO.isCreated()) {
                GF_ERROR("Cannot create index buffer object!");
            }
            mEBO.bind();
            if (mRenderIndex)mEBO.allocate(mRenderIndex, mNumIndex * sizeof(unsigned int));
        }
    }

    void OpenGLWindow::allocateMemForVBO(unsigned int &bytes_) {
        if (mRenderData) {
            mVBO.allocate(mRenderData, mNumVertex * bytes_);
            GF_INFO("Allocating memory for render data...");
        }
    }

    bool OpenGLWindow::setupVertVAO() {
        GLint inVertPos = mShaderProgram->attributeLocation("inVertPos");
        if (inVertPos == -1) {
            GF_WARN("Cannot locate property 'inVertPos' in shaders");
            GF_WARN("No data will be rendered");
            return false;
        }
        mShaderProgram->setAttributeBuffer(inVertPos, GL_FLOAT, 0, 3, sizeof(float) * 3);
        mShaderProgram->enableAttributeArray(inVertPos);
        mShaderProgram->setUniformValue("inUniColor", mRenderDataUniColor);
        return true;
    }

    bool OpenGLWindow::setupVertIndexVAO() {
        return setupVertVAO();
    }

    bool OpenGLWindow::setupVertColorVAO() {
        GLint inVertPos = mShaderProgram->attributeLocation("inVertPos");
        if (inVertPos == -1) {
            GF_WARN("Cannot locate property 'inVertPos' in shaders");
            GF_WARN("No data will be rendered");
            return false;
        }
        GLint aColor = mShaderProgram->attributeLocation("inVertColor");
        mShaderProgram->setAttributeBuffer(inVertPos, GL_FLOAT, 0, 3,
                                           sizeof(float) * 6);
        mShaderProgram->setAttributeBuffer(aColor, GL_FLOAT, sizeof(float) * 3, 3,
                                           sizeof(float) * 6);
        mShaderProgram->enableAttributeArray(inVertPos);
        mShaderProgram->enableAttributeArray(aColor);

        return true;
    }

    bool OpenGLWindow::setupVertColorIndexVAO() {
        return setupVertColorVAO();
    }

    bool OpenGLWindow::setupVertUVVAO() {
        GLint inVertPos = mShaderProgram->attributeLocation("inVertPos");
        if (inVertPos == -1) {
            GF_WARN("Cannot locate property 'inVertPos' in shaders");
            GF_WARN("No data will be rendered");
            return false;
        }
        GLint textureCoord = mShaderProgram->attributeLocation("inTexturePos");
        mShaderProgram->setAttributeBuffer(inVertPos, GL_FLOAT, 0, 3,
                                           sizeof(float) * 5);
        mShaderProgram->setAttributeBuffer(textureCoord, GL_FLOAT, sizeof(float) * 3, 2,
                                           sizeof(float) * 5);
        mShaderProgram->enableAttributeArray(inVertPos);
        mShaderProgram->enableAttributeArray(textureCoord);
        //todo: add texture binding here.
        return true;
    }

    bool OpenGLWindow::setupVertUVIndexVAO() {
        return setupVertUVVAO();
    }

    bool OpenGLWindow::setupVertUVNormVAO() {
        return false;
    }

    bool OpenGLWindow::setupVertUVNormIndexVAO() {
        return setupVertUVNormVAO();
    }

    bool OpenGLWindow::setupVertNormVAO() {
        GLint inVertPos = mShaderProgram->attributeLocation("inVertPos");
        if (inVertPos == -1) {
            GF_WARN("Cannot locate property 'inVertPos' in shaders");
            GF_WARN("No data will be rendered");
            return false;
        }
        GLint norm = mShaderProgram->attributeLocation("inNorm");
        mShaderProgram->setAttributeBuffer(inVertPos, GL_FLOAT, 0, 3,
                                           sizeof(float) * 6);
        mShaderProgram->setAttributeBuffer(norm, GL_FLOAT, sizeof(float) * 3, 3,
                                           sizeof(float) * 6);
        mShaderProgram->enableAttributeArray(inVertPos);
        mShaderProgram->enableAttributeArray(norm);
        mShaderProgram->setUniformValue("inUniColor", mRenderDataUniColor);

        return true;
    }

    bool OpenGLWindow::setupVertNormIndexVAO() {
        return setupVertNormVAO();
    }

    bool OpenGLWindow::setupVertColorNormVAO() {
        GLint inVertPos = mShaderProgram->attributeLocation("inVertPos");
        if (inVertPos == -1) {
            GF_WARN("Cannot locate property 'inVertPos' in shaders");
            GF_WARN("No data will be rendered");
            return false;
        }
        GLint inVertColor = mShaderProgram->attributeLocation("inVertColor");
        GLint inNorm      = mShaderProgram->attributeLocation("inNorm");
        mShaderProgram->setAttributeBuffer(inVertPos, GL_FLOAT, 0, 3,
                                           sizeof(float) * 9);
        mShaderProgram->setAttributeBuffer(inVertPos, GL_FLOAT, sizeof(float) * 3, 3,
                                           sizeof(float) * 9);
        mShaderProgram->setAttributeBuffer(inVertColor, GL_FLOAT, sizeof(float) * 6, 3,
                                           sizeof(float) * 9);
        mShaderProgram->enableAttributeArray(inVertPos);
        mShaderProgram->enableAttributeArray(inNorm);
        mShaderProgram->enableAttributeArray(inVertColor);
        return true;
    }

    bool OpenGLWindow::setupVertColorNormIndexVAO() {
        return setupVertColorNormVAO();
    }

    void OpenGLWindow::setupShaders() {
        //determine mCurrentShaderType.
        determineShaders(mVertMetaInfo.info & 0x08,
                         mVertMetaInfo.info & 0x02,
                         mVertMetaInfo.info & 0x04,
                         mVertMetaInfo.info & 0x01);
    }

}