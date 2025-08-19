/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:59:23 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/19 02:09:16 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cstring>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	void announce(void) const;
	void SetName(std::string zombie_name);
};

Zombie *zombieHorde(int N, std::string name);

#endif