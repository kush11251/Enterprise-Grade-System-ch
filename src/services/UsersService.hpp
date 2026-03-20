#ifndef USERSSERVICE_HPP
#define USERSSERVICE_HPP

#include "src/models/User.hpp"
#include "src/repositories/UserRepository.hpp"

class UsersService {
public:
    void getUser();
};

#endif  // USERSSERVICE_HPP