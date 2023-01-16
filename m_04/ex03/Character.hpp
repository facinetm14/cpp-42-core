/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:30:57 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/17 22:38:15 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "Amateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		Amateria *_inventory[4];
		std::string _name;
	public:
		Character(void);
		Character(Character const & obj);
		Character(std::string name);
		Character& operator=(Character const & obj);
		virtual ~Character(void);
		
		std::string const & getName() const;
		//Amateria const & getInventory(int idx);
		void equip(Amateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif