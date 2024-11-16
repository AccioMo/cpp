/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:06:00 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/16 21:07:14 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap( void )
{
	_name = "nobody";
	ClapTrap::_name = "nobody_clap_name";
	std::cout << "An unnamed DiamondTrap appeared. " << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
{
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "A DiamondTrap named " << _name << " appeared. " << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &diamond )
{
	_name = diamond._name;
	_hitpoints = diamond._hitpoints;
	_energy_points = diamond._energy_points;
	_attack_damage = diamond._attack_damage;
	std::cout << "DiamondTrap " << _name << " was assigned." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " was destroyed." << std::endl;
}

void DiamondTrap::attack( const std::string &target )
{
	return ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << _name << ". My ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}
