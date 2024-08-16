/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:01:36 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/16 12:53:36 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::show_info(void)
{
	std::cout << "Index: " << index << std::endl;
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

void	Contact::print_data(void)
{
	std::cout << "|";
	print_cell(std::to_string(this->index));
	std::cout << "|";
	print_cell(this->first_name);
	std::cout << "|";
	print_cell(this->last_name);
	std::cout << "|";
	print_cell(this->nickname);
	std::cout << "|" << std::endl;
	std::cout << "―――――――――――\
―――――――――――\
―――――――――――\
――――――――――――" << std::endl;
}

Contact::Contact(void){};

Contact::~Contact(void){};

bool Contact::set_first_name(void)
{
	std::string value;

	std::cout << "First Name: ";
	std::getline(std::cin, value);
	if (value.empty())
	{
		std::cout << "Field can't be left empty." << std::endl;
		return (false);
	}
	first_name = value;
	return (true);
}

bool Contact::set_last_name(void)
{
	std::string value;

	std::cout << "Last Name: ";
	std::getline(std::cin, value);
	if (value.empty())
	{
		std::cout << "Field can't be left empty." << std::endl;
		return (false);
	}
	last_name = value;
	return (true);
}

bool Contact::set_nickname(void)
{
	std::string value;

	std::cout << "Nickname: ";
	std::getline(std::cin, value);
	if (value.empty())
	{
		std::cout << "Field can't be left empty." << std::endl;
		return (false);
	}
	nickname = value;
	return (true);
}

bool Contact::set_phone_number(void)
{
	std::string value;

	for (int i = 3; i >= 0; i--)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, value);
		if (value.empty())
		{
			std::cout << "Field can't be left empty." << std::endl;
			continue ;
		}
		else if (!strisnumber(value))
		{
			std::cout << "A Phone Number Must be a NUMERIC VALUE. " << std::endl;
			continue ;
		}
		else if (value.length() != 10)
		{
			std::cout << "Phone Number must contain of 10 digits. " << std::endl;
			continue ;
		}
		phone_number = value;
		return (true);
	}
	return (false);
}

bool Contact::set_darkest_secret(void)
{
	std::string value;

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, value);
	if (value.empty())
	{
		std::cout << "Field can't be left empty." << std::endl;
		return (false);
	}
	darkest_secret = value;
	return (true);
}

bool Contact::init(void)
{
	if (!this->set_first_name())
		return (false);
	if (!this->set_last_name())
		return (false);
	if (!this->set_nickname())
		return (false);
	if (!this->set_phone_number())
		return (false);
	if (!this->set_darkest_secret())
		return (false);
	return (true);
}

void Contact::set_index(int value)
{
	index = value;
};
