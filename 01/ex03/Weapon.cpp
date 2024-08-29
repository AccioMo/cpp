/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:33:49 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/25 20:39:02 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType( std::string value ) {
	type = value;
}

std::string	Weapon::getType( void ) const {
	return (type);
}

Weapon::Weapon( std::string weapon_type ) {
	type = weapon_type;
}

Weapon::~Weapon( void ) { }
