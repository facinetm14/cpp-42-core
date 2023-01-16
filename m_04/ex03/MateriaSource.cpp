/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:41:54 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/18 00:44:38 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	std::cout << "MateriaSource default constructor called \n";
}

MateriaSource::MateriaSource(MateriaSource const & obj)
{
	*this = obj;
	std::cout << "MateriaSource copy constructor called \n";
}

MateriaSource& MateriaSource::operator=(MateriaSource const & obj)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = obj._materias[i];
	std::cout << "MateriaSource asigment constructor called \n";
	return (*this);
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		delete this->_materias[i];
	std::cout << "MateriaSource destructor called \n";
}

void MateriaSource::learnMateria(Amateria* tmp)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = tmp;
			return ;
		}
	}
	delete tmp;
}

Amateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (0);
}