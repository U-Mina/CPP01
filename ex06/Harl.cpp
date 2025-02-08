/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:27:28 by ewu               #+#    #+#             */
/*   Updated: 2025/02/08 14:29:07 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::complainLvl Harl::levels[4] = {
	{"DEBUG", &Harl::debug},
	{"INFO", &Harl::info},
	{"WARNING", &Harl::warning},
	{"ERROR", &Harl::error}
};
/*THIS IS equal to the syntax below:*/
// Harl::complainLvl Harl::levels[4];
// 	levels[0].level = "DEBUG";
// 	levels[0].ft = &Harl::debug;

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/**
 * THIS: pointer to current object
 * '*': derefrence PTR to member func in levels[i].ft
 * ==> a PTR to member ft that can be called on current Harl obj
 */
void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i].level)//compare the string to match lvl
		{
			(this->*levels[i].ft)();//void (Harl::*ft)(void)
			return ;
		}
	}
}
