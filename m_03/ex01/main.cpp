/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:52:30 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/07 01:39:12 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main ( void )
{
	std::cout << "-----------------------------------------------------------------------------------------\n";
	std::cout << "|                      TEST CONSTRUCTORS                                                |\n";                                             
	std::cout << "-----------------------------------------------------------------------------------------\n";
	ScavTrap clap("Hiters");
	std::cout << "Attributs values : \n";
	std::cout << "name : " << clap.getName() << "\n";
	std::cout << "Hit Point : " << clap.getHitPoints() << "\n";
	std::cout << "energy Points : " << clap.getEnergyPoints() << "\n";
	std::cout << "Attack Damage: " << clap.getAttackDamage() << "\n";
	std::cout << "-----------------------------------------------------------------------------------------\n";
	std::cout << "|                      TEST MEMBERS FUNCTIONS                                           |\n";                                             
	std::cout << "-----------------------------------------------------------------------------------------\n";
	clap.setAttackDamage(10);
	ClapTrap looser("Looser");
	clap.attack("Looser");
	looser.takeDamage(10);
	std::cout << "hit_point daemond after attack : " << clap.getHitPoints() << "\n";
	std::cout << "hit_point looser after attack : " << looser.getHitPoints() << "\n";
	looser.setEnergyPoints(0);
	looser.setHitPoints(1);
	looser.beRepaired(20);
	looser.setEnergyPoints(2);
	looser.beRepaired(20);
	clap.guardGate();
	std::cout << "-----------------------------------------------------------------------------------------\n";
	std::cout << "|                      TEST DESTRUCTORS                                                 |\n";                                             
	std::cout << "-----------------------------------------------------------------------------------------\n";
	return (0);
}
