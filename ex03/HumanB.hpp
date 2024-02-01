#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon	arma;
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon arma);
	void attack(void);
};
