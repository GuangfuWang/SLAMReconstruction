
#ifndef SPATIALRECONSTRUCTION_ALIGNEDMEMORYALLOC_H
#define SPATIALRECONSTRUCTION_ALIGNEDMEMORYALLOC_H

#include <memory>
#include "SLAMReconstruction/Utils/Math/MathUtil.h"
#ifdef GF_LINUX
#include <stdlib.h>
#elif defined(GF_WINDOWS)
#include <corecrt_malloc.h>
#define posix_memalign(p, a, s) (((*(p)) = _aligned_malloc((s), (a))), *(p) ?0 :errno)
#endif

namespace gf {
    // note: stateless.  Deleting a derived with a base without virtual ~base a bad idea:
    template<class T>
    struct DeleteAlignedInstance {
        void operator()(T *t) const {
            if (!t)return;
            t->~T();
            free(t);
        };
    };

    template<class T>
    using AlignedPtr = std::unique_ptr<T, DeleteAlignedInstance<T>>;

// the raw version.  Dangerous, because the `T*` requires special deletion:
    template<class T, class...Args>
    T *MakeAlignedRawPtr(size_t alignment, Args &&...args) {
        void    *raw = nullptr;
        if (int err  = posix_memalign(&raw, alignment, sizeof(T))) {
            if (err == ENOMEM)
                throw std::bad_alloc{};
            if (err == EINVAL) {
                printf("Alignment: %d is not the power of 2!", alignment);
                alignment = powerOfTwo(alignment);
                err = posix_memalign(&raw, alignment, sizeof(T));
                if (err == ENOMEM) {
                    throw std::bad_alloc{};
                }
            }
            return 0; // other possibility is bad alignment: not an exception, just an error
        }
        try {
            // returns a T*
            return new(raw) T(std::forward<Args>(args)...);
        } catch (...) { // the constructor threw, so clean up the memory:
            free(raw);
            throw;
        }
    }

    // ,class... Args optional
    template<class T, class...Args>
    AlignedPtr<T> MakeAlignedPtr(size_t alignment = 8, Args &&...args) {
        T *t = MakeAlignedRawPtr<T>(alignment, std::forward<Args>(args)...);
        if (t)
            return AlignedPtr<T>(t);
        else
            return nullptr;
    }
}

#endif //SPATIALRECONSTRUCTION_ALIGNEDMEMORYALLOC_H
