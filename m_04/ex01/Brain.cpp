/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:06:20 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/09 13:27:58 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = "Nothing in mind yet!";
		i++;
	}
	std::cout << "Default constructor Brain called !\n";
}

Brain::Brain( Brain& obj )
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = obj.ideas[i];
		i++;
	}
	std::cout << "Copy constructor Brain called !\n";
}

Brain& Brain::operator=( Brain& obj)
{
		int i = 0;
	while (i < 100)
	{
		this->ideas[i] = obj.ideas[i];
		i++;
	}
	std::cout << "Asigment constructor Brain called !\n";
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "destructor Brain called !\n";
}

void Brain::setIdeas( std::string idea, int indice)
{
	if (indice < 0 || indice >= 100)
	{
		std::cout << "error : indice should be between 0 and 99\n";
		return ;
	}	
	this->ideas[indice] = idea;
}

const std::string Brain::getIdea(int indice) const
{
	if (indice < 0 || indice >= 100)
	{
		std::cout << "error : indice should be between 0 and 99\n";
		return "";
	}	
	return this->ideas[indice];
}