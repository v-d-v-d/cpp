/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassePhoneBook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 00:08:15 by vdunatte          #+#    #+#             */
/*   Updated: 2025/08/12 02:47:40 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSEPHONEBOOK_HPP
# define CLASSEPHONEBOOK_HPP

# include "ClasseContact.hpp"
# include <iostream>


class PhoneBook
{
private:
	int		LastIndex;
	int		NContact;
	Contact	ListContact[8];
public:
	PhoneBook();
	~PhoneBook();
	void NewContact();
	void SearchContact() const;

};




#endif