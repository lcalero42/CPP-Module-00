/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:27:17 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/05 19:07:17 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main() {
    // Create contacts
    Contact gilbert("Gilbert");
    Contact gilbert2("Gilbert2");

    // Add contacts to phone book
    PhoneBook book;
    book.addContact(gilbert);
    book.addContact(gilbert2);

    std::cout << gilbert.getName() << std::endl;
    std::cout << gilbert2.getName() << std::endl;
    return 0;
}
