/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:44:10 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/05 18:50:18 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0) {}

void	PhoneBook::addContact(const Contact &contact)
{
	//Index checking
	if (currentIndex == 8)
		currentIndex = 0;

	//adding new contact
	contacts[currentIndex] = contact;
	currentIndex++;
}

Contact PhoneBook::getContact(int index) const
{
	//returning contact at the specified index
	return (contacts[index]);
}
