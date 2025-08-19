/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 02:11:49 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/19 03:28:32 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

const std::string	&Weapon::getType() const
{
	return(type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}

Weapon::Weapon(std::string new_type) : type(new_type)
{
}

Weapon::~Weapon()
{
}