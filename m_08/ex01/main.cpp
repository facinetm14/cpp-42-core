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

#include "Span.hpp"
#include <vector>
#include <iomanip>
#include <cstdlib>

int main()
{
    std::vector<int> arr(10);
    Span arr2(10);
	std::cout << "--------------TEST size()-----------------\n";
    std::cout <<"std::vector : " << std::setw(5) << arr.size() << "  ";
    std::cout << "Span : " << std::setw(5) << arr2.size() << "  ";
    if (arr2.size() == arr.size())
        std::cout << GREEN << "OK" << DEFAULT;
    else
        std::cout << RED << "KO" << DEFAULT;
    std::cout << "\n\n";
	int nb;
	size_t len = arr.size();
	size_t i = 0;
	std::cout << "--------------TEST addNumber()-----------------\n";
	while (i < len)
	{
		nb = (i % 2) ? i + 1 : i + 3; 
		arr[i] = nb;
		try
		{
			arr2.addNumber(nb);
		}
		catch(std::exception & err)
		{
			std::cout << err.what() << "\n";
		}
		i++;
	}

	for (size_t i = 0; i < len; i++)
	{
		    std::cout <<"std::vector : " << std::setw(5) << arr[i] << "  ";
    		std::cout << "Span : " << std::setw(5) << arr2.getItem(i) << "  ";
			if (arr2.getItem(i) == arr[i])
        		std::cout << GREEN << "OK" << DEFAULT;
			else
				std::cout << RED << "KO" << DEFAULT;
			std::cout << "\n";
	}

	std::cout << "--------------TEST shortest()-----------------\n";
	int shortest = arr2.shortestSpan();
	int expected = 1;
	std::cout << "ShortestSpan ==> expected " << std::setw(5) << expected << " output " << std::setw(5) << shortest << " ";
	if (expected == shortest)
        std::cout << GREEN << "OK" << DEFAULT;
    else
        std::cout << RED << "KO" << DEFAULT;
	std::cout << "\n\n";
	std::cout << "--------------TEST longest()-----------------\n";
	int longest = arr2.longestSpan();
	expected = 9;
	std::cout << "ShortestSpan ==> expected " << std::setw(5) << expected << " output " << std::setw(5) << longest << " ";
	if (expected == longest)
        std::cout << GREEN << "OK" << DEFAULT;
    else
        std::cout << RED << "KO" << DEFAULT;
	std::cout << "\n\n";
	{
		std::cout << " **      PROVIDED TEST    **\n";
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "--------------TEST shortest()-----------------\n";
		int shortest = sp.shortestSpan();
		int expected = 2;
		std::cout << "ShortestSpan ==> expected " << std::setw(5) << expected << " output " << std::setw(5) << shortest << " ";
		if (expected == shortest)
			std::cout << GREEN << "OK" << DEFAULT;
		else
			std::cout << RED << "KO" << DEFAULT;
		std::cout << "\n\n";
		std::cout << "--------------TEST longest()---------------------\n\n";
		int longest = sp.longestSpan();
		expected = 14;
		std::cout << "ShortestSpan ==> expected " << std::setw(5) << expected << " output " << std::setw(5) << longest << " ";
		if (expected == longest)
			std::cout << GREEN << "OK" << DEFAULT;
		else
			std::cout << RED << "KO" << DEFAULT;
		std::cout << "\n\n";
	}
}