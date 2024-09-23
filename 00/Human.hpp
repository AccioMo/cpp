/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:15:30 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/17 16:16:53 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <ostream>

class Human {
	private:
		int		current_health;
		int		max_health;
		float	damage_mult;
	public:
		int		getCurrentHealth(void);
		int		getMaxHealth(void);
		float	getDamageMult(void);

		bool	setCurrentHealth(int value);
		void	setMaxHealth(int value);
		void	setDamageMult(float value);

		Human *operator+(Human const &human)
		{
			Human *baby = new Human(0, 0.f);
			baby->max_health = (max_health + human.max_health) / 2;
			baby->current_health = baby->max_health;
			baby->damage_mult = (damage_mult + human.damage_mult) / 2;
			return (baby);
		};

		friend std::ostream& operator<<(std::ostream& os, Human const &human)
		{
			os << "khdm";
			return (os);
		};

		Human(int init_max_health, float init_damage_mult)
		{
			max_health = init_max_health;
			current_health = init_max_health;
			damage_mult = init_damage_mult;
		};
		~Human(void);
};

#endif
