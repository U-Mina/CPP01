/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:32:15 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 13:02:56 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string strBrain = "HI THIS IS BRAIN";
/*syntax for declare PTR, a var store the mem address of another var
you CAN change what it points to in its lifetime*/
	std::string* stringPRT;
//can also do 'std::string* stringPRT = &strBrain'
	stringPRT = &strBrain;//stringPTR stores the address of strBrain
/*syntax for declare REF,a alias for another var,
MUST be init whendeclared, CANNOT be changed*/
	std::string& stringREF = strBrain;//a ref to the strBrain, an alias
	
	
	std::cout << "The memory address of the string variable: " << &strBrain << std::endl;
	//&strBrain --> get address of string 'strBrain'
	std::cout << "The memory address held by stringPTR: " << stringPRT << "\n";
	//stringPTR: address stroed in the PRT (same as &str)
	std::cout << "The memory address held by stringREF: " << &stringREF << "\n";
	//&stringREF: address of the ref (same as &str)
	std::cout << "The value of the string variable: " << strBrain << "\n";//
	std::cout << "The value pointed to by stringPTR: " << *stringPRT << "\n";//dereference the value using *
	std::cout << "The value pointed to by stringREF: " << stringREF << '\n';
	
	return 0;
}

/**
 * COMPARE: REF vs PTR
 * REF is safer, cuz it CANNOT be null, and always points to valid object
 * DEREFREENCE:
 * access the value pointed by a PTR, *
 * EG: *stringPTR gives the value of the string pointed to by 'stringPTR'
 * REF: do not need dereferencing, behave like origin var
 */

/**
 * Pointers:
 * - Can be reassigned to point to different variables.
 * - Can be null.
 * - Require dereferencing (*) to access the value.
 * 
 * References:
 * - Cannot be reassigned to refer to a different variable after initialization.
 * - Cannot be null.
 * - Do not require dereferencing; they behave like the original variable.
 */