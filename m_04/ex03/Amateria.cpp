/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:34:31 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/17 22:04:42 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

Amateria::Amateria( void )
{
	this->_type = "";
	std::cout << "Amateria default constructor called\n";
}
Amateria::~Amateria(void)
{
	std::cout << "Amateria destructor called\n";
}

Amateria::Amateria(std::string const & type)
{
	this->_type = type;
	std::cout << "Amateria constructor with name called\n";
}

Amateria::Amateria(Amateria const & obj)
{
	*this = obj;
	std::cout << "Amateria copy constructor called\n";
}  

std::string const & Amateria::getType() const
{
	return (this->_type);
}

