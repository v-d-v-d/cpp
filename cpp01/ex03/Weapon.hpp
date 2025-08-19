/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 02:11:52 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/19 03:28:26 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cstring>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string new_type);
	~Weapon();
	const std::string &getType() const;
	void setType(std::string new_type);
};

#endif