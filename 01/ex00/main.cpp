/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:54:44 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/22 19:10:38 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void)
{
	Zombie	*new_guy;

	randomChump("george");
	new_guy = newZombie("fred");
	new_guy->announce();
	delete new_guy;
	return (0);
}
