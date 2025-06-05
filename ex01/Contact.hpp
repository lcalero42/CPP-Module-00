/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:52:46 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/05 18:59:11 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>

class Contact {
public:
	Contact();
	Contact(const std::string &name);

	std::string	getName();
	
private:
	std::string name;
};

#endif