/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:44:10 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/12 13:58:11 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
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
	return (contacts[index]);
}

static std::string truncate(const std::string& str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return (str);
}

void PhoneBook::printContacts()
{
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < currentIndex; i++)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << truncate(contacts[i].getName()) << "|"
				  << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
				  << std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;
	}

	std::cout << "Enter index to view full contact: ";
	int index;
	if (!(std::cin >> index) || index < 0 || index >= currentIndex)
	{
		std::cout << "Invalid index!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}

	Contact c = contacts[index];
	std::cout << "First Name: " << c.getName() << std::endl;
	std::cout << "Last Name: " << c.getLastName() << std::endl;
	std::cout << "Nickname: " << c.getNickname() << std::endl;
	std::cout << "Phone Number: " << c.getNumber() << std::endl;
	std::cout << "Darkest Secret: " << c.getSecret() << std::endl;
}
