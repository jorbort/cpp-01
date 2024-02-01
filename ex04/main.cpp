#include "program.hpp"

void ft_replace(std::string &line, char *old, char *replace)
{

}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
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
	outfile.open(new_filename, std::ios::out);
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
