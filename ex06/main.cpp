#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid number of arguments" << std::endl;
		return (1);	
	}
	Harl harold;
	std::string complain = argv[1];

	harold.complain(complain);
}
