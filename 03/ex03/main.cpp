/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:50:07 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/16 19:31:28 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap clap;
	DiamondTrap clap_villain(clap);
	DiamondTrap clap_clone;
	
	clap_clone = clap;
	clap_clone.setName("Clone");
	clap_clone.takeDamage(10);

	clap.setAttackDamage(5);
	
	clap_villain.setName("Villain");
	clap_villain.setAttackDamage(7);

	clap.attack("NPC");
	clap.highFivesGuys();
	clap.whoAmI();
	clap.setName("mo");
	clap.whoAmI();
	clap.attack("BOSS NPC");
	clap.takeDamage(1000);
	
	return (0);
}
