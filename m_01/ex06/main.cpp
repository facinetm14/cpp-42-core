/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:59:36 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/23 04:23:53 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid arguments !\n";
		return (1);
	}
	Harl harl;
	harl.hFilter(argv[1]);
	return (0);
}