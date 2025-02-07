/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:49:55 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 11:54:06 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 3;
	Zombie* horde = zombieHorde(N, "zombieInOne");
	for (int i = 0; i< N; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
