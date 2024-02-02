#include "Harl.hpp"

int main(void)
{

	Harl harold;

	harold.complain("info");
	std::cout << "next complain" << std::endl;
	harold.complain("error");
	harold.complain("debug");
}
