/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:27:17 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/06 14:49:54 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <stdio.h>
#include <string.h>

void	add_contact(PhoneBook &phone1)
{
	Contact current;
	std::cout << "Enter contact fields one by one :" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::string	str;
		int		num;

		std::cout << "\t";
		if (i != 3)
		{
			std::cin >> str;
			if (i == 0)
				current.setName(str);
			else if (i == 1)
				current.setLastName(str);
			else if (i == 2)
				current.setNickname(str);
			else if (i == 4)
				current.setSecret(str);
		}
		else
		{
			std::cin >> num;
			current.setNumber(num);
		}
	}
	phone1.addContact(current);
}

int	main()
{
	std::string	line;
	PhoneBook phone1;
	
	while (1)
	{
		std::cin >> line;
		if (line == "EXIT")
			break ;
		if (line == "ADD")
			add_contact(phone1);
		if (line == "SEARCH")
			phone1.printContacts();
	}
	return (0);
}
