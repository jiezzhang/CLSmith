#ifndef RANDOM_RUNTIME_H
#define RANDOM_RUNTIME_H

#include <CL/sycl.hpp>

#include "cl_safe_math_macros.h"
#include "custom_limits.h"
#include "safe_math_macros.h"


#ifdef NO_ATOMICS
#define atomic_inc(x) -1
#define atomic_add(x, y) (1 + 1)
#define atomic_sub(x, y) (1 + 1)
#define atomic_min(x, y) (1 + 1)
#define atomic_max(x, y) (1 + 1)
#define atomic_and(x, y) (1 + 1)
#define atomic_or(x, y) (1 + 1)
#define atomic_xor(x, y) (1 + 1)
#define atomic_noop() /* for sanity checking */
#endif

void transparent_crc_no_string(uint64_t *crc64_context, uint64_t val) {
  *crc64_context += val;
}

#define transparent_crc_(A, B, C, D) transparent_crc_no_string(A, B)

#define get_linear_group_id() item.get_linear_group_id()

#define get_linear_global_id() item.get_global_linear_id()

#define get_linear_local_id() item.get_local_linear_id()

#endif /* RANDOM_RUNTIME_H */
