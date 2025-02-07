/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:40:25 by ewu               #+#    #+#             */
/*   Updated: 2025/02/07 12:05:32 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
//idea: it is legal to define ft implementation inside class, but this is .hpp file
//so it will be better to put them into .cpp (implementation file)
