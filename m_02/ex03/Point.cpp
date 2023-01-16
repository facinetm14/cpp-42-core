/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:27:12 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/30 21:26:10 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(Fixed(0)), y(Fixed(0))
{
	
}

Point::Point(const float nb1, const float nb2) : x(Fixed(nb1)), y(Fixed(nb2))
{

}

Point::Point(Point const &point) : x(point.getX()), y(point.getY())
{

}

Point & Point::operator=( Point const &point) 
{
	return (*this);
}

Fixed const & Point::getX( void ) const
{
	return this->x;
}

Fixed const & Point::getY( void ) const
{
	return this->y;
}

Point::~Point( void )
{
	
}