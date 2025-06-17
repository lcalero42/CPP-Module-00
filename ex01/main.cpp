/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:27:17 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 10:53:16 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>

void	add_contact(PhoneBook &phone1)
{
	Contact current;
	std::string	str;
	
	std::cout << "Enter fields : first name, last name, nickname, number, secret :"
		<< std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "\t";
		std::getline(std::cin, str);
		if (i == 0)
			current.setName(str);
		else if (i == 1)
			current.setLastName(str);
		else if (i == 2)
			current.setNickname(str);
		else if (i == 3)
			current.setNumber(str);
		else if (i == 4)
			current.setSecret(str);
	}
	phone1.addContact(current);
}

int	main()
{
	std::string	line;
	PhoneBook phone1;

	while (1)
	{
		getline(std::cin, line);
		if (line == "EXIT")
			break ;
		if (line == "ADD")
			add_contact(phone1);
		if (line == "SEARCH")
			phone1.printContacts();
	}
	return (0);
}
