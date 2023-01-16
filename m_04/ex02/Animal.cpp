/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:19:28 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/08 02:06:09 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	this->_type = "";
	std::cout << "Default constructor Animal called \n";
}

Animal::Animal(Animal& obj)
{
	this->_type = obj._type;
	std::cout << "Copy constructor Animal called \n";	
}

Animal::~Animal( void )
{
	std::cout << "Destructor Animal called \n";
}

Animal& Animal::operator=(Animal &obj)
{
	this->_type = obj._type;
	std::cout << "Assigment constructor Animal called \n";
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << "Animal crying !\n";
}

const std::string Animal::getType( void ) const
{
	return (this->_type);
}	

void Animal::setType( std::string type)
{
	this->_type = type;
}