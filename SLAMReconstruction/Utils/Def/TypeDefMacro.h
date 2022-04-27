
#ifndef SPATIALRECONSTRUCTION_TYPEDEFMACRO_H
#define SPATIALRECONSTRUCTION_TYPEDEFMACRO_H

#include <memory>
#include <map>
#include <vector>

#ifdef GF_EIGEN3
#include <Eigen/Dense>
#endif

namespace gf {
    template<typename T>
    using UniqueRef = std::unique_ptr<T>;
    template<typename T>
    using SharedRef = std::shared_ptr<T>;

    template<typename T, typename ... Args>
    constexpr SharedRef<T> createSharedRef(Args &&... args) {
        return std::make_shared<T>(std::forward<Args>(args)...);
    }

    template<typename T, typename ... Args>
    constexpr UniqueRef<T> createUniqueRef(Args &&... args) {
        return std::make_unique<T>(std::forward<Args>(args)...);
    }

    template<typename T>
    using Vector = std::vector<T>;
    template<typename key, typename value>
    using Map = std::map<key, value>;
#ifndef UChar
    using UChar = unsigned char;
#endif

    using OctreeIDType = unsigned int;
    using OctreeIndexType = unsigned int;
    using OctreeType = unsigned int;
    using OctreeDataIndexType = unsigned int;

    /**
     * @NOTE normal type definition will use eigen lib.
     */
    using Vec2f = Eigen::Vector2f;
    using Vec2d = Eigen::Vector2d;
    using Vec2i = Eigen::Vector2i;
    using Vec3f = Eigen::Vector3f;
    using Vec3d = Eigen::Vector3d;
    using Vec3i = Eigen::Vector3i;
    using Vec4f = Eigen::Vector4f;
    using Vec4i = Eigen::Vector4i;
    using Vec6f = Eigen::Array<float, 6, 1>;
    using Vec6d = Eigen::Array<double, 6, 1>;
    using Vec6i = Eigen::Array<int, 6, 1>;
    using Quaternion = Eigen::Quaterniond;
    using Translation = Eigen::Array<float, 3, 1>;
    typedef struct Transformation_ {
        Quaternion q;
        Translation t;
    } Transformation;

    /**
     * @NOTE Type alias starting with 'Q' meaning Qt version and ONLY used in UI related calculation.
     */
    using QVec3f = QVector3D;
    using QVec2f = QVector2D;
    using QTranslation=QVector3D;
    using QVec4f = QVector4D;
    using QQuaternion = QQuaternion;
    using QTranslation = QVector3D;
    typedef struct QTransformation_ {
        QQuaternion  q;
        QTranslation t;
    } QTransformation;


}

#endif //SPATIALRECONSTRUCTION_TYPEDEFMACRO_H
