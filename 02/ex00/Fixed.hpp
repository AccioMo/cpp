/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:22:26 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/25 19:47:23 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed &object);
		~Fixed();
		Fixed	&operator=(const Fixed &original);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};
