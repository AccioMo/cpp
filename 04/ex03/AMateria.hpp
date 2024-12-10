/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:05:00 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/09 23:22:55 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

#define DEBUG 0

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria( void );
		AMateria(std::string const &type);
		AMateria( AMateria &amateria );
		AMateria	&operator=( AMateria &amateria );
		virtual ~AMateria();

		std::string const &getType( void ) const;
		virtual AMateria *clone( void ) const = 0;
		virtual void use( ICharacter &target );
};

#endif
