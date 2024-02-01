#include "program.hpp"

void ft_replace(std::string &line, std::string s1, std::string s2)
{
	int last = 0;
	size_t find_value;
	std::string aux;

	while((find_value = line.find(s1,last)) != std::string::npos)
	{
		aux = line.substr(find_value + s1.size());
		line.erase(find_value);	
		line += s2 + aux;	
		last = find_value +s2.size();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong amount of arguments" << std::endl;
		return (1);
	}
	if (!argv[2][0] || !argv[3][0])
	{
		std::cout << "arguments cant be empty" << std::endl;
		return (1);
	}
	std::ifstream infile;
	std::ofstream outfile;
	std::string new_filename = argv[1];
	std::string line = "";

	new_filename.append(".replace");

	infile.open(argv[1], std::ios::in);
	if (infile.good() == false)
	{
		std::cout << "unable to open file" << std::endl;
		return (1);
	}
	outfile.open(new_filename.c_str(), std::ios::out);
	if (outfile.good() == false)
	{
		infile.close();
		std::cout << "error creating outfile" << std::endl;
		return (1);
	}
	while (true)
	{
		getline(infile, line);
		ft_replace(line, argv[2], argv[3]);
		outfile << line << std::endl;
		if (infile.eof())
			break;
	}
	infile.close();
	outfile.close();
}
