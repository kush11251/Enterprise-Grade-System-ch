#include "src/repositories/UserRepository.hpp"
#include "src/models/User.hpp"

void UserRepository::getUser() {
    // simulate database query
    User user;
    user.name = "John Doe";
    user.email = "johndoe@example.com";
}