/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:20:06 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 15:09:50 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

/**
 * POINTER: bc PTR can be null, match that humanB is not always armed
 * not in constructor, so can write setWeapon() method
 * PS: need to check null of PTR ,namely: has weapon or not before using any weapon
 * WEAPON: passed by pointer in humanB
 */
class HumanB
{
private:
	std::string name;
	//declare a PTR to an object of Weapon class
	//it points to nothing, cuz un-init (so to init it in .cpp constructor)
	Weapon* weapon;
public:
	HumanB(std::string name);//do not put weapon in constructor
	void setWeapon(Weapon& weapon);//pass PTR here, cuz the weapon can be null ->no weapon
	void attack();
	// ~HumanB();
};

#endif