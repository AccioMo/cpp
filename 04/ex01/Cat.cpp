/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:19:31 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/12 10:01:57 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	brain = new Brain();
	std::cout << "New cat is born." << std::endl;
}

Cat::Cat( const Cat &cat )
{
	*this = cat;
	std::cout << "New cat is cloned." << std::endl;
}

Cat	&Cat::operator=( const Cat &cat )
{
	this->type = cat.type;
	if (cat.brain)
		this->brain = new Brain(*cat.brain);
	std::cout << "New cat is assigned." << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "A cat is dead." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}
