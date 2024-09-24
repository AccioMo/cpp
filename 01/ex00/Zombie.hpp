/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:35:30 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/24 13:39:55 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		void	announce( void );
		Zombie(std::string name);
		~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
