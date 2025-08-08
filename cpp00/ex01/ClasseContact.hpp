/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClasseContact.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 00:08:12 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/08 03:47:11 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSECONTACT_HPP
# define CLASSECONTACT_HPP

# include <iostream>


class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
public:
	Contact();
	~Contact();
	void DisplayContact() const;
	void SetContsct();
};



#endif