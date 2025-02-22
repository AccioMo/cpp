/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:30:54 by mzeggaf           #+#    #+#             */
/*   Updated: 2025/01/09 18:24:02 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
	if (DEBUG)
		std::cout << "materia source created" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &materia )
{
	*this = materia;
	if (DEBUG)
		std::cout << "materia source copied" << std::endl;
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &materia )
{
	for (int i = 0 ; i < 4; i++)
	{
		if (materia.templates[i])
			templates[i] = materia.templates[i]->clone();
		else
			templates[i] = NULL;
	}
	if (DEBUG)
		std::cout << "materia source assigned" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete templates[i];
	if (DEBUG)
		std::cout << "materia source destroyed" << std::endl;
}

void MateriaSource::learnMateria( AMateria	*amateria )
{
	for (int i = 0; i < 4; i++)
	{
		if (templates[i] == NULL)
		{
			templates[i] = amateria;
			if (DEBUG)
				std::cout << "learned amateria: " << templates[i]->getType() << std::endl;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (templates[i] && templates[i]->getType() == type)
		{
			if (DEBUG)
				std::cout << "created amateria: " << type << std::endl;
			return (templates[i]->clone());
		}
	}
	return (NULL);
}
