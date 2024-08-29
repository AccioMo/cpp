/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:39:54 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/22 19:45:36 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce( void ) const
{ 
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string value )
{
	name = value;
}

Zombie::Zombie( void )
{
	std::cout << "New zombie has joined the chat." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << name << " the zombie has left the chat." << std::endl;
}
