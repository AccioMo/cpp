/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:42:46 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/22 17:52:29 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie( std::string name )
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	if (!new_zombie)
		std::cout << "Failed to create zombie." << std::endl;
	return (new_zombie);
}
