/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 03:41:10 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/12 02:50:12 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassePhoneBook.hpp"
#include "ClasseContact.hpp"
#include <iostream>

int	main()
{
	PhoneBook	NewPhoneBook;
	std::string	line;

	std::cout << "PhoneBook >> ";
	while (getline(std::cin, line))
	{
		if (line.compare("EXIT") == 0)
			break;
		if (line.compare("ADD") == 0)
			NewPhoneBook.NewContact();
		if (line.compare("SEARCH") == 0)
			NewPhoneBook.SearchContact();
		std::cout << "PhoneBook >> ";
	}
	std::cout << "Bye" << std::endl;
	return (0);
}
