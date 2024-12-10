/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:45:54 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/10 05:34:16 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	if (DEBUG)
		std::cout << "new character spawned" << std::endl;
}

Character::Character( std::string new_name )
{
	name = new_name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	if (DEBUG)
		std::cout << "new character " << name << " spawned" << std::endl;
}

Character::Character( Character &character )
{
	*this = character;
	if (DEBUG)
		std::cout << "new character copied" << std::endl;
}

Character	&Character::operator=( Character &character )
{
	name = character.name;
	for (int i = 0 ; i < 4; i++)
	{
		if (character.inventory[i])
			inventory[i] = character.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	if (DEBUG)
		std::cout << "new character assigned" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
	if (DEBUG)
		std::cout << "new character died" << std::endl;
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return ;
		}
	}
	std::cout << "no inventory slots" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0) {
		std::cout << "invalid index" << std::endl;
		return ;
	}
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0) {
		std::cout << "invalid index" << std::endl;
		return ;
	}
	if (inventory[idx])
		return (inventory[idx]->use(target));
}
