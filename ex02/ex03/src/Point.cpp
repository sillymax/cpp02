/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:45:44 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 22:54:12 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <ostream>

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{
}

Point::Point(const Point& other) : x(other.getX()), y(other.getY())
{
}

Point::~Point()
{
}

const Fixed Point::getX(void) const
{
	return x;
}

const Fixed Point::getY(void) const
{
	return y;
}

Point& Point::operator=(const Point& other)
{
}

std::ostream& operator<<(std::ostream& stream, const Point& other)
{
	stream << "x: " << other.getX() << ", y: " << other.getY();
	return stream;
}