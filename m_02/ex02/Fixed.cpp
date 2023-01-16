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
    this->_rawBits = 0;
}

Fixed::Fixed( Fixed const &fixedPoint )
{
    *this = fixedPoint;
}

Fixed& Fixed::operator=( Fixed const &fixedPoint )
{
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

}

Fixed::Fixed( const int number )
{
	this->_rawBits = number << this->_frac_bit;
}

Fixed::Fixed( const float number )
{
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

std::ostream&  operator<<(std::ostream & out, const Fixed& fixedPoint)
{
	out << fixedPoint.toFloat();
	return (out);
}

bool Fixed::operator>(Fixed const &fp_2)
{
	return ((this->getRawBits() > fp_2.getRawBits()) ? true : false);
}

bool Fixed::operator<(Fixed const &fp_2)
{
	return ((this->getRawBits() < fp_2.getRawBits()) ? true : false);
}

bool Fixed::operator>=(Fixed const &fp_2)
{
	return ((this->getRawBits() >= fp_2.getRawBits()) ? true : false);
}

bool Fixed::operator<=(Fixed const &fp_2)
{
	return ((this->getRawBits() <= fp_2.getRawBits()) ? true : false);
}

bool Fixed::operator!=(Fixed const &fp_2)
{
	return ((this->getRawBits() != fp_2.getRawBits()) ? true : false);
}

bool Fixed::operator==(Fixed const &fp_2)
{
	return ((this->getRawBits() == fp_2.getRawBits()) ? true : false);
}

Fixed Fixed::operator*(Fixed const &fp_2)
{
	Fixed result(this->toFloat() * fp_2.toFloat());
	return result;
}

Fixed Fixed::operator+(Fixed const &fp_2)
{
	Fixed result(this->toFloat() + fp_2.toFloat());
	return result;
}

Fixed Fixed::operator-(Fixed const &fp_2)
{
	Fixed result(this->toFloat() - fp_2.toFloat());
	return result;
}

Fixed Fixed::operator/(Fixed const &fp_2)
{
	Fixed result(this->toFloat() / fp_2.toFloat());
	return result;
}

Fixed& Fixed::operator++( void )
{
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed result(*this);
	this->_rawBits++;
	return result;
}

Fixed& Fixed::operator--( void )
{
	this->_rawBits--;
	return(*this);
}

Fixed Fixed::operator--( int )
{
	Fixed result(*this);
	this->_rawBits--;
	return result;
}

Fixed& Fixed::min(Fixed& fp, Fixed& fp_2)
{
	return ((Fixed(fp) < Fixed(fp_2)) ? fp : fp_2);
}

const Fixed& Fixed::min(Fixed const &fp, Fixed const &fp_2)
{
	return ((Fixed(fp) < Fixed(fp_2)) ? fp : fp_2);
}

Fixed& Fixed::max(Fixed& fp, Fixed& fp_2)
{
	return ((Fixed(fp) > Fixed(fp_2)) ? fp : fp_2);
}

const Fixed& Fixed::max(Fixed const &fp, Fixed const &fp_2)
{
	return ((Fixed(fp) > Fixed(fp_2)) ? fp : fp_2);
}