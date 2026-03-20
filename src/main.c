#include "src/controllers/user_controller.h"

int main() {
    UserController *user_controller = user_controller_create();
    user_controller_handle_request(user_controller);
    user_controller_destroy(user_controller);
    return 0;
}