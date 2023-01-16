/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:02:01 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/08 02:06:19 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal( void );
		Animal( Animal& obj );
		Animal& operator=( Animal& obj );
		virtual ~Animal( void );
		
		virtual void makeSound( void ) const;	
		const std::string getType( void ) const;
		void setType( std::string type );
};

#endif