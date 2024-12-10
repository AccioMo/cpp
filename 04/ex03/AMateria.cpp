/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:29:07 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/09 23:21:21 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	if (DEBUG)
		std::cout << "a new material was created" << std::endl;
}

AMateria::AMateria(std::string const &t)
{
	type = t;
	if (DEBUG)
		std::cout << "a new material was created: " << type << std::endl;
}

AMateria::AMateria( AMateria &amateria )
{
	type = amateria.type;
	if (DEBUG)
		std::cout << "a material was copied: " << type << std::endl;
}

AMateria	&AMateria::operator=( AMateria &amateria )
{
	type = amateria.type;
	if (DEBUG)
		std::cout << "a material was assigned: " << type << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	if (DEBUG)
		std::cout << "a material was destroyed: " << type << std::endl;
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use( ICharacter &target )
{
	(void)target;
	if (DEBUG)
		std::cout << "must be concrete class" << std::endl;
}
