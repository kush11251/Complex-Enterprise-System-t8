#ifndef USER_CONTROLLER_H
#define USER_CONTROLLER_H

#include "src/services/user_service.h"

typedef struct UserController UserController;

UserController* user_controller_create();
void user_controller_handle_request(UserController* controller);
void user_controller_destroy(UserController* controller);

#endif