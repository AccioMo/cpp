/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:22:26 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/26 01:02:17 by mzeggaf          ###   ########.fr       */
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

		bool	operator<(const Fixed &original);
		bool	operator>(const Fixed &original);
		bool	operator<=(const Fixed &original);
		bool	operator>=(const Fixed &original);
		bool	operator==(const Fixed &original);
		bool	operator!=(const Fixed &original);

		Fixed	operator+(const Fixed &original);
		Fixed	operator-(const Fixed &original);
		Fixed	operator*(const Fixed &original);
		Fixed	operator/(const Fixed &original);

		Fixed	&operator++( void );
		Fixed	&operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		static Fixed	&min( Fixed &a, Fixed &b );
		static const Fixed	&min( const Fixed &a, const Fixed &b );
		static Fixed	&max( Fixed &a, Fixed &b );
		static const Fixed	&max( const Fixed &a, const Fixed &b );
};

std::ostream &operator<<(std::ostream &os, const Fixed &original);
