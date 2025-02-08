/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:01:41 by ewu               #+#    #+#             */
/*   Updated: 2025/02/08 14:15:16 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

/**
 * TASK: to create a @class Harl
 * using pointer to point to @fn
 */

//testing cases listed
int main()
{
	Harl harl;//create harl object

	std::cout << "\033[1;32m" << "Valid testing cases: " << "\033[0m" << std::endl;
//calls complain() member ft based on passed para "DEBUG"
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	
	std::cout << "\033[1;32m" << "Invalid test cases: " << "\033[0m" << std::endl;
	harl.complain("Wrong Format");
	harl.complain("Not exists level identifier.");
	harl.complain("");//empty string test
	std::cout << "\033[1;32m" << "Nothing should be printed for invalid tests" << "\033[0m" << std::endl << std::endl;

	std::cout << "\033[1;32m" << "Multiple complains made: " << "\033[0m" << std::endl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("ERROR");
	return 0;
}
