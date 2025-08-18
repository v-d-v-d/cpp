/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 02:11:52 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/18 15:28:24 by vdunatte         ###   ########.fr       */
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
	Weapon();
	~Weapon();
	const std::string &getType() const;
	void setType(std::string new_type);
};
• A private attribute type, which is a string.
• A  member function that returns a constant reference to type.
• A setType() member function that sets type using the new value passed as a parameter.
#endif