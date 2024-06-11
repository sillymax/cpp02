/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 04:42:26 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 08:13:59 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>


class Fixed
{
public:
	Fixed();
	Fixed(const float value);
	Fixed(const int value);
	Fixed(const Fixed& other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(const int value);

	float toFloat(void) const;
	int toInt(void) const;

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

	Fixed& operator++();
	Fixed operator++(int); // postfix form
	Fixed& operator--();
	Fixed operator--(int); // postfix form

	static const Fixed& min(Fixed& num1, Fixed& num2);
	static const Fixed& min(const Fixed& num1, const Fixed& num2);
	static const Fixed& max(Fixed& num1, Fixed& num2);
	static const Fixed& max(const Fixed& num1, const Fixed& num2);
private:
	int _rawBits;
	static const int _fractionalBits;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);

#endif