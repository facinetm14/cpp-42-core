/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:58:11 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/23 01:58:11 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl {
    private :
        void debug( void );
        void info( void );
        void warning ( void );
        void error( void );
    public :
        void complain( std::string level );
        Harl( void );
        ~Harl( void );
};

#endif