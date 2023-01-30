#include "Zombie.hpp"

int main()
{
    Zombie * hord = zombieHorde(10, "yesman");
    for (int i = 0; i < 10; i++)
        hord[i].announce();
    
    delete[] hord;
}