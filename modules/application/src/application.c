#include "application.h"
#include "platform_console.h"

typedef struct application_state {
    b8 is_running;
    b8 is_suspended;
    f64 last_time;
} application_state;

static b8 initialized = false;
static application_state app_state;

b8 application_create(application_config *config) {
    if (initialized) {
        return false;
    }

    app_state.is_running = true;
    app_state.is_suspended = false;

    console_log("Black\n", OUTPUT_COLOR_BLACK);
    console_log("Red\n", OUTPUT_COLOR_RED);
    console_log("Blue\n", OUTPUT_COLOR_BLUE);
    console_log("Green\n", OUTPUT_COLOR_GREEN);
    console_log("Yellow\n", OUTPUT_COLOR_YELLOW);
    console_log("Cyan\n", OUTPUT_COLOR_CYAN);
    console_log("Purple\n", OUTPUT_COLOR_PURPLE);
    console_log("White\n", OUTPUT_COLOR_WHITE);

    console_error("Black\n", OUTPUT_COLOR_BLACK);
    console_error("Red\n", OUTPUT_COLOR_RED);
    console_error("Blue\n", OUTPUT_COLOR_BLUE);
    console_error("Green\n", OUTPUT_COLOR_GREEN);
    console_error("Yellow\n", OUTPUT_COLOR_YELLOW);
    console_error("Cyan\n", OUTPUT_COLOR_CYAN);
    console_error("Purple\n", OUTPUT_COLOR_PURPLE);
    console_error("White\n", OUTPUT_COLOR_WHITE);

    initialized = true;

    return true;
}

b8 application_run() {
    int i = 0;
    while (app_state.is_running) {
        if (i++ > 1000) {
            return true;
        }
    }
    return false;
}
