/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:17:06 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/26 16:30:54 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

static	Fixed	abs(Fixed number)
{
	if (number.toFloat() < 0) return Fixed(-number.toFloat());
	return (number); 
}

#include <iostream>

static Fixed area(Point a, Point b, Point c)
{
	return (((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / Fixed(2.0f));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	triangle_area = abs(area(a, b, c));
	Fixed	area1 = abs(area(point, b, c));
	Fixed	area2 = abs(area(a, point, c));
	Fixed	area3 = abs(area(a, b, point));

	Fixed	area_sum = area1 + area2 + area3;

	return ((area_sum <= triangle_area) * !(area1 == 0.0f || area2 == 0.0f || area3 == 0.0f));
}
