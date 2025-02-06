/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:53:05 by ewu               #+#    #+#             */
/*   Updated: 2025/02/06 13:27:35 by ewu              ###   ########.fr       */
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
	//std::cout << "Zombie Kiwi is created. " << std::endl;
	Zombie Kiwi = Zombie("Kiwi");
	Kiwi.announce();
	Zombie Foo = Zombie("Foo");
	Foo.announce();
	randomChump("Banana");
	
	Zombie* Orange = newZombie("Orange_onheap");
	Orange->announce();
	// printf("%p\n", Orange);
	delete Orange;
	// printf("%p\n", Orange);
	
	return 0;
}
