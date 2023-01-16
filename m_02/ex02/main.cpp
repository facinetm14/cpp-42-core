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
#include "Fixed.hpp"

std::string assert_message(bool a)
{
	std::string out;
	out = a ? "Yes\n" : "No\n"; 
	return out;
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "Value a: and b" << a << b << std::endl;
	std::cout << "a < b ? : " << assert_message((a < b));
	std::cout << "a <= b ? : " << assert_message((a <= b));
	std::cout << "a > b ? : " << assert_message((a > b));
	std::cout << "a >= b ? : " << assert_message((a >= b));
	std::cout << "a == b ? : " << assert_message(a == b);
	std::cout << "a != b ? : " << assert_message(a != b);
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a * b << std::endl;
	std::cout << "Value a: "<< a << std::endl;
	std::cout << "Pre-incrementation a: " << ++a << std::endl;
	std::cout << "Value a: "<< a << std::endl;
	std::cout << "Post-incrementation a: " << a++ << std::endl;
	std::cout << "Value a: "<< a << std::endl;
	std::cout << "Value b : " << b << std::endl;
	std::cout << "Max (a, b): " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min (a, b): " << Fixed::min( a, b ) << std::endl;
	return 0;
}
