/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:35:30 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/22 19:44:11 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		void	announce( void ) const;
		void	setName( std::string value );
		Zombie( void );
		~Zombie( void );
};
