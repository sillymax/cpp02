/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:01:56 by ychng             #+#    #+#             */
/*   Updated: 2024/06/12 13:20:45 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{}

Point::Point(const float x, const float y) : x(x), y(y)
{}

Point::Point(const Point& other) : x(other.getX()), y(other.getY())
{}

Point::~Point()
{}

Fixed Point::getX(void) const
{
	return x;
}

Fixed Point::getY(void) const
{
	return y;
}

Point& Point::operator=(const Point& other)
{
	if (this == &other)
		return *this;
	return *this;
}

bool Point::operator==(const Point& other) const
{
	return (x == other.getX() && y == other.getY());
}

