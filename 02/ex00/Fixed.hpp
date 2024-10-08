/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:22:26 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/26 16:40:46 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_fractional_bits;
	public:
		Fixed( void );
		Fixed( const Fixed &object );
		~Fixed( void );
		Fixed	&operator=(const Fixed &original);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
