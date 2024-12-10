/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:29:19 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/22 17:06:52 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _hitpoints;
		int _energy_points;
		int _attack_damage;
	
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &clap );
		ClapTrap	&operator=( const ClapTrap &clap );
		virtual	~ClapTrap();
	
		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		std::string	getName( void ) const;
		int		getHitpoints( void ) const;
		int		getEnergyPoints( void ) const;
		int		getAttackDamage( void ) const;

		void	setName(std::string name);
		void	setHitpoints(int hitpoints);
		void	setEnergyPoints(int energy_points);
		void	setAttackDamage(int attack_damage);
};

#endif
