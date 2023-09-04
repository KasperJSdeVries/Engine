#ifndef VULKAN_SETUP_H
#define VULKAN_SETUP_H

#include "types.h"
#include "vulkan_state.h"

b8 create_instance(
	const char *application_name,
	i32 application_version_major,
	i32 application_version_minor,
	i32 application_version_patch,
	vulkan_state *state
);

void destroy_instance(vulkan_state *state);

#endif // VULKAN_SETUP_H
