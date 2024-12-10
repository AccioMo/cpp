/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:31:18 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/09 23:23:33 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define DEBUG 0

class MateriaSource : public IMateriaSource {

	private:
		AMateria	*(templates[4]);

	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &materia );
		MateriaSource	&operator=( const MateriaSource &materia );
		~MateriaSource();
		
		void		learnMateria( AMateria *amateria );
		AMateria	*createMateria( std::string const &type );
};

#endif
