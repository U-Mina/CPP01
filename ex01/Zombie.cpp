/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:58:24 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 12:08:41 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie " << name << " is created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " has been destroyed!" << std::endl;
}

void Zombie::announce()
{
	if (name == "Foo")
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << "<" << name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}
