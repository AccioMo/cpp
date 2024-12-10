/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:18:40 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/10 00:47:36 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	brain = new Brain();
	std::cout << "New dog is born." << std::endl;
}

Dog::Dog( const Dog &dog )
{
	this->type = dog.type;
	if (dog.brain)
		this->brain = new Brain(*dog.brain);
	std::cout << "New dog is cloned." << std::endl;
}

Dog	&Dog::operator=( const Dog &dog )
{
	this->type = dog.type;
	if (dog.brain)
		this->brain = new Brain(*dog.brain);
	std::cout << "New dog is assigned." << std::endl;
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Bark" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "A dog is dead." << std::endl;
}
