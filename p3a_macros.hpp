#pragma once

#if defined(_MSC_VER)
#define CPL_ALWAYS_INLINE __forceinline
#define CPL_NEVER_INLINE __declspec(noinline)
#elif defined(__CUDACC__)
#define CPL_ALWAYS_INLINE __attribute__((always_inline))
#define CPL_NEVER_INLINE __attribute__((noinline))
#else
#define CPL_ALWAYS_INLINE __attribute__((always_inline))
#define CPL_NEVER_INLINE __attribute__((noinline))
#endif
