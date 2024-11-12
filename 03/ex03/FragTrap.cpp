/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:09:32 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/12 20:38:30 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap(void)
{
	_name = "nobody";
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "An unnamed FragTrap was made. " << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	_name = name;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "A new FragTrap, " << _name <<  ", was made. " << std::endl;
}

FragTrap::FragTrap( const FragTrap &scav )
{
	_name = scav._name;
	_hitpoints = scav._hitpoints;
	_energy_points = scav._energy_points;
	_attack_damage = scav._attack_damage;
	std::cout << "FragTrap " << _name << " was copied." << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << _name << " was destroyed." << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &scav )
{
	_name = scav._name;
	_hitpoints = scav._hitpoints;
	_energy_points = scav._energy_points;
	_attack_damage = scav._attack_damage;
	std::cout << "FragTrap " << _name << " was assigned." << std::endl;
	return (*this);
}

void FragTrap::attack( const std::string &target )
{
	if (_hitpoints <= 0) {
		std::cout << "FragTrap is already dead" << std::endl;
		return ;
	} else if (_energy_points <= 0) {
		std::cout << "FragTrap has no energy points" << std::endl;
		return ;
	}
	_energy_points -= 1;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage" << std::endl;
}

void	FragTrap::highFivesGuys( void ) const
{
	std::cout << "FragTrap " << _name << " wants a highfive. Don't leave it hanging." << std::endl;
}
