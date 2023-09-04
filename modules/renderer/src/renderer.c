#include "renderer.h"
#include "vulkan_setup.h"
#include "vulkan_state.h"
#include <stdlib.h>
#include <vulkan/vulkan.h>

void *init() {
	vulkan_state *state = malloc(sizeof(vulkan_state));

	state->allocator = NULL;

	create_instance("renderer_test", 1,0,0, state);

	return state;
}

void cleanup(void * ptr) {
	vulkan_state *state = (vulkan_state*) ptr;

	destroy_instance(state);

	free(state);
}
