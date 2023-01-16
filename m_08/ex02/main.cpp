/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:14:04 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/11 23:14:04 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iomanip>
#include <list>

#define RED "\033[31;1m"
#define GREEN "\033[32;1m"
#define DEFAULT "\033[0m"

int main()
{
    MutantStack<int> mutant;
	std::list<int> std_list;
	int nb;
	for (int i = 0; i < 20; i++)
	{
		nb = (i % 2) ? i * 3 : i;
		mutant.push(nb);
		std_list.push_back(nb);
	}

	MutantStack<int>::Iterator iter_begin = mutant.begin(), iter_end = mutant.end();
	std::list<int>::iterator iter_begin_1 = std_list.begin(), iter_end_1 = std_list.end();

	std::cout << "--------------TEST LIST VS MY STACK-----------------\n";
	int item, expected;
	while (iter_begin != iter_end && iter_begin_1 != iter_end_1)
	{
		
		item = *iter_begin;
		expected = *iter_begin_1;
		std::cout << "Items ==> std::list " << std::setw(5) << expected << " MutanStack " << std::setw(5) << item << " ";
		if (expected == item)
			std::cout << GREEN << "OK" << DEFAULT;
		else
			std::cout << RED << "KO" << DEFAULT;
		std::cout << "\n";
		iter_begin++;
		iter_begin_1++;
	}
	return (0);
}