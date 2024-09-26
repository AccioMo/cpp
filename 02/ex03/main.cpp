/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:20:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/26 16:31:05 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point	a(0, 0);
	Point	b(0, 4);
	Point	c(-2, 0);
	Point	p(-1, 2);

	bool	inside = bsp(a, b, c, p);
	
	std::cout << " === Point is " << (inside ? "inside" : "outside") << " the triangle ===" << std::endl;

	return (0);
}
