#include "Zombie.hpp"

Zombie::Zombie() { }
Zombie::Zombie(std::string name) : name(name) { }
Zombie::~Zombie() 
{ 
    std::cout << "destructor of zombie " << name << " called." << std::endl;
}
void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
   std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
