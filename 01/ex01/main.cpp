/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:54:44 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/24 13:57:08 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie	*zombie_horde;

	zombie_horde = zombieHorde(3, "horde zombie");
	for (int i = 0; i < 3; i++)
	{
		zombie_horde->announce();
	}
	delete[] zombie_horde;
	return (0);
}
