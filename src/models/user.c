#include "src/models/user.h"

User* user_create(int id, char* name) {
    User *user = malloc(sizeof(User));
    user->id = id;
    user->name = strdup(name);
    return user;
}

void user_destroy(User* user) {
    free(user->name);
    free(user);
}