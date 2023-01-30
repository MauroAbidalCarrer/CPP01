#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
    private:
    Weapon& weapon;
    std::string name;

    public:
    HumanA(std::string name, Weapon& weapon);
    void attack();
};

#endif