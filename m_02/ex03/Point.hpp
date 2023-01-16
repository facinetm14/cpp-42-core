/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:14:25 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/30 18:57:51 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point( void );
		Point( const float nb1, const float nb2 );
		Point( Point const &point);	
		Point & operator=( Point const &point );
		~Point( void );
		Fixed const & getX( void ) const;
		Fixed const & getY(void ) const;
		
		
};

#endif