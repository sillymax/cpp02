/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 23:33:54 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/12 02:51:45 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0)
{}

Fixed::Fixed(const int value)
{
	_rawBits = value * (1 << _fractionalBits);
}

Fixed::Fixed(const float value)
{
	_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::~Fixed()
{}

float Fixed::toFloat(void) const
{
	return (float)_rawBits / (1 << _fractionalBits);
}

int Fixed::getRawBits(void) const
{
	return _rawBits;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	_rawBits = other.getRawBits();
	return *this;
}

bool Fixed::operator==(const Fixed& other) const
{
	return _rawBits == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const
{
	return !(_rawBits == other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
	return _rawBits < other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const
{
	return !(_rawBits < other.getRawBits());
}

bool Fixed::operator>(const Fixed& other) const
{
	return _rawBits > other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const
{
	return !(_rawBits > other.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(_rawBits + other.getRawBits());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(_rawBits - other.getRawBits());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(_rawBits / other.getRawBits());
}