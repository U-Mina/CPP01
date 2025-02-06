/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:39:21 by ewu               #+#    #+#             */
/*   Updated: 2025/02/06 12:32:56 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/**
 * GRAMMAR:
 * 	- Zombie:: refers to *Zombie Class*
 * 	- Zombie(std::string name) the constructor
 * 	- :name(name) init 'name' attribute of the class using constructor para
 */
Zombie::Zombie(std::string name) : name(name)
{
	// std::cout << "Zombie " << name << "is created!" << std::endl;
	std::cout << "Announcement of Zombie " << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroy Zombie " << name << std::endl;
}

void Zombie::announce()
{
	if (name == "Foo")
		std::cout << "Foo: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << "<" << name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}
