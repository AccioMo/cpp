/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:02:00 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/16 12:24:50 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	prompt;

	phonebook.setNumOfContacts(0);
	std::cout << "\033[2J\033[H\n		--- Welcome to thePhoneBook --- 		\n" << std::endl;
	while (true)
	{
		std::cout << "Type ADD, SEARCH, or EXIT: ";
		std::getline(std::cin, prompt);
		if (prompt == "ADD")
			phonebook.add();
		else if (prompt == "SEARCH")
			phonebook.search();
		else if (prompt == "EXIT")
			return (phonebook.exit());
		else
			std::cout << "Please ";
	}
	return (0);
}
