/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:50:59 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/26 15:55:37 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <iostream>

Point::Point(void) : x(0), y(0) { };

Point::Point(const float init_x, const float init_y) : x(init_x), y(init_y) { };

Point::Point(const Point &point) : x(point.x), y(point.y) { };

Point Point::operator=(Point &point)
{
	Point two(point);
	return (two);
}

Point::~Point(void) { };

Fixed Point::getX(void) const
{
	return (x);
}

Fixed Point::getY(void) const
{
	return (y);
}
