#include "entry.h"

b8 create_game(game *out_game) {
    out_game->application_config = (application_config){
        .name = "Testbed",
    };

    return true;
}
