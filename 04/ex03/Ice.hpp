/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:10:34 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/09 23:23:17 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>

#include "AMateria.hpp"

#define DEBUG 0

class Ice : public AMateria {
	public:
		Ice( void );
		Ice( const Ice &ice );
		Ice	&operator=( const Ice &ice );
		~Ice();

		AMateria* clone() const;
		void use(ICharacter &target);
};

#endif
