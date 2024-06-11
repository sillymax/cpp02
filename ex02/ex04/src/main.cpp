/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sillymax <sillymax@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:47:58 by sillymax          #+#    #+#             */
/*   Updated: 2024/06/12 02:54:32 by sillymax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"
#include <iostream>

int main(void)
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point point(10, 15);

	if (bsp(a, b, c, point))
		std::cout << "inside" << std::endl;
	else
		std::cout << "outside" << std::endl;
	
}