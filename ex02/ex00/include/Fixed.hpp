/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 04:45:39 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/11 04:45:40 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed(void);
	Fixed(const Fixed& other);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed& operator=(const Fixed& other);
private:
	int fixedPoint;
	static const int fractionBits;
};

#endif