/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:04:53 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/12 10:03:14 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* d = new Dog();
	const Animal* c = new Cat();

	delete c;
	delete d;

	Dog *h = new Dog();
	Dog	g = *h;
	g.makeSound();
	delete h;

	const Animal *a[16];

	for (int i = 0; i < 8; i++)
		a[i] = new Dog();

	for (int i = 8; i < 16; i++)
		a[i] = new Cat();
	
	for (int i = 0; i < 16; i++)
		delete a[i];

	Dog basic;
	{
		Dog tmp = basic;
	}
	
	return 0;
}