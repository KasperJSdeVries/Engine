#ifndef PLATFORM_H
#define PLATFORM_H

#include "types.h"

typedef struct platform_state {
    void *internal_state;
} platform_state;

b8 platform_startup(platform_state *state,
                    const char *application_name,
                    i32 x,
                    i32 y,
                    i32 width,
                    i32 height);

void platform_shutdown(platform_state *state);

b8 platform_pump_messages(platform_state *state);

#endif // PLATFORM_H
