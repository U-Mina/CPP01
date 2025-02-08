/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:09:54 by ewu               #+#    #+#             */
/*   Updated: 2025/02/08 12:37:45 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)//para num check and para assign
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
	//std read/create file part
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
	//searching and replacing part with std::getline()
	std::string currentLine;
	//while not reach EOF, read the <filename> line by line and store in currentLine
	while (std::getline(inPut, currentLine))
	{
		size_t pos = 0;
		//search for matches until no more found in *currentLine*!!
		//finding position of s1, staring from 0 index
		//npos indicates: not found or end of string or s1.length exceed left length, break
		while ((pos = currentLine.find(s1, pos)) != std::string::npos)
		{
			currentLine.erase(pos, s1.length());
			currentLine.insert(pos, s2);
			pos += s2.length();
		}
		outPut << currentLine << "\n";
	}
	inPut.close();
	outPut.close();
	return 0;
}

/**
 * TASKS:
 * - 3 para: filename, s1, s2 (ac check)
 * - open <filename>, copy into <filename>.replace
 *    + replace every s1 with s2 (namely, no s1 anymore but all s2)
 * cases to handle:
 * 		+ s1 or s2 == "null";
 * 		+ cant find any s1 in <filename>
 * 		+ <filename> does not exist; open fail;
 * FUNCTIONS:
 * 		- std::string::replace xxxx
 * 		- std::string::find/substr/append/insert() OK
 */
/**
 * TAKEAWAY:
 * - std::string substr()
 * 	+ 1 parameter: substr(size_t pos)
 * 		- take all chars from pos to end
 * 	EG: "helloWorld"; substr(6) --> "orld"
 * 	+ 2 para: substr(size_t pos, size_t len)
 * 		- pos = where to start; len = how many chars to take
 * 	EG: std::string "helloWorld"; str.substr(0, 5) --> "hello"
 * 
 */
	//full match of string checking
	// bool matchFlag = true;
	// for (size_t index = 0; index < s1.length(); ++index)
	// {
	// 	if (currentLine[pos + index] != s1[index])
	// 	{
	// 		matchFlag = false;
	// 		break ;	
	// 	}
	// }
	// if (matchFlag == true)
	// {
	// 	std::string frontLine = currentLine.substr(0, pos);
	// 	std::string backLine = currentLine.substr(i + s1.length());
	// 	currentLine = frontLine + s2 + backLine;//s1 is replaced and line combined
	// 	i = pos + s2.length();
	// }
	// else
	// 	i = pos + 1; 