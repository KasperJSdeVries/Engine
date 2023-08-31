#ifndef PLATFORM_CONSOLE_H
#define PLATFORM_CONSOLE_H

#include "api.h"

typedef enum output_color {
    OUTPUT_COLOR_BLACK,
    OUTPUT_COLOR_BLUE,
    OUTPUT_COLOR_GREEN,
    OUTPUT_COLOR_RED,
    OUTPUT_COLOR_YELLOW,
    OUTPUT_COLOR_CYAN,
    OUTPUT_COLOR_PURPLE,
    OUTPUT_COLOR_WHITE,
} output_color;

API void console_log(const char *message, output_color color);

API void console_error(const char *message, output_color color);

#endif //PLATFORM_CONSOLE_H
