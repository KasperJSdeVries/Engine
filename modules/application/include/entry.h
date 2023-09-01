#ifndef APPLICATION_ENTRY_H
#define APPLICATION_ENTRY_H

#include "game.h"
#include "types.h"

extern b8 create_game(game *out_game);

int main() {
    game game_instance;
    if (!create_game(&game_instance)) {
        return -1;
    }

    if (!application_create(&game_instance.application_config)) {
        return -1;
    }

    if (!application_run()) {
        return -1;
    }

    return 0;
}

#endif // APPLICATION_ENTRY_H
