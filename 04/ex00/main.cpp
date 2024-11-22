/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:04:53 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/11/22 17:02:42 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Cat b;
	const Cat c = b;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << c.getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	c.makeSound();
	meta->makeSound();

	const WrongAnimal* wi = new WrongCat();
	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	
	delete wi;

	delete meta;
	delete j;
	delete i;
	
	return 0;
}