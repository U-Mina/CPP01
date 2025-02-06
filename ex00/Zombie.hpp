/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:39:58 by ewu               #+#    #+#             */
/*   Updated: 2025/02/06 12:25:15 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iomanip>
# include <string>

class Zombie
{
private:
	std::string name;//zombieName
public:
	Zombie(std::string name);//constructor, take 'name' as para, and give it to zombie(object)
	~Zombie();//destructor
	void announce(void);	
};

#endif

/**
 * Zombie* newZombie(std::string name)
 * 		- creates a zombie on HEAP, returns a PTR to it
 * 		- use NEW and DELETE (similar to 'malloc' and 'free' in C) to manage
 * 		- obj needs to persist beyond current scope
 * void randomChump(std::string name)
 * 		- create a zombie on STACK
 * 		- mem is auto managed, obj being destroyed if go out of scope
 * 		- safer (no mem leak)
 * 		- SHORT-LIVED obj
 */