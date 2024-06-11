/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:37:12 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 04:45:17 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = value * (1 << _fractionalBits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;	
}

float Fixed::toFloat(void) const
{
	std::cout << "Float constructor called"	<< std::endl;
	return (float)_rawBits / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	std::cout << "Int constructor called" << std::endl;
	return _rawBits / (1 << _fractionalBits);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const Fixed& other)
{
	std::cout << other.toFloat();
	return stream;
}