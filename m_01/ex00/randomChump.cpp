/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:37:20 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/22 03:37:20 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void    randomChump(std::string name)
{
	Zombie *Zombie = newZombie(name);
	Zombie->announce();
	delete Zombie;
}