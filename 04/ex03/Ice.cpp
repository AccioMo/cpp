/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:34:18 by mzeggaf           #+#    #+#             */
/*   Updated: 2025/01/09 18:23:57 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

Ice::Ice( void ) : AMateria("ice")
{
	if (DEBUG)
		std::cout << "new ice discovered" << std::endl;
}

Ice::Ice( const Ice &ice )
{
	type = ice.type;
	if (DEBUG)
		std::cout << "ice copied" << std::endl;
}

Ice	&Ice::operator=( const Ice &ice )
{
	type = ice.type;
	if (DEBUG)
		std::cout << "ice assigned" << std::endl;
	return (*this);
}

Ice::~Ice()
{
	if (DEBUG)
		std::cout << "ice destroyed" << std::endl;
}

AMateria* Ice::clone( void ) const
{
	AMateria	*ice;

	ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
