/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:31:31 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/12 20:17:27 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(void) : _name("nobody"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "An unnamed ClapTrap was made." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "A new ClapTrap, " << _name <<  ", was made." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap) : _name(clap._name), _hitpoints(clap._hitpoints), _energy_points(clap._energy_points), _attack_damage(clap._attack_damage)
{
	std::cout << "ClapTrap " << _name << " was copied." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	_name = clap._name;
	_hitpoints = clap._hitpoints;
	_energy_points = clap._energy_points;
	_attack_damage = clap._attack_damage;
	std::cout << "ClapTrap " << _name << " was assigned." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " was destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitpoints <= 0) {
		std::cout << "ClapTrap is already dead." << std::endl;
		return ;
	} else if (_energy_points <= 0) {
		std::cout << "ClapTrap has no energy points." << std::endl;
		return ;
	}
	_energy_points -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints <= 0) {
		std::cout << "ClapTrap is already dead." << std::endl;
		return ;
	}
	_hitpoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage." << std::endl;
	if (_hitpoints <= 0) {
		std::cout << "ClapTrap " << _name << " died." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints <= 0) {
		std::cout << "ClapTrap is already dead." << std::endl;
		return ;
	} else if (_energy_points <= 0) {
		std::cout << "ClapTrap has no energy points." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " healed " << amount << " points." << std::endl;
	_hitpoints += amount;
	_energy_points -= 1;
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

int	ClapTrap::getHitpoints(void) const
{
	return (_hitpoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (_attack_damage);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHitpoints(int hitpoints)
{
	_hitpoints = hitpoints;
}

void	ClapTrap::setEnergyPoints(int energy_points)
{
	_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(int attack_damage)
{
	_attack_damage = attack_damage;
}

