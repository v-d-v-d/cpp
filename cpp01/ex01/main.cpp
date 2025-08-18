/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:59:04 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/15 04:36:44 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*tortue;
	int		i = 10;

	tortue = zombieHorde(i, "tortue zombie");
	while (--i >= 0)
		tortue[i].announce();
	delete tortue;
	return 0;
}
