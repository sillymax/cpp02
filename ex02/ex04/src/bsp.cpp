/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 23:23:16 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/12 00:22:59y sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

static Fixed ft_abs(const Fixed& other)
{
	return other >= 0 ? other : other * Fixed(-1);
}

static Fixed area(const Point& a, const Point& b, const Point& c)
{
	return ft_abs(a.getX() * (b.getY() - c.getY()) +
			b.getX() * (c.getY() - a.getY()) +
			c.getX() * (a.getY() - b.getY())) * Fixed(0.5f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(a, point, c);
	Fixed A3 = area(a, b, point);
    return (A == A1 + A2 + A3);
}
