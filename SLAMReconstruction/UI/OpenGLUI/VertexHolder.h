
#ifndef SLAMRECONSTRUCTION_VERTEXHOLDER_H
#define SLAMRECONSTRUCTION_VERTEXHOLDER_H

#include <Utils/Util>

namespace gf {
    typedef struct VertColor_ {
        unsigned char r, g, b;

        VertColor_() {
            r = g = b = 0;
        }

        VertColor_(const unsigned char &r_,
                   const unsigned char &g_,
                   const unsigned char &b_) {
            r = r_;
            g = g_;
            b = b_;
        }

        ~VertColor_() = default;

        VertColor_(const VertColor_ &c) {
            r = c.r;
            g = c.g;
            b = c.b;
        }

        void operator=(const VertColor_ &c) {
            r = c.r;
            g = c.g;
            b = c.b;
        }
    } VertColor;

    typedef struct VertexCColorONorm_ {
        Vec3f     mPos;
        VertColor mColor;
    } VertexCColorONorm;

    typedef struct VertexCColorWNorm_ {
        Vec3f     mPos;
        Vec3f     mNorms;
        VertColor mColor;
    } VertexCColorWNorm;

    typedef struct VertexUniColorWNorm_ {
        Vec3f mPos;
        Vec3f mNorms;
    } VertexUniColorWNorm;

    typedef struct VertexUniColorONorm_ {
        Vec3f mPos;
        Vec3f mNorms;
    } VertexUniColorONorm;

    typedef struct VertexUVWNorm_ {
        Vec3f          mPos;
        Vec3f          mNorms;
        unsigned short mU;
        unsigned short mV;
    } VertexUVWNorm;

    typedef struct VertexUVONorm_ {
        Vec3f          mPos;
        unsigned short mU;
        unsigned short mV;
    } VertexUVONorm;
}

#endif //SLAMRECONSTRUCTION_VERTEXHOLDER_H
