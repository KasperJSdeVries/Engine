#include "platform_console.h"
#include "platform_detection.h"

#if PLATFORM_WINDOWS

#include "types.h"

#include <windows.h>

u16 generate_foreground_color(output_color color) {
	switch (color) {
	case OUTPUT_COLOR_BLACK:
		return 0;
	case OUTPUT_COLOR_RED:
		return FOREGROUND_RED;
	case OUTPUT_COLOR_GREEN:
		return FOREGROUND_GREEN;
	case OUTPUT_COLOR_BLUE:
		return FOREGROUND_BLUE;
	case OUTPUT_COLOR_YELLOW:
		return FOREGROUND_RED | FOREGROUND_GREEN;
	case OUTPUT_COLOR_CYAN:
		return FOREGROUND_BLUE | FOREGROUND_GREEN;
	case OUTPUT_COLOR_PURPLE:
		return FOREGROUND_BLUE | FOREGROUND_RED;
	case OUTPUT_COLOR_WHITE:
		return FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN;
	}
}

void console_log(const char *message, output_color color) {
	HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(
		console_handle, generate_foreground_color(color) | FOREGROUND_INTENSITY
	);
	OutputDebugStringA(message);
	u64 length = strlen(message);
	LPDWORD number_written = 0;
	WriteConsoleA(console_handle, message, length, number_written, 0);
}

void console_error(const char *message, output_color color) {
	HANDLE console_handle = GetStdHandle(STD_ERROR_HANDLE);
	SetConsoleTextAttribute(
		console_handle, generate_foreground_color(color) | FOREGROUND_INTENSITY
	);
	OutputDebugStringA(message);
	u64 length = strlen(message);
	LPDWORD number_written = 0;
	WriteConsoleA(console_handle, message, length, number_written, 0);
}

#endif
