/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:44:15 by lcalero           #+#    #+#             */
/*   Updated: 2025/06/17 16:01:22 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void	putstr(const std::string &s)
{
	for (std::string::size_type i = 0; i < s.length(); ++i)
	{
		char letter = std::islower(s[i]) ? std::toupper(s[i]) : s[i];
		std::cout << letter;
	}
}

int	main(int argc, char** argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else 
	{
		for (int i = 1; i < argc; ++i) {
			putstr(argv[i]);
		}
	}
	return (0);
}
