/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:50:07 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/11 23:50:07 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(void) : _size(0), _nb_item(0){}

Span::Span(int nb) :_size(nb), _nb_item(0){}

Span::Span(Span const & src) { *this = src; }

Span & Span::operator=(Span const & src)
{
	this->_nb_item = src._nb_item;
	this->_size = src._size;
	this->_arr = src._arr;
	return *this;
}

Span::~Span(){}

void Span::addNumber(int nb)
{
	if (this->_nb_item >= this->_size)
		throw Span::FilledException();
	this->_arr.push_back(nb);
	this->_nb_item += 1;	
}

size_t Span::size() const { return this->_size;}

int	Span::getItem(size_t i) const
{
	return this->_arr[i];
}

int Span::shortestSpan()
{
	if (this->_nb_item <= 1)
		throw Span::NoSpanException();
	size_t i = 0, j = this->_nb_item - 1;
	std::vector<int> tmp = this->_arr;
	std::sort(tmp.begin(), tmp.end());
	int	shortest = tmp[this->_nb_item - 1] - tmp[0];
	while (i < j)
	{
		if (i + 1 <= j)
			shortest = (shortest > (tmp[i + 1] - tmp[i])) ?
				tmp[i + 1] - tmp[i] : shortest;
		if (j - 1 >= i)
			shortest = (shortest > (tmp[j] - tmp[j - 1])) ?
				tmp[j] - tmp[j - 1] : shortest;
		i++;
		j--;
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (this->_nb_item <= 1)
		throw Span::NoSpanException();
	std::vector<int> tmp = this->_arr;
	std::sort(tmp.begin(), tmp.end());
	return tmp[this->_nb_item - 1] - tmp[0];
}