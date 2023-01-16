/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:48:40 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/25 19:48:40 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed {
    private :
        int _rawBits;
        static const int _frac_bit;
    public :
        Fixed( void );
        Fixed ( Fixed const &fixedPoint );
        ~Fixed( void );
		Fixed( const int number );
		Fixed(  const float number );

        Fixed&  operator=( Fixed const &fixedPoint );
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
		float   toFloat( void ) const;
		int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream & out, const Fixed &fixedPoint);

#endif
