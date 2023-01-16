/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:00:24 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/06 22:28:11 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>

class ClapTrap {
	protected:
		std::string _name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap& obj);
		ClapTrap& operator=( ClapTrap& obj);
		~ClapTrap( void );
		
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
	
		void	setName(std::string name);
		const  std::string getName( void ) const;
		void	setHitPoints( int hit_points);
		const int	getHitPoints( void ) const;
		void	setEnergyPoints( int energy_points );
		const int	getEnergyPoints( void ) const;
		void	setAttackDamage( int attack_damage );
		const int	getAttackDamage( void ) const;
};

#endif