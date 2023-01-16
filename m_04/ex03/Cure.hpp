/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:45:42 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/17 21:27:32 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "Amateria.hpp"
# include "ICharacter.hpp"

class Cure : public Amateria {
	public:
		Cure( void );
		Cure( Cure const & obj);
		Cure & operator=(Cure const & obj);
		~Cure( void );
		
		Cure * clone( void ) const;
		void	use(ICharacter& target);
};

#endif