/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:42:18 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/22 03:42:18 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int     main( void )
{
    Zombie* zombies = zombieHorde(7, "Petit");
    for (int i = 0; i < 7; i++)
    {
        zombies[i].announce();
    }
    delete [] zombies;
}