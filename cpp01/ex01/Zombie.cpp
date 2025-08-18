/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:59:16 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/18 15:25:45 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(std::string zombie_name)
{
	name = zombie_name;
}

Zombie::Zombie() : name("")
{
}

Zombie::~Zombie()
{
	std::cout << name << ": Aarrrg *dead*" << std::endl;
}
