/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:12:34 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/14 17:05:30 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
class Cat : public Animal {
	private:
		Brain *_brain;
	public:
		Cat( void );
		Cat( Cat& obj );
		Cat& operator=( Cat& obj );
		virtual ~Cat( void );
		
		void makeSound( void ) const;
		Brain* getBrain( void );
};

#endif