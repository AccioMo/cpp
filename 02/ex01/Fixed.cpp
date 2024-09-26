/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:33:48 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/09/26 00:25:51 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(int_value << _fractional_bits);
}

Fixed::Fixed(const float float_value)
{
	std::cout << "Float constructor called" << std::endl;
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
