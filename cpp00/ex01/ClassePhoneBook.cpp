/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassePhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 02:09:08 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/12 02:41:51 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassePhoneBook.hpp"
#include <cstdlib>
#include <iomanip>
#include <cstring>

static int	isoneint(std::string	index)
{
	if (!isdigit(index[0]) || index[1])
		return(-1);
	return (index[0] - '0');
}

void	PhoneBook::NewContact()
{
	std::cout << "Add a new contact" << std::endl;
	LastIndex = (LastIndex + 1) % 8;
	if (NContact < 8)
		NContact++;
	ListContact[LastIndex].SetContact();
	std::cout << "New contact added to the index " << LastIndex << std::endl;
}

void	PhoneBook::SearchContact() const
{
	std::string	index;
	int			i = -1;

	if (NContact == 0)
	{
		std::cout << "There are no saved contacts. Please use 'ADD' to add a new one." << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (++i < NContact)
	{
		ListContact[i].DisplayLineContact(i);
		std::cout << "---------------------------------------------" << std::endl;
	}
	std::cout << "Contact index to display : ";
	while (getline(std::cin, index))
	{
		i = isoneint(index);
		if (i != -1 && i < NContact)
		{
			ListContact[i].PrintContact();
			break;
		}
		std::cout << "the index must be between 0 and " << NContact - 1 << std::endl;
		std::cout << "Contact index to display : ";
	}
}

PhoneBook::PhoneBook() : LastIndex(-1), NContact(0)
{
}

PhoneBook::~PhoneBook()
{
}