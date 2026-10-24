#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char** av)
{
	if (ac != 4)
	{
		std::cout << "wrong number of arguments.\n" << "available format:\n" << "./sed <filename> <string 1> <string 2>\n";
		return 1;
	}
	std::string filename = av[1];
	std::string string1 = av[2];
	std::string string2 = av[3];
	if (string1.empty())
	{
		std::cout << "<string1> cannot be empty.\n";
		return 1;
	}
	std::ifstream inFile(filename.c_str()); //in c++98 we need a const for ifstream so we use .c_str to make it a c-style const char *
	if (!inFile.is_open()) // this is just a minor check to see if the file opens
	{
		std::cout << "inFile failed to open.\n";
		return 1;
	}
	std::string content;
	std::string line;
	while (std::getline(inFile, line)) //getline strips the /n so we have to append the lines to content and then add a /n
	{
		content += line;
		content += '\n';
	}
	std::string res;
	size_t i = 0;
	size_t match;
	while (1)
	{
		match = content.find(string1, i); // returns std::string::npos(-1) if no match is found 
		if (match == std::string::npos)
		{
			res += content.substr(i);
			break;
		}
		res += content.substr(i, match - i);
		res += string2;
		i = match + string1.length();
	}
	std::ofstream outFile((filename + ".replace").c_str()); // the ".replace" is used to avoid using the original file when making the outfile
	if (!outFile.is_open())
	{
		std::cout << "outFile failed to open.\n";
		return 1;
	}
	outFile << res;
	return 0;
}
