/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:35:30 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/24 13:45:19 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

Zombie	*zombieHorde(int N, std::string name);

#endif
