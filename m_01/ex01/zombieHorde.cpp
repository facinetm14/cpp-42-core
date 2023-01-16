/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:59:35 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/22 03:59:35 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie * zombieHorde(int N, std::string name)
{
    Zombie *zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombieHorde[i].setName(name);
    }
    return (zombieHorde);
}