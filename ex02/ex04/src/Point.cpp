/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 23:41:20 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/12 02:36:13 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point() : x(Fixed(0)), y(Fixed(0))
{}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{}

Point::Point(const Point& other) : x(other.getX()), y(other.getY())
{}

Point::~Point()
{}

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
	(void)other;
	return *this;
}
