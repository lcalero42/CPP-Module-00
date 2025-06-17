/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:52:46 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 10:51:53 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>

class Contact {
public:
	//Constructors
	Contact();
	Contact(const std::string &name);

	//Get functions
	std::string	getName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getNumber() const;
	std::string	getSecret() const;

	//Set functions
	void	setName(std::string input_name);
	void	setLastName(std::string input_name);
	void	setNickname(std::string input_name);
	void	setSecret(std::string input_secret);
	void	setNumber(std::string input_num);
private:
	std::string name;
	std::string	lastName;
	std::string	nickname;
	std::string	secret;
	std::string	number;
};

#endif