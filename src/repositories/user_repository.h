#ifndef USER_REPOSITORY_H
#define USER_REPOSITORY_H

#include "src/models/user.h"

typedef struct UserRepository UserRepository;

UserRepository* user_repository_create();
User* user_repository_get_user(UserRepository* repository, int id);
void user_repository_destroy(UserRepository* repository);

#endif