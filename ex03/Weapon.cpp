#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(void)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void)
{
	const std::string &refType = this->type;
	return(refType);
}
void Weapon::setType(std::string type)
{
	this->type = type;
}