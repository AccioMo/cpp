/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:21:25 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/16 11:39:17 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void print_cell(std::string cell_content)
{
	int len;

	len = strlen(cell_content.c_str());
	len > 10 ? std::cout << cell_content.substr(0, 9) << "."
			 : (std::cout << std::string(10 - len, ' '),
				std::cout << cell_content);
};

bool strisnumber(std::string str)
{
	for (std::string::const_iterator strit = str.begin(); strit != str.end(); strit++)
	{
		if (*strit < '0' || *strit > '9')
			return (false);
	}
	return (true);
}

void print_header(void)
{
	std::cout << "―――――――――――\
―――――――――――\
―――――――――――\
――――――――――――" << std::endl;
	std::cout << "|";
	print_cell("INDEX");
	std::cout << "|";
	print_cell("FIRST NAME");
	std::cout << "|";
	print_cell("LAST NAME");
	std::cout << "|";
	print_cell("NICKNAME");
	std::cout << "|" << std::endl;
	std::cout << "―――――――――――\
―――――――――――\
―――――――――――\
――――――――――――" << std::endl;
};