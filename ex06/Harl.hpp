/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:17:32 by ewu               #+#    #+#             */
/*   Updated: 2025/02/09 10:34:13 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	struct complainLvl
	{
		std::string level;
		void (Harl::*ft)(void);
	};
	static complainLvl levels[4];
public:
	void complain(std::string level);
};

enum levelKey
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	INVALID
};
levelKey getlevelkey(const std::string& lvl);

#endif

/*NO CODE INPLEMENTATION IN HEADER!!!*/
// {
// 	if (lvl == "DEBUG")
// 		return DEBUG;
// 	if (lvl == "INFO")
// 		return INFO;
// 	if (lvl == "WARNING")
// 		return WARNING;
// 	if (lvl == "ERROR")
// 		return ERROR;
// 	return INVALID;
// }