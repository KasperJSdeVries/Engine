#include "vulkan_setup.h"

b8 create_instance(
	const char *application_name,
	i32 application_version_major,
	i32 application_version_minor,
	i32 application_version_patch,
	vulkan_state *state
) {
	VkApplicationInfo applicationInfo = {
		.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
		.apiVersion = VK_API_VERSION_1_3, // Highest Vulkan version we can use
		.pApplicationName = application_name,
		.applicationVersion = VK_MAKE_VERSION(
								  application_version_major,
								  application_version_minor,
								  application_version_patch
							  ),
		.pEngineName = "Game Engine",
		.engineVersion = VK_MAKE_VERSION(1,0,0)
	};

	VkInstanceCreateInfo createInfo = {
		.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
		.pApplicationInfo = &applicationInfo,
		.enabledExtensionCount = 0,
		.ppEnabledExtensionNames = NULL,
		.enabledLayerCount = 0,
		.ppEnabledLayerNames = NULL,
	};

	if (vkCreateInstance(&createInfo, state->allocator, &state->instance) !=
		VK_SUCCESS) {
		return false;
	}
	return true;
}

void destroy_instance(vulkan_state *state) {
	vkDestroyInstance(state->instance, state->allocator);
}