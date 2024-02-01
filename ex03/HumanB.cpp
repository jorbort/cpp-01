#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name), arma()
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &newArma)
{
	arma = &newArma;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << arma->getType() << std::endl;
}
