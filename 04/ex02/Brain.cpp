/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:32:00 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/12/04 02:52:02 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "new brain created" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	std::cout << "new brain copied" << std::endl;
}

Brain::~Brain()
{
	std::cout << "brain death" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	std::cout << "new brain assigned" << std::endl;
	return *this;
}
