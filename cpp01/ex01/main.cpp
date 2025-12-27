#include "Zombie.hpp"

int main() {
    Zombie* zombieHorde1;
    int N = 5;
    zombieHorde1 = zombieHorde(N, "HordeZombie");

    for (int i = 0; i < N; ++i) {
        zombieHorde1[i].announce();
    }
    delete[] zombieHorde1;
    
    return 0;
}