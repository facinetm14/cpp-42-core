/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 02:16:33 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/09 13:27:12 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain( void );
		Brain( Brain &obj );
		Brain& operator=( Brain& obj );
		~Brain( void );
		void setIdeas( std::string idea, int indice );
		const std::string getIdea( int indice ) const;
		
};

#endif