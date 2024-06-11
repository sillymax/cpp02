/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 23:32:58 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/12 02:52:57 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

class Fixed
{
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& other);
	~Fixed();

	float toFloat(void) const;
	int getRawBits(void) const;

	Fixed& operator=(const Fixed& other);
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator>(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;

	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;
private:
	int _rawBits;
	static const int _fractionalBits;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);

#endif