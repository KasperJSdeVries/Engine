#ifndef GAME_TYPES_H
#define GAME_TYPES_H

#if defined(__clang__) || defined(__GNUC__)
#define STATIC_ASSERT _Static_assert
#else
#define STATIC_ASSERT static_assert
#endif

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef signed char i8;
typedef signed short i16;
typedef signed int i32;
typedef signed long long i64;

typedef float f32;
typedef double f64;

typedef _Bool b8;
typedef int b32;

STATIC_ASSERT(sizeof(u8) == 1, "");
STATIC_ASSERT(sizeof(u16) == 2, "");
STATIC_ASSERT(sizeof(u32) == 4, "");
STATIC_ASSERT(sizeof(u64) == 8, "");

STATIC_ASSERT(sizeof(i8) == 1, "");
STATIC_ASSERT(sizeof(i16) == 2, "");
STATIC_ASSERT(sizeof(i32) == 4, "");
STATIC_ASSERT(sizeof(i64) == 8, "");

STATIC_ASSERT(sizeof(b8) == 1, "");
STATIC_ASSERT(sizeof(b32) == 4, "");

STATIC_ASSERT(sizeof(f32) == 4, "");
STATIC_ASSERT(sizeof(f64) == 8, "");

#define true 1

#define false 0

#endif // GAME_TYPES_H
