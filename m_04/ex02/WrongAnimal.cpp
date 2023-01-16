/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:19:28 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/08 01:07:55 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	this->_type = "";
	std::cout << "Default constructor WrongAnimal called \n";
}

WrongAnimal::WrongAnimal(WrongAnimal& obj)
{
	this->_type = obj._type;
	std::cout << "Copy constructor WrongAnimal called \n";	
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor WrongAnimal called \n";
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &obj)
{
	this->_type = obj._type;
	std::cout << "Assigment constructor WrongAnimal called \n";
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal crying !\n";
}

const std::string WrongAnimal::getType( void ) const
{
	return (this->_type);
}	

void WrongAnimal::setType( std::string type)
{
	this->_type = type;
}