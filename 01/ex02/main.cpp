/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:54:13 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/23 17:23:48 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string string;
	
	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "addr of string:    " << &string << std::endl;
	std::cout << "addr of stringPTR: " << stringPTR << std::endl;
	std::cout << "addr of stringREF: " << &stringREF << std::endl;

	std::cout << "string:    " << string << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	return (0);
}
