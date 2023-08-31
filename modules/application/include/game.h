#ifndef APPLICATION_GAME_H
#define APPLICATION_GAME_H

#include "types.h"
#include "application.h"

typedef struct game {
    application_config application_config;
    void *state;
} game;

#endif //APPLICATION_GAME_H
