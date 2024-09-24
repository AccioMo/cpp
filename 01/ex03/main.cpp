/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:26:09 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/24 14:12:35 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("bow and arrow");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("gun");
		bob.attack();
	}
	{
		Weapon club = Weapon("automatic rifle");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("bazooka");
		jim.attack();
	}
	return (0);
}