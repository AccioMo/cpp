/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:05:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/22 16:53:14 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	this->type = "none";
	std::cout << "New wronganimal is born." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type )
{
	this->type = type;
	std::cout << "New wronganimal of " << type << " species is born." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wronganimal )
{
	*this = wronganimal;
	std::cout << "New wronganimal of " << type << " species is cloned." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &wronganimal )
{
	this->type = wronganimal.type;
	std::cout << "New wronganimal of " << type << " species is assigned." << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An wronganimal of " << type << " species is dead." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Oom" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}
