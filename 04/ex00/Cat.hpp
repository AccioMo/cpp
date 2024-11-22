/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:19:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/22 16:36:13 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( const Cat &cat );
		Cat	&operator=( const Cat &cat );
		~Cat();

		void	makeSound( void ) const;
};

#endif
