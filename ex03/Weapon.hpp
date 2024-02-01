#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <string>
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string type);
	Weapon(void);
	~Weapon();
	const std::string &getType(void);
	void setType(std::string type);
};


#endif