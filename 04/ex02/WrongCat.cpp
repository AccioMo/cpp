/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:19:31 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/22 17:00:15 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "New wrongcat is born." << std::endl;
}

WrongCat::WrongCat( const WrongCat &wrongcat )
{
	*this = wrongcat;
	std::cout << "New wrongcat is cloned." << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &wrongcat )
{
	this->type = wrongcat.type;
	std::cout << "New wrongcat is assigned." << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "A wrongcat is dead." << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Woem" << std::endl;
}
