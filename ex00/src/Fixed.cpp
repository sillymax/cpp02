#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractionBits = 8;

Fixed::Fixed(void) : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}
