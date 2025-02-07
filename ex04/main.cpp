/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:09:54 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 16:30:02 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/**
 * TASKS:
 * - 3 para: filename, s1, s2 (ac check)
 * - open <filename>, copy into <filename>.replace
 *    + replace every s1 with s2 (namely, no s1 anymore but all s2)
 * cases to handle:
 * 		+ s1 or s2 == "null";
 * 		+ cant find any s1 in <filename>
 * 		+ <filename> does not exist; open fail; 
 */
int main(int ac, char **av)
{
	if (ac != 4)//3 args
	{
		std::cerr << "Invalid argument number!" << std::endl;	
		return 1;
	}
	std::string filename = av[1];//av[0] = executable name ./*
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cerr << "Argument(s) is empty!" << std::endl;	
		return 1;
	}



	
	return 0;
}
