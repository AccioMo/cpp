/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:50:07 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/12 18:57:33 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Player");
	ClapTrap clap_villain(clap);
	ClapTrap clap_clone;
	
	clap_clone = clap;
	clap_clone.setName("Clone");
	clap_clone.takeDamage(10);

	clap.setAttackDamage(5);
	
	clap_villain.setName("Villain");
	clap_villain.setAttackDamage(7);

	clap.attack("NPC 0");
	clap.attack("NPC 1");
	clap.attack("NPC 2");
	clap.takeDamage(4);
	clap.beRepaired(3);
	clap.attack("NPC 3");
	clap.attack("NPC 4");
	clap.takeDamage(5);
	clap.attack("NPC 5");
	clap.attack("NPC 6");
	clap.beRepaired(3);
	clap.attack("NPC 7");
	clap.attack("NPC 8");
	clap.attack("NPC 9");
	clap.takeDamage(10);
	clap.attack("BOSS NPC");
	
	return (0);
}
