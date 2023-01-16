/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:59:36 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/22 18:48:00 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main ( void )
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob = HumanA("Bob", club);
	bob.attack();
	club.setType("Some other type of club");
	bob.attack();
	Weapon club2 = Weapon("crude spiked club");
	HumanB jim = HumanB("Jim");
	jim.setWeapon(club2);
	jim.attack();
	club2.setType("Some other type of club");
	jim.attack();
	return (0);
}