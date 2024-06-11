/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:35:43 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 22:50:06 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed();
	Fixed(const float value);
	Fixed(const int value);
	Fixed(const Fixed& other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int value);

	Fixed& operator=(const Fixed& other);
private:
	int _rawBits;
	static const int _fractionalBits;
};

#endif