/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:57:05 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 15:47:08 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TAKEAWAY: 
 * 1. composition: using obj of one class as memmbers of another class
 * 2. init at Construction time VS Dynamic assignment
 * 3. REF vs PTR
 * 4. REF in humanA; PTR in humanB; attack() use cur Weapon_type
 * 		 + changing of weapon_type will affect all humans referencing it
 * 5. this operator
 */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	//Weapon club = Weapon("crude spiked club");//club is an instance of Weapon class (an obj)
	// Weapon club("crude spiked club");
	
	// HumanA bob("Bob", club);//what does this mean???
	// bob.attack();
	// club.setType("some other type of club");
	// bob.attack();
	Weapon club = Weapon("crude spiked club");//club is an instance of Weapon class (an obj)
	//Weapon club("crude spiked club");//type is: "crude spiked club"
	
	HumanB jim("Jim");//what does this mean???
	jim.setWeapon(club);
	jim.attack();
	// jim.setWeapon(club);
	club.setType("some other type of club");
	jim.attack();
	return 0;
}