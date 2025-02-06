/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:53:05 by ewu               #+#    #+#             */
/*   Updated: 2025/02/06 13:06:41 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TASKS:
 * 	dynamic mem allocation
 * 	destructor
 */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie* zombieHeap = newZombie("heapZombie");
	zombieHeap->announce();
	delete zombieHeap;
	
	randomChump("stackZombie");
	return 0;
}
