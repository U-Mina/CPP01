/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:10:37 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 13:19:50 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA() {}//empty constructor
HumanA::~HumanA() {};//destructor
void HumanA::attack()
{
	std::cout << name << " attacks with their " << Weapon.getType() << "\n";
}
