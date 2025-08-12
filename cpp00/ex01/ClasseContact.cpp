/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClasseContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 01:08:27 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/12 02:40:41 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClasseContact.hpp"
#include <cstdlib>
#include <iomanip>
#include <cstring>

static bool	isempty(std::string str)
{
	int	i = -1;
	int	j = 0;

	while (str[++i])
		if (isspace(str[i]))
			j++;
	if (j == i)
	{
		std::cout << "The parameter cannot be empty. Please try again." << std::endl;
		return (true);
	}
	return (false);
}

static bool	isnumber(std::string str)
{
	int	i = -1;

	while (str[++i])
	{
		if (!isdigit(str[i]))
		{
			std::cout << "'" << str[i] << "' is not a number." << std::endl;
			return (false);
		}
		
	}
	if (str.length() != 10)
	{
		std::cout << "The number must have 10 digits and not " << str.length() << " digits." << std::endl;
		return (false);
	}
	return(true);
}

void	Contact::SetContact()
{
	std::cout << "First Name : ";
	while (getline(std::cin, FirstName) && isempty(FirstName))
		std::cout << "First Name : ";
	std::cout << "Last Name : ";
	while (getline(std::cin, LastName) && isempty(LastName))
		std::cout << "Last Name : ";
	std::cout << "Nickname : ";
	while (getline(std::cin, Nickname) && isempty(Nickname))
		std::cout << "Nickname : ";
	std::cout << "Phone Number : ";
	while (getline(std::cin, PhoneNumber) && (isempty(PhoneNumber) || !isnumber(PhoneNumber)))
		std::cout << "Phone Number : ";
	std::cout << "Darkest Secret : ";
	while (getline(std::cin, DarkestSecret) && isempty(DarkestSecret))
		std::cout << "Darkest Secret : ";
}


void	Contact::DisplayLineContact(int index) const
{
	int	i = -1;

	std::cout << "|         " << index << "|";
	if (FirstName.length() <= 10)
	{
		while (++i < 10 - (int)(FirstName.length()))
			std::cout << " ";
		std::cout << FirstName << "|";
	}
	else 
	{
		while (++i < 9)
			std::cout << FirstName[i];
		std::cout << ".|";
	}
	i = -1;
	if (LastName.length() <= 10)
	{
		while (++i < 10 - (int)(LastName.length()))
			std::cout << " ";
		std::cout << LastName << "|";
	}
	else 
	{
		while (++i < 9)
			std::cout << LastName[i];
		std::cout << ".|";
	}
	i = -1;
	if (Nickname.length() <= 10)
	{
		while (++i < 10 - (int)(Nickname.length()))
			std::cout << " ";
		std::cout << Nickname << "|";
	}
	else 
	{
		while (++i < 9)
			std::cout << Nickname[i];
		std::cout << ".|";
	}
	std::cout << std::endl;
}

void	Contact::PrintContact() const
{
	std::cout << "First Name : " << FirstName << std::endl;
	std::cout << "Last Name : " << LastName << std::endl;
	std::cout << "Nickname : " << Nickname << std::endl;
	std::cout << "Phone Number : " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret : " << DarkestSecret << std::endl;
}

Contact::Contact() : FirstName(""), LastName(""), Nickname(""), PhoneNumber(""),
	DarkestSecret("")
{
}

Contact::~Contact()
{
}
