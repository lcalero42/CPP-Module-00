/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:13:24 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/06 14:51:05 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : name("") {}

Contact::Contact(const std::string& name) : name(name) {}

//Getters functions
std::string Contact::getName() const
{
	return (name);
}

std::string Contact::getLastName() const
{
	return (lastName);
}

int Contact::getNumber() const
{
	return (number);
}

std::string Contact::getNickname() const
{
	return (nickname);
}

std::string Contact::getSecret() const
{
	return (secret);
}

//Set unctions
void	Contact::setName(std::string input_name)
{
	name = input_name;
}

void	Contact::setLastName(std::string input_name)
{
	lastName = input_name;
}

void	Contact::setNickname(std::string input_name)
{
	nickname = input_name;
}

void	Contact::setNumber(int input_num)
{
	number = input_num;
}

void	Contact::setSecret(std::string input_secret)
{
	secret = input_secret;
}
