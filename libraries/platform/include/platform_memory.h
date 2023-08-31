#ifndef PLATFORM_MEMORY_H
#define PLATFORM_MEMORY_H

#include "types.h"

void *platform_allocate(u64 size, b8 aligned);

void platform_free(void *block, b8 aligned);

void *platform_zero_memory(void *block, u64  size);

void *platform_copy_memory(void *destination, const void *source, u64 size);

void *platform_set_memory(void *block, i32 value, u64 size);

#endif //PLATFORM_MEMORY_H
