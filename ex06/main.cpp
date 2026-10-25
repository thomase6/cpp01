#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "invalid number of arguments.\n";
		return 1;
	}
	std::string level = av[1];
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = 4; // this has to be 4 as 4 is going to be for when the option is not found
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			index = i;
			break;
		}
	}
	Harl harl; // we make the object harl to be able to use the member function
	switch (index)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
	return 0;
}

// ./harlFilter <level>
// use switch statements
/*
	while (index <= 4)
	{
		switch (index)
		{
			case 0:
				harl.complain("DEBUG");
				break;
			case 1:
				harl.complain("INFO");
				break;
			case 2:
				harl.complain("WARNING");
				break;
			case 3:
				harl.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]\n";
		}
		index++;
	}
*/
