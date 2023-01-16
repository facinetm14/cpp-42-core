/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:21:43 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/06 23:17:36 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called\n";
} 

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called\n";
} 

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called \n";
}

void	ScavTrap::guardGate( void )
{
	if (this->_hitPoints <= 0)
		std::cout << "Dead Already !\n";
	else if (this->_energyPoints <= 0)
		std::cout << "Doesn't have enought energy to request !\n";
	else
		std::cout << "ScavTrap is now in Gatekeeper mode \n";
}