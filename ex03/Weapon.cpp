/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:35:16 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 16:03:58 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructor init 'type'
Weapon::Weapon(std::string type) : type(type){}

//ret const REF to 'type'
const std::string& Weapon::getType() const
{
	return type;
}

//set weapon type
void Weapon::setType(std::string newType)
{
	this->type = newType;
//the weapon_type of current object (this->type) is replaced by newType passed by setType()
}
/**
 * THIS: a special ptr available in non-static member ft of a class
 * points to current obj ---> the instance of the class that IS calling this ft
 */