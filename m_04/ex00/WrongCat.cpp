/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:30:06 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/08 01:16:23 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "Default constructor WrongCat called \n";
}

WrongCat::WrongCat( WrongCat& obj) : WrongAnimal(obj)
{
	this->_type = "WrongCat";
	std::cout << "Copy constructor WrongCat called \n";
}

WrongCat& WrongCat::operator=( WrongCat& obj)
{
	this->_type = "WrongCat";
	std::cout << "Asigment constructor WrongCat called \n";
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Miou!!!\n";
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor wrong cat called !\n";
}