#include "Zombie.hpp"

int main(void)
{
	int n = 5;
	Zombie *horde = zombieHorde(n, "Rick");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
}