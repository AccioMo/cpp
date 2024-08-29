/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:40:15 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/26 21:11:24 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		void		attack( void ) const;
		std::string	getName( void ) const;
		void		setName( std::string new_name );
		Weapon		*getWeapon( void ) const;
		void		setWeapon( Weapon &new_weapon );
		HumanB( std::string birth_name );
		~HumanB( void );
};
