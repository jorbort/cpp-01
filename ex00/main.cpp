#include <Zombie.hpp>

int main(void)
{
	Zombie *z_1 = newZombie("Carl");
	Zombie *z_2 = newZombie("Raul");
	randomChump("chump_1");
	randomChump("chump_2");
	delete z_1;
	delete z_2;
}