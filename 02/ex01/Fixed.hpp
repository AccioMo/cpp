/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:22:26 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/25 19:46:57 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed &object);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed	&operator=(const Fixed &original);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &os, const Fixed &original);
