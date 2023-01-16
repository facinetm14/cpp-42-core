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
    std::cout << "getRawBits member function called\n";
    return this->_rawBits;
}

void Fixed::setRawBits( int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->_rawBits = raw;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called\n";
}
