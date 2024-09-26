/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:33:48 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/26 16:34:33 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &object)
{
	*this = object;
}

Fixed::~Fixed() { }

Fixed &Fixed::operator=(const Fixed &original)
{
	this->setRawBits(original.getRawBits());
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (_raw_bits);
}

void Fixed::setRawBits(const int raw)
{
	_raw_bits = raw;
}

Fixed::Fixed(const int int_value)
{
	this->setRawBits(int_value << _fractional_bits);
}

Fixed::Fixed(const float float_value)
{
	this->setRawBits(roundf(float_value * (1 << _fractional_bits)));
}

std::ostream &operator<<(std::ostream &os, const Fixed &value)
{
	os << value.toFloat();
	return (os);
}

float Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << _fractional_bits));
}

int Fixed::toInt(void) const
{
	return (getRawBits() >> _fractional_bits);
}

bool	Fixed::operator<(const Fixed &value)
{
	return (this->toFloat() < value.toFloat());
}

bool	Fixed::operator>(const Fixed &value)
{
	return (this->toFloat() > value.toFloat());
}

bool	Fixed::operator<=(const Fixed &value)
{
	return (this->toFloat() <= value.toFloat());
}

bool	Fixed::operator>=(const Fixed &value)
{
	return (this->toFloat() >= value.toFloat());
}

bool	Fixed::operator==(const Fixed &value)
{
	return (this->toFloat() == value.toFloat());
}

bool	Fixed::operator!=(const Fixed &value)
{
	return (this->toFloat() != value.toFloat());
}

Fixed	Fixed::operator+(const Fixed &value)
{
	return (Fixed(this->toFloat() + value.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &value)
{
	return (Fixed(this->toFloat() - value.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &value)
{
	return (Fixed(this->toFloat() * value.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &value)
{
	return (Fixed(this->toFloat() / value.toFloat()));
}

Fixed	&Fixed::operator++( void )
{
	this->setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	this->setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	old_value(*this);

	this->setRawBits(getRawBits() + 1);
	return (old_value);
}

Fixed	Fixed::operator--( int )
{
	Fixed	old_value(*this);

	this->setRawBits(getRawBits() - 1);
	return (old_value);
}

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	if (a.toFloat() < b.toFloat()) return (a);
	else return (b);
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b )
{
	if (a.toFloat() < b.toFloat()) return (a);
	else return (b);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	if (a.toFloat() > b.toFloat()) return (a);
	else return (b);
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b )
{
	if (a.toFloat() > b.toFloat()) return (a);
	else return (b);
}
