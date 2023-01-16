/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:15:04 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/06 22:31:34 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap( std::string name )
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap( ClapTrap& obj )
{
	std::cout << "Copy constructor called\n";
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
}

ClapTrap& ClapTrap::operator=( ClapTrap& obj )
{
	std::cout << "assygment copy called\n";
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called \n";
}

void ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void ClapTrap::setHitPoints ( int hit_points )
{
	this->_hitPoints = hit_points;
}

void ClapTrap::setEnergyPoints( int energy_points )
{
	this->_energyPoints = energy_points;
}

void ClapTrap::setAttackDamage( int attack_damage )
{
	this->_attackDamage = attack_damage;
}

const std::string ClapTrap::getName ( void ) const 
{
	return this->_name;
}

const int ClapTrap::getHitPoints( void ) const
{
	return this->_hitPoints;
}

const int ClapTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}

const int ClapTrap::getEnergyPoints( void ) const
{
	return this->_energyPoints;
}

void ClapTrap::attack( const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << "Dead Already \n";
	else if (this->_energyPoints <= 0)
		std::cout << "Doesn't have enought energy to attack\n";
	else if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks ";
		std::cout << target << " causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints -= 1;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints <= 0)
		std::cout << "Dead Already \n";
	else if (this->_hitPoints - amount <= 0)
	{
		std::cout << "Dead in last hits !\n";
		this->_hitPoints = 0;
	}
	else
	{
		std::cout << amount << " damage took\n";
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired ( unsigned int amount )
{
	if (this->_hitPoints <= 0)
		std::cout << "Dead Already \n";
	else if (this->_energyPoints <= 0)
		std::cout << "Doesn't have enought energy to be repaired !\n";
	else
	{
		std::cout << amount << " gained throught reparation \n";
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}
