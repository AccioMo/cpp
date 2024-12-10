/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:03:43 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/10 05:34:58 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	Ice		*ice = new Ice();
	std::cout << ice->getType() << std::endl;
	delete ice;
	
	Cure	*cure = new Cure();
	std::cout << cure->getType() << std::endl;
	delete cure;

	std::cout << "---------------" << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "---------------" << std::endl;
	
	Character	*joe = new Character("joe");

	tmp = src->createMateria("cure");
	joe->equip(tmp);
	
	tmp = src->createMateria("ice");
	joe->equip(tmp);

	tmp = src->createMateria("cure");
	joe->equip(tmp);

	tmp = src->createMateria("cure");
	joe->equip(tmp);

	tmp = src->createMateria("cure");
	joe->equip(tmp);

	joe->use(3, *bob);
	joe->use(4, *bob);
	joe->use(5, *bob);

	Character	chris(*joe);

	std::cout << "===============" << std::endl;
	chris.use(0, *me);
	std::cout << "chris: " << chris.getName() << std::endl;

	delete joe;

	chris.use(1, *me);
	
	Character a;
	{
		Character b = a;
	}

	delete bob;
	delete me;
	delete src;
	
	return 0;
}
