#include "Zombie.hpp"
Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}
