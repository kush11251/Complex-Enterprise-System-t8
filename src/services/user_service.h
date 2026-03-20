#ifndef USER_SERVICE_H
#define USER_SERVICE_H

#include "src/models/user.h"

typedef struct UserService UserService;

UserService* user_service_create();
void user_service_handle_request(UserService* service);
void user_service_destroy(UserService* service);

#endif