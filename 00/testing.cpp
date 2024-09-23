/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:10:39 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/23 14:39:24 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "Human.hpp"

int	main(int ac, char ** av)
{
	int g = 1;

	switch (g) 
	{
		case 0: std::cout << "00" << std::endl;
		case 1: std::cout << "01" << std::endl;
		case 6: std::cout << "02" << std::endl;
		case 7: std::cout << "03" << std::endl;
		default: std::cout << "DE" << std::endl;
	};
	return (0);
}
