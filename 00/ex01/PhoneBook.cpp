/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:00:13 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/16 12:29:39 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(void)
{
	Contact		new_contact;
	std::string value;

	if (!new_contact.init())
		return ;
	if (numOfContacts == 8)
	{
		for (int i = 0; i < 7; i++)
		{
			contacts[i] = contacts[i + 1];
			contacts[i].set_index(i);
		}
		setNumOfContacts(7);
	}
	contacts[numOfContacts] = new_contact;
	contacts[numOfContacts].set_index(numOfContacts);
	setNumOfContacts(numOfContacts + 1);
	std::cout << "Contact added successfully!" << std::endl;
};

void PhoneBook::search(void)
{
	std::string	sindex;
	int			index;

	this->print_phonebook();
	std::cout << "Input a valid index: ";
	std::getline(std::cin, sindex);
	if (sindex.empty() || !strisnumber(sindex))
	{
		std::cout << "Invalid index. " << std::endl;
		return ;
	} else
		index = stoi(sindex);
	if (index < 0 || index >= numOfContacts)
	{
		std::cout << "No contact with index: " << index << std::endl;
		return ;
	}
	contacts[index].show_info();
};

void	PhoneBook::print_phonebook(void)
{
	print_header();
	for (int i = 0; i < numOfContacts; i++)
		contacts[i].print_data();
};

int PhoneBook::exit(void)
{
	return (0);
};

void	PhoneBook::setNumOfContacts(int value)
{
	numOfContacts = value;
};

PhoneBook::PhoneBook(void) {};

PhoneBook::~PhoneBook(void) {};
