/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:10:46 by ychng             #+#    #+#             */
/*   Updated: 2024/06/12 13:16:28 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed ft_abs(Fixed other)
{
	return other < 0 ? other * -1 : other;
}

static Fixed area(const Point a, const Point b, const Point c)
{
	return ft_abs(a.getX() * (b.getY() - c.getY()) +
			b.getX() * (c.getY() - a.getY()) +
			c.getX() * (a.getY() - b.getY())) / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		return false;
	Fixed abcArea = area(a, b, c);
	Fixed pabArea = area(point, a, b);
	Fixed pbcArea = area(point, b, c);
	Fixed pcaArea = area(point, c, a);

	return (abcArea == pabArea + pbcArea + pcaArea);
}