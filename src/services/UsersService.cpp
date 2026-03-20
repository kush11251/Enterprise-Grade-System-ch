#include "src/services/UsersService.hpp"
#include "src/repositories/UserRepository.hpp"

void UsersService::getUser() {
    UserRepository repository;
    repository.getUser();
}