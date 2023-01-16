/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:30:06 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/08 01:17:27 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->_type = "Dog";
	std::cout << "Default constructor Dog called \n";
}

Dog::Dog( Dog& obj) : Animal(obj)
{
	this->_type = "Dog";
	std::cout << "Copy constructor Dog called \n";
}

Dog& Dog::operator=( Dog& obj)
{
	this->_type = "Dog";
	std::cout << "Asigment constructor Dog called \n";
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "Wow!!! \n";
}

Dog::~Dog( void )
{
	std::cout << "Destructor Dog called !\n";
}