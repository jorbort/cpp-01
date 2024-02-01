#include <string>
#include <iostream>

int main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPtr = &s;
	std::string &stringRef = s;

	std::cout << &s   << std::endl;
	std::cout << stringPtr << std::endl;
	std::cout << &stringRef  << std::endl;

	std::cout << s   << std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef  << std::endl;
}