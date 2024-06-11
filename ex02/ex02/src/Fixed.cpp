/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 04:48:41 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 08:20:26y sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0)
{
}


Fixed::Fixed(const Fixed& other)
{
	*this = other;
}


Fixed::Fixed(const float value)
{
	_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const int value)
{
	_rawBits = value * (1 << _fractionalBits);
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
	_rawBits = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return _rawBits;
}

void Fixed::setRawBits(const int value)
{
	_rawBits = value;
}

float Fixed::toFloat(void) const
{
	return (float)_rawBits / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _rawBits / (1 << _fractionalBits);
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

Fixed& Fixed::operator++()
{
	_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed copy = *this;
	operator++();
	return copy;
}

Fixed& Fixed::operator--()
{
	_rawBits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed copy = *this;
	operator--();
	return copy;
}

const Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return num1;
	return num2;
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return num1;
	return num2;
}

const Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return num1;
	return num2;
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return num1;
	return num2;
}

std::ostream& operator<<(std::ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return stream;
}
