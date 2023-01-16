/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:40:22 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/17 22:40:59 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "Amateria.hpp"
# include "ICharacter.hpp"

class Ice : public Amateria {
	public:
		Ice( void );
		Ice( Ice const & obj);
		Ice & operator=(Ice const & obj);
		~Ice( void );
		
		Ice * clone( void ) const;
		void	use(ICharacter& target);
};

#endif