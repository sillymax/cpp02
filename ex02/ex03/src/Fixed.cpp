/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:39:41 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 22:50:23 by sillymax         ###   ########.fr       */
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

Fixed::Fixed(const float value)
{
	_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const int value)
{
	_rawBits = value * (1 << _fractionalBits);
} 

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	_rawBits = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return _rawBits;
}

void Fixed::setRawBits(int value)
{
	_rawBits = value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment called" << std::endl;
	return *this;
}
