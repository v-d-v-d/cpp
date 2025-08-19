/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 02:11:35 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/19 03:37:12 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() const
{
	if (weapon.getType().empty())
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon new_weapon)
{
	weapon = new_weapon;
}

HumanA::HumanA(std::string new_name, Weapon new_weapon) : name(new_name), weapon(new_weapon)
{
}

HumanA::~ HumanA()
{
}
