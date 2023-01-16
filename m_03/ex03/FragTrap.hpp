/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:33:10 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/07 01:28:44 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	protected:
		std::string _name;
	public:
		FragTrap( void );
		FragTrap( std::string name);
		~FragTrap( void );
		void	highFivesGuys( void );
};

#endif