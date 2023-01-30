#include "Zombie.hpp"

int main()
{
    Zombie zombie = Zombie("Jack");
    zombie.announce();
    Zombie * zombiePointer = newZombie("Joe");
    zombiePointer->announce();
    delete zombiePointer;
    randomChump("ya");
}