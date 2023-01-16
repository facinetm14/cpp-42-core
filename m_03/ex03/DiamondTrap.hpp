/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:47:31 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/07 01:10:05 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private :
		std::string _name;
	
	public :
		DiamondTrap( void );
		DiamondTrap( std::string name);
		DiamondTrap( DiamondTrap const &obj);
		~DiamondTrap( void );
		DiamondTrap & operator=(DiamondTrap const &obj);
		
		void	whoAmI( void );
		
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