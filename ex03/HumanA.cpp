#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &arma) : weapon(arma) 
{
	this->name = name;
	this->weapon = arma;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
}
