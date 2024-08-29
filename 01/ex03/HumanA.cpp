/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:45:16 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/26 21:11:30 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "HumanA.hpp"

void		HumanA::attack( void ) const {
	std::cout	<< name << " attacks with their " << weapon->getType() << std::endl;
}

std::string	HumanA::getName( void ) const {
	return (name);
}

void		HumanA::setName( std::string new_name ) {
	name = new_name;
}

Weapon		*HumanA::getWeapon( void ) const {
	return (weapon);
}

void		HumanA::setWeapon( Weapon &new_weapon ) {
	weapon = &new_weapon;
}

HumanA::HumanA( std::string birth_name,  Weapon &starting_weapon ) {
	name = birth_name;
	weapon = &starting_weapon;
}

HumanA::~HumanA( void ) { }
