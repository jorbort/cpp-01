#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce();
};

Zombie *zombieHorde(int n, std::string name);

#endif