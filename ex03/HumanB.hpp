#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    private:
    Weapon* weapon;
    std::string name;

    public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon* weapon);
};

#endif