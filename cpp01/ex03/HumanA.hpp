/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 02:11:38 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/19 03:37:12 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cstring>

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		weapon;
public:
	HumanA(std::string new_name, Weapon new_weapon);
	~HumanA();
	void attack() const;
	void setWeapon(Weapon new_weapon);
};

#endif