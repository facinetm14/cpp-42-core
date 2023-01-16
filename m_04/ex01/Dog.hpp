/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:12:34 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/14 17:07:11 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal {
	private:
		Brain *_brain;
	public:
		Dog( void );
		Dog( Dog& obj );
		Dog& operator=( Dog& obj );
		virtual ~Dog( void );
		
		void makeSound( void ) const;
		Brain* getBrain( void );
		
};

#endif