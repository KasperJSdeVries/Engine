#ifndef RENDERER_STATE_H
#define RENDERER_STATE_H

#include "vulkan/vulkan.h"

typedef struct vulkan_state {
	VkAllocationCallbacks *allocator;
    VkInstance instance;
} vulkan_state;

#endif //RENDERER_STATE_H
