/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:13:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/03 13:46:02 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "Debug" << std::endl;
}

void Harl::info( void ) {
	std::cout << "Warning" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "Warning" << std::endl;
}

void Harl::error( void ) {
	std::cout << "Error" << std::endl;
}

void Harl::complain( std::string level ) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFct fcts[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*fcts[i])();
			return ;
		}
	}
}
