/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:29:03 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/07 01:31:54 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	this->ClapTrap::setName(name + "_clap_name");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	std::cout << "DiamondTrap constructor called\n";
}

void DiamondTrap::setHitPoints ( int hit_points )
{
	this->FragTrap::setHitPoints(hit_points);
}

void DiamondTrap::setEnergyPoints( int energy_points )
{
	this->ScavTrap::setEnergyPoints(energy_points);
}

void DiamondTrap::setAttackDamage( int attack_damage )
{
	this->FragTrap::setAttackDamage(attack_damage);
}

const int DiamondTrap::getHitPoints( void ) const
{
	return this->FragTrap::getHitPoints();
}

const int DiamondTrap::getAttackDamage( void ) const
{
	return this->FragTrap::getAttackDamage();
}

const int DiamondTrap::getEnergyPoints( void ) const
{
	return this->ScavTrap::getEnergyPoints();
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called\n";
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << this->_name;
	std::cout << " and ClapTrap name is : " << this->ClapTrap::getName() << "\n";
}

const std::string DiamondTrap::getName ( void ) const 
{
	return this->_name;
}
