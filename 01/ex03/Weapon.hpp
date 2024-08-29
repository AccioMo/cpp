/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:27:42 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/08/25 20:53:46 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		void setType( std::string value );
		std::string	getType( void ) const;
		Weapon( std::string weapon_type );
		~Weapon();
};
