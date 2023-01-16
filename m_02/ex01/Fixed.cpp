/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:04:16 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/25 20:04:16 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: _frac_bit = 8;

Fixed::Fixed( void )
{
    std::cout << "Default constructor called\n";
    this->_rawBits = 0;
}

Fixed::Fixed( Fixed const &fixedPoint )
{
    std::cout << "Copy constructor called\n";
    *this = fixedPoint;
}

Fixed& Fixed::operator=( Fixed const &fixedPoint )
{
    std::cout << "Copy assignment operator called\n";
    this->_rawBits = fixedPoint.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return this->_rawBits;
}

void Fixed::setRawBits( int const raw)
{
    this->_rawBits = raw;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed( const int number )
{
	std::cout << "Int constructor called\n";
	this->_rawBits = number << this->_frac_bit;
}

Fixed::Fixed( const float number )
{
	std::cout << "Float constructor called\n";
	this->_rawBits = roundf(number * (1 << this->_frac_bit));
}

float	Fixed::toFloat( void ) const 
{
	return (float)this->_rawBits / (float)(1 << this->_frac_bit);
}

int	Fixed::toInt( void ) const 
{
	return this->_rawBits >> this->_frac_bit;
}

std::ostream &  operator<<(std::ostream & out, const Fixed& fixedPoint)
{
	out << fixedPoint.toFloat();
	return (out);
}

