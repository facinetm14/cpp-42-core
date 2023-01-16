/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:59:04 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/22 18:35:24 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string& Weapon::getType( void )
{
	return this->_type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon( std::string type )
{
	this->_type = type;	
}

Weapon::~Weapon( void )
{
	std::cout << "destroyed weapon " << this->_type << "\n";
}