/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 01:02:38 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/08 01:02:38 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

# define RED "\033[31;1m"
# define GREEN "\033[32;1m"
# define DEFAULT "\033[0m;"

class NotFound : public std::exception 
{
	public:
		const char *what() const throw()
		{
			return "Element not found\n";
		}
};

template <typename T>
typename T::iterator easyfind(T & tab, int const to_find)
{
    typename T ::iterator iter;
	iter =  find(tab.begin(), tab.end(), to_find);
	if (iter == tab.end())
		throw NotFound();
	return iter;
}

#endif