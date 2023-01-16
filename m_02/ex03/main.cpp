/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:20:26 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/25 20:20:26 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void assert_bsp(bool bsp_res)
{
	if (bsp_res == true)
		std::cout << "Yes, it's\n";
	else
		std::cout << "No, it's not\n";
}

int main( void ) {
	//given triangle abc
	Point const a(0, 1);
	Point const b(2, 3);
	Point const c(3, 0);

	Point const point(2, 1);
	Point const point2(2, 4);
	Point const point3(3, 0);
	Point const point4(1.5, 1);

	assert_bsp(bsp(a, b, c, point));
	assert_bsp(bsp(a, b, c, point2));
	assert_bsp(bsp(a, b, c, point3));
	assert_bsp(bsp(a, b, c, point4));
	
	return 0;
}
