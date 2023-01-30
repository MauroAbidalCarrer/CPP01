#include "HumanB.hpp"
#include <string>


HumanB::HumanB(std::string name) : name(name) { }

void HumanB::attack()
{
    std::cout << name << "attacks with their ";
    if (weapon != NULL)
        std::cout << weapon->getType();
    else
        std::cout << "...nothing, no weapon equipped";
    std::cout << std::endl;
}

void HumanB::setWeapon(Weapon* weapon)
{
    this->weapon = weapon;
}