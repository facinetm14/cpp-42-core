/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:43:19 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/06 23:16:28 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default constructor \n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor \n";
}

void FragTrap::highFivesGuys( void )
{
	if (this->_hitPoints <= 0)
		std::cout << "Dead Already !\n";
	else if (this->_energyPoints <= 0)
		std::cout << "Doesn't have enought energy to request !\n";
	else
		std::cout << "High Five request sent \n";
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called\n";
}