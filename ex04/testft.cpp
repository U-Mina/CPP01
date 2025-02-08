#include <string>
#include <iostream>
#include <fstream>

// int main()
// {
// 	std::string name = "hello";
// 	std::string newStr = name + ".new";
// 	std::cout << name << "\n";
// 	std::cout << newStr << "\n";
// 	return 0;
// }

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid argument number!" << std::endl;	
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cerr << "Argument(s) is empty!" << std::endl;	
		return 1;
	}

	std::ifstream inPut(filename);
	if (!inPut.is_open())
	{
		std::cerr << "Fail to open: " << filename << std::endl;	
		return 1;
	}
	std::string outname = filename + ".replace";
	std::ofstream outPut(outname);
	if (!outPut.is_open())
	{
		std::cerr << "Fail to create: " << outname << std::endl;	
		return 1;
	}
	std::string newLine;
	while (std::getline(inPut, newLine))
	{
		size_t pos = 0;
		while ((pos = newLine.find(s1, pos)) != std::string::npos)
		{
			newLine.erase(pos, s1.length());
			newLine.insert(pos, s2);
			pos += s2.length();
		}
		outPut << newLine << "\n";
	}
	inPut.close();
	outPut.close();
	return 0;
}
