/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:32:15 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 07:18:50 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	Fixed& operator=(const Fixed& other);
private:
	int _rawBits;
	static const int _fractionalBits;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);



#endif