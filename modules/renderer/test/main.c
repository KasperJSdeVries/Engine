#include "renderer.h"

int main() {
	void *state = init();

	cleanup(state);
}
