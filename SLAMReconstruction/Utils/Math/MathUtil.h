
#ifndef SPATIALRECONSTRUCTION_MATHUTIL_H
#define SPATIALRECONSTRUCTION_MATHUTIL_H

#include "SLAMReconstruction/Utils/Def/Def.h"

namespace gf{
    /// calculate power of 2 (slightly larger or equal than cap.).
    inline size_t powerOfTwo(size_t cap) {
        size_t n = cap - 1;
        n |= n >> 1;
        n |= n >> 2;
        n |= n >> 4;
        n |= n >> 8;
        n |= n >> 16;
        return (n < 0) ? 1 : (n >= MAX_ALIGNMENT ? MAX_ALIGNMENT : n + 1);
    }
}

#endif //SPATIALRECONSTRUCTION_MATHUTIL_H
