/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:05:20 by ychng             #+#    #+#             */
/*   Updated: 2024/06/12 13:20:52 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const float x, const float y); 
	Point(const Point& other);
	~Point();

	Fixed getX(void) const;
	Fixed getY(void) const;

	Point& operator=(const Point& other);
	bool operator==(const Point& other) const;
private:
	const Fixed x;
	const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif