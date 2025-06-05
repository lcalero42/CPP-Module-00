/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:13:24 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/05 18:59:01 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : name("") {}

Contact::Contact(const std::string& name) : name(name) {}

std::string Contact::getName()
{
	return (name);
}