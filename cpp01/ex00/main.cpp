#include "Zombie.hpp"

int main() {
    Zombie* zombie1 = new Zombie("foo");
    (*zombie1).announce();
    delete zombie1;

    randomChump("Zombie2");

    return 0;
}