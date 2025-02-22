/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:40:04 by mzeggaf           #+#    #+#             */
/*   Updated: 2025/01/09 18:23:03 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

#include "AMateria.hpp"

#define DEBUG 1

class Character : public ICharacter {

	private:
		std::string	name;
		AMateria	*inventory[4];
		
	public:
		Character( void );
		Character( std::string new_name );
		Character( Character &character );
		Character	&operator=( Character &character );
		~Character();
		
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
