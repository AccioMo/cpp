/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:02:00 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/17 18:38:32 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	prompt;

	phonebook.set_num_of_contacts(0);
	std::cout << "\033[2J\033[H\n		--- Welcome to thePhoneBook --- 		\n" << std::endl;
	while (true)
	{
		std::cout << "Type ADD, SEARCH, or EXIT: ";
		if (!std::getline(std::cin, prompt))
			break ;
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

