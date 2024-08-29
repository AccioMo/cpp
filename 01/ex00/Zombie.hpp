/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:35:30 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/22 19:44:15 by mzeggaf          ###   ########.fr       */
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
