/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:05:39 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/05 17:38:42 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal &animal );
		Animal	&operator=( const Animal &animal );
		virtual ~Animal();

		virtual void	makeSound( void ) const = 0;
		std::string	getType( void ) const;
};

#endif
