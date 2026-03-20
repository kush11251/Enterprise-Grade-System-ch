#include "src/controllers/MainController.hpp"
#include "src/services/UsersService.hpp"

void MainController::run() {
    UsersService service;
    service.getUser();
}