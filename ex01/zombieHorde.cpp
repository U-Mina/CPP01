/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:51:09 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 12:05:36 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		new (&horde[i]) Zombie(name);
	}
	return horde;
}
	//creating array of N using 'NEW'
/**
 * NOTE: Placement new (a special form of NEW: doesnt alloc mem, just construct obj in pre-allocated mem)
 * 	- new (&horde[i]) Zombie(name);
 * 		- it calls constructor for each Zombie obj
 * 		- &horde[i]: mem address of i -th Zombie obj
 * 		- Zombie(name): calls construtor at the i -th mem location, and init it with given 'name'
 * in Zombie* horde = new Zombie[N]; memory for N Zombie obj is allocated in one go
 * BUT: constructor is NOT called for each Zombie obj
 */

/**
 * WHY placement new is USED:
 * 	 + when using new Zombie[N], default constructor Zombie() is called for each obj
 * 		but we want each zombie to have a specific 'name' using parameter constructor Zombie(std::string name)
 * 	+ new Zombie[N] doesnt pass 'name' to constructor, so placement new is used
 * 		to call constructor for each obj after allocation
 */

/**
 * new: This is the keyword used to dynamically allocate memory in C++. In this case, we're not using the standard new operator to allocate new memory, but rather the placement new operator.
 * 1. (&horde[i]): This is the memory location where we want to construct the Zombie object. horde is an array of Zombie objects, and horde[i] represents the i-th element in the array.
 * 	We're taking the address of this element using the & operator, which gives us the memory location where we want to construct the Zombie object.
 * 2. Zombie(name): This is the constructor call for the Zombie class. We're passing the name parameter to the Zombie constructor, which will be used to initialize the name member variable of the Zombie object. 
 * SUM: "Construct a new Zombie object at the memory location pointed to by &horde[i], using the name parameter to initialize the Zombie object."
 */