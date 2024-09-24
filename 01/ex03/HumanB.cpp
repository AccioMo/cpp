/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:45:16 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/24 14:11:38 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "HumanB.hpp"

void	HumanB::attack( void ) const {
	std::cout	<< name << " attacks with their " << weapon->getType() << std::endl;
}

std::string	HumanB::getName( void ) const {
	return (name);
}

void		HumanB::setName( std::string new_name ) {
	name = new_name;
}

Weapon		*HumanB::getWeapon( void ) const {
	return (weapon);
}

void		HumanB::setWeapon( Weapon &new_weapon ) {
	weapon = &new_weapon;
}

HumanB::HumanB( std::string birth_name ) : name(birth_name), weapon(NULL) {}

HumanB::~HumanB( void ) { }
