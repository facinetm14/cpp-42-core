/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:40:17 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/18 00:45:10 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource( void );
		MateriaSource(MateriaSource const & obj);
		MateriaSource& operator=(MateriaSource const & obj);
		~MateriaSource( void );
		
		void learnMateria(Amateria* tmp);
		Amateria* createMateria(std::string const & type);
	private:
		Amateria* _materias[4];
};

#endif