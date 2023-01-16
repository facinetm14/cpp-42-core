/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:22:01 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/22 03:22:01 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::getName()
{
    return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie ( void )
{
	std::cout << "new zombie created\n";
}

Zombie::~Zombie( void )
{
	std::cout << "Destroyed " << this->_name << "\n";
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ...\n";
}