/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:45:58 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/26 15:29:40 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point( void );
		Point( const float init_x, const float init_y );
		Point( const Point &point );
		Point	operator=( Point &point );
		~Point( void );

		Fixed getX( void ) const;
		Fixed getY( void ) const;
};

#endif
