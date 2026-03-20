#include "src/services/user_service.h"
#include "src/models/user.h"

struct UserService {
    UserRepository *user_repository;
};

UserService* user_service_create() {
    UserService *service = malloc(sizeof(UserService));
    service->user_repository = user_repository_create();
    return service;
}

void user_service_handle_request(UserService* service) {
    User *user = user_repository_get_user(service->user_repository, 1);
    printf("User name: %s\n", user->name);
}

void user_service_destroy(UserService* service) {
    user_repository_destroy(service->user_repository);
    free(service);
}