/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:05:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/22 16:43:59 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::Animal( void )
{
	this->type = "none";
	std::cout << "New animal is born." << std::endl;
}

Animal::Animal( std::string type )
{
	this->type = type;
	std::cout << "New animal of " << type << " species is born." << std::endl;
}

Animal::Animal( const Animal &animal )
{
	*this = animal;
	std::cout << "New animal of " << type << " species is cloned." << std::endl;
}

Animal	&Animal::operator=( const Animal &animal )
{
	this->type = animal.type;
	std::cout << "New animal of " << type << " species is assigned." << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "An animal of " << type << " species is dead." << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Moo" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (type);
}
