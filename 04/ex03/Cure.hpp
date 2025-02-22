/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:14:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2025/01/09 18:23:00 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

#define DEBUG 1

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
