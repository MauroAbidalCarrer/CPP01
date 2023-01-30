#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) { }
Zombie::~Zombie() 
{ 
    std::cout << "destructor of " << name << " called." << std::endl;
}

void Zombie::announce()
{
   std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

