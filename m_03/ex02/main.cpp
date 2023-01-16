/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:52:30 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/07 02:34:24 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main ( void )
{
	{
		std::cout << "-----------------------------------------------------------------------------------------\n";
		std::cout << "|                 ScavTrap CLASS                                                         |\n";
		std::cout << "-----------------------------------------------------------------------------------------\n";
		std::cout << "|                      TEST CONSTRUCTORS                                                |\n";                                             
		std::cout << "-----------------------------------------------------------------------------------------\n";
		ScavTrap clap("SCA_Hiters");
		std::cout << "Attributs values : \n";
		std::cout << "name : " << clap.getName() << "\n";
		std::cout << "Hit Point : " << clap.getHitPoints() << "\n";
		std::cout << "energy Points : " << clap.getEnergyPoints() << "\n";
		std::cout << "Attack Damage: " << clap.getAttackDamage() << "\n";
		std::cout << "-----------------------------------------------------------------------------------------\n";
		std::cout << "|                      TEST MEMBERS FUNCTIONS                                           |\n";                                             
		std::cout << "-----------------------------------------------------------------------------------------\n";
		clap.setAttackDamage(10);
		ScavTrap looser("Looser");
		clap.attack("Looser");
		looser.takeDamage(10);
		std::cout << "hit_point daemond after attack : " << clap.getHitPoints() << "\n";
		std::cout << "hit_point looser after attack : " << looser.getHitPoints() << "\n";
		looser.setEnergyPoints(0);
		looser.setHitPoints(1);
		looser.beRepaired(20);
		looser.setEnergyPoints(2);
		looser.beRepaired(20);
		std::cout << "hit_point after repaired " << clap.getHitPoints() << "\n";
		std::cout << "-----------------------------------------------------------------------------------------\n";
		std::cout << "|                      TEST DESTRUCTORS                                                 |\n";                                             
		std::cout << "-----------------------------------------------------------------------------------------\n\n";
	}
	{
		std::cout << "-----------------------------------------------------------------------------------------\n";
		std::cout << "|                 FragTrap CLASS                                                        |\n";
		std::cout << "-----------------------------------------------------------------------------------------\n";
		std::cout << "|                      TEST CONSTRUCTORS                                                |\n";                                             
		std::cout << "-----------------------------------------------------------------------------------------\n";
		FragTrap clap("SCA_Hiters");
		std::cout << "Attributs values : \n";
		std::cout << "name : " << clap.getName() << "\n";
		std::cout << "Hit Point : " << clap.getHitPoints() << "\n";
		std::cout << "energy Points : " << clap.getEnergyPoints() << "\n";
		std::cout << "Attack Damage: " << clap.getAttackDamage() << "\n";
		std::cout << "-----------------------------------------------------------------------------------------\n";
		std::cout << "|                      TEST MEMBERS FUNCTIONS                                           |\n";                                             
		std::cout << "-----------------------------------------------------------------------------------------\n";
		clap.setAttackDamage(10);
		FragTrap looser("Looser");
		clap.attack("Looser");
		looser.takeDamage(10);
		std::cout << "hit_point daemond after attack : " << clap.getHitPoints() << "\n";
		std::cout << "hit_point looser after attack : " << looser.getHitPoints() << "\n";
		looser.setEnergyPoints(0);
		looser.setHitPoints(1);
		looser.beRepaired(20);
		looser.setEnergyPoints(2);
		looser.beRepaired(20);
		std::cout << "hit_point after repaired " << clap.getHitPoints() << "\n";
		clap.highFivesGuys();
		std::cout << "-----------------------------------------------------------------------------------------\n";
		std::cout << "|                      TEST DESTRUCTORS                                                 |\n";                                             
		std::cout << "-----------------------------------------------------------------------------------------\n";
	}
	return (0);
}