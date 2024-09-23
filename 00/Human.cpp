/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:21:23 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/17 18:22:29 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	Human::getCurrentHealth(void)
{
	return (current_health);
}
int	Human::getMaxHealth(void)
{
	return (max_health);
}
float	Human::getDamageMult(void)
{
	return (damage_mult);
}

bool	Human::setCurrentHealth(int value)
{
	if (value > max_health)
		return (false);
	current_health = max_health;
	return (true);
}
void	Human::setMaxHealth(int value)
{
	max_health = value;
}
void	Human::setDamageMult(float value)
{
	damage_mult = value;
}

// Human::Human(int init_max_health = 0, float init_damage_mult = 0)
// {
// 	max_health = init_max_health;
// 	current_health = init_max_health;
// 	damage_mult = init_damage_mult;
// }

Human::~Human(void){
	delete this;
}
