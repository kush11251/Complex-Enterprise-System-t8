#include "src/controllers/user_controller.h"
#include "src/services/user_service.h"

struct UserController {
    UserService *user_service;
};

UserController* user_controller_create() {
    UserController *controller = malloc(sizeof(UserController));
    controller->user_service = user_service_create();
    return controller;
}

void user_controller_handle_request(UserController* controller) {
    user_service_handle_request(controller->user_service);
}

void user_controller_destroy(UserController* controller) {
    user_service_destroy(controller->user_service);
    free(controller);
}