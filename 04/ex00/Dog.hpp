/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:18:44 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/22 16:36:11 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog( void );
		Dog( const Dog &dog );
		Dog	&operator=( const Dog &dog );
		~Dog();

		void	makeSound( void ) const;
};

#endif
