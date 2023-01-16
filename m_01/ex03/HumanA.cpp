/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:07:17 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/22 18:35:16 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

void HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their ";
	std::cout << (this->_weapon)->getType() << "\n";
}

HumanA::~HumanA( void )
{
	std::cout << "Destroyed " << this->_name << "\n";
}