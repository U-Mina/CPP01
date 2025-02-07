/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:20:06 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 14:26:41 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

/**
 * POINTER: bc PTR can be null, match that humanB is not always armed
 * not in constructor, so can write setWeapon() method
 * PS: need to check null of PTR ,namely: has weapon or not before using any weapon
 * WEAPON: passed by pointer in humanB
 */
class HumanB
{
private:
	Weapon* Weapon;
	std::string name;
public:
	// HumanB();
	// ~HumanB();
	void setWeapon(Weapon& weapon);//pass ref here, cuz the weapon can be null ->no weapon
	void attack();
};

#endif