#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void Zombie::announce()
{
	std::cout << this->name << std::endl;
}
