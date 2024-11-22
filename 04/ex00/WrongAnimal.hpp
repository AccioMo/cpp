/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:05:39 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/22 17:00:34 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &wronganimal );
		WrongAnimal	&operator=( const WrongAnimal &wronganimal );
		virtual ~WrongAnimal();

		virtual void	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif
