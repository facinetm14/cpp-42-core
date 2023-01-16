/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:16:23 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/17 22:50:47 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class Amateria {
	protected:
		std::string _type;
	public :
		Amateria(std::string const & type);
		Amateria(Amateria const & obj);
		Amateria( void );
		virtual ~Amateria( void );
		
		std::string const & getType() const;
		
		virtual Amateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif