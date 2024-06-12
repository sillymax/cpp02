/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:14:38 by ychng             #+#    #+#             */
/*   Updated: 2024/06/12 13:12:25 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <ostream>

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


int Fixed::getRawBits(void) const
{
	return _rawBits;
}

void Fixed::setRawBits(const int raw)
{
	_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return (float)_rawBits / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _rawBits / (1 << _fractionalBits);
}
Fixed& Fixed::operator=(const Fixed& other)
{
	setRawBits(other.getRawBits());
	return *this;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(toFloat() / other.toFloat());
}

bool Fixed::operator<(const Fixed& other) const
{
    return getRawBits() < other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const
{
	return getRawBits() == other.getRawBits();

}

std::ostream& operator<<(std::ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return stream;
}
