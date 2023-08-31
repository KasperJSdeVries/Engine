#ifndef APPLICATION_H
#define APPLICATION_H

#include "types.h"
#include "api.h"

typedef struct application_config {
    char *name;
} application_config;

API b8 application_create(application_config *config);

API b8 application_run();

#endif //APPLICATION_H
