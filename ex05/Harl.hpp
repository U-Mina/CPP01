/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:03:43 by ewu               #+#    #+#             */
/*   Updated: 2025/02/08 14:12:56 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

/**
 * PTR to member function syntax: void (Harl::*func)(void)
 * declares a pointer to a member ft of Harl that takes no pare
 */
class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	struct complainLvl
	{
		std::string level;
		void (Harl::*ft)(void);//ptr to member ft
	};
	//an array of structs, will map complainlvl to corressponding ft ptr
	static complainLvl levels[4];
	//static keyword: init on;y once, shared by all instances of Harl class
public:
	void complain(std::string level);
};

#endif