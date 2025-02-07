/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:15:06 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 14:23:55 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

/**
 * take weapon in constructor and will always have it
 * use a reference to Weapon
 * ref must be init when declared and cannot be NULL 
 * --> match the behavioru that A is ARMED
 * WEAPON: a reference member variable
*/
class HumanA
{
private:
	Weapon& Weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon::&Weapon);
	~HumanA();
	void attack();
};

#endif