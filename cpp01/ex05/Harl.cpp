/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 01:57:20 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/21 05:31:11 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::map<std::string, void (Harl::*)()> comments;
	comments["DEBUG"] = &Harl::debug;
	comments["INFO"] = &Harl::info;
	comments["WARNING"] = &Harl::warning;
	comments["ERROR"] = &Harl::error;

	if (comments.find(level) != comments.end())
		(this->*comments[level])();
	else
		std::cout << "Invalid level: " << level << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

