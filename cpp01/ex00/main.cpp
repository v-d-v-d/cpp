/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:59:04 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/19 02:10:38 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*tortue;

	tortue = newZombie("tortue zombie");
	tortue->announce();
	delete tortue;
	randomChump("lapin zombie");
	return (0);
}
