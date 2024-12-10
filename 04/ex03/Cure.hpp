/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:14:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/10 05:26:44 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>

#include "AMateria.hpp"

#define DEBUG 0

class Cure : public AMateria {
	public:
		Cure( void );
		Cure( const Cure &cure );
		Cure	&operator=( const Cure &cure );
		~Cure();

		AMateria* clone() const;
		void use(ICharacter &target);
};

#endif
