/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:13:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/24 15:48:39 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "the plane loves to go to new york." << std::endl;
}

void Harl::info( void ) {
	std::cout << "the plane is heading towards the twin towers." << std::endl;
}

void Harl::warning( void ) {
	std::cout << "the plane will hit the twin towers if you dont turn." << std::endl;
}

void Harl::error( void ) {
	std::cout << "the plane hit the twin towers." << std::endl;
}

void Harl::complain( std::string level ) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFdd fcts[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*fcts[i])();
			return ;
		}
	}
}
