/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:30:06 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/08 01:17:34 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->_type = "Cat";
	std::cout << "Default constructor Cat called \n";
}

Cat::Cat( Cat& obj) : Animal(obj)
{
	this->_type = "Cat";
	std::cout << "Copy constructor Cat called \n";
}

Cat& Cat::operator=( Cat& obj)
{
	this->_type = "Cat";
	std::cout << "Asigment constructor Cat called \n";
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Miou!!!\n";
}

Cat::~Cat( void )
{
	std::cout << "Destructor cat called !\n";
}