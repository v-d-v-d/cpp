/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 03:51:43 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/19 03:37:26 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cstring>

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		weapon;
public:
	HumanB(std::string new_name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon new_weapon);
};

#endif