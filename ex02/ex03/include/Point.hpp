/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:42:37 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 22:54:37 by sillymax         ###   ########.fr       */
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

	const Fixed getX(void) const;
	const Fixed getY(void) const;

	Point& operator=(const Point& other);
private:
	const Fixed x;
	const Fixed y;

};

std::ostream& operator<<(std::orstream& stream, const Point& other);

#endif