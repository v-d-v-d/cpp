/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 03:51:47 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/19 03:46:10 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() const
{
	if (weapon.getType().empty())
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon new_weapon)
{
	weapon = new_weapon;
}

HumanB:: HumanB(std::string new_name) : name(new_name), weapon("")
{
}

HumanB::~ HumanB()
{
}
