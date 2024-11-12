/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:09:32 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/12 20:00:04 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap(void)
{
	_name = "nobody";
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "An unnamed ScavTrap was made. " << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
	_name = name;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "A new ScavTrap, " << _name <<  ", was made. " << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scav )
{
	_name = scav._name;
	_hitpoints = scav._hitpoints;
	_energy_points = scav._energy_points;
	_attack_damage = scav._attack_damage;
	std::cout << "ScavTrap " << _name << " was copied." << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << _name << " was destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &scav )
{
	_name = scav._name;
	_hitpoints = scav._hitpoints;
	_energy_points = scav._energy_points;
	_attack_damage = scav._attack_damage;
	std::cout << "ScavTrap " << _name << " was assigned." << std::endl;
	return (*this);
}

void ScavTrap::attack( const std::string &target )
{
	if (_hitpoints <= 0) {
		std::cout << "ScavTrap is already dead" << std::endl;
		return ;
	} else if (_energy_points <= 0) {
		std::cout << "ScavTrap has no energy points" << std::endl;
		return ;
	}
	_energy_points -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage" << std::endl;
}

void	ScavTrap::guardGate( void ) const
{
	std::cout << "ScavTrap " << _name << " is now a gate keeper." << std::endl;
}
