#include "src/repositories/user_repository.h"

struct UserRepository {
    // implementation details
};

UserRepository* user_repository_create() {
    UserRepository *repository = malloc(sizeof(UserRepository));
    // initialization
    return repository;
}

User* user_repository_get_user(UserRepository* repository, int id) {
    // retrieve user from database or other storage
    User *user = user_create(id, "John Doe");
    return user;
}

void user_repository_destroy(UserRepository* repository) {
    free(repository);
}