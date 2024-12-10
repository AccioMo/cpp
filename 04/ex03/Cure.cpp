/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:18:23 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/09 23:25:53 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	if (DEBUG)
		std::cout << "new cure discovered" << std::endl;
}

Cure::Cure( const Cure &cure )
{
	type = cure.type;
	if (DEBUG)
		std::cout << "cure copied" << std::endl;
}

Cure	&Cure::operator=( const Cure &cure )
{
	type = cure.type;
	if (DEBUG)
		std::cout << "cure assigned" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	if (DEBUG)
		std::cout << "cure destroyed" << std::endl;
}

AMateria* Cure::clone( void ) const
{
	AMateria	*cure;

	cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
