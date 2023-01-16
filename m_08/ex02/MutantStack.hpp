/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 03:43:35 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/13 03:43:35 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void) {};
        MutantStack(MutantStack const & src) { this->c = src.c; };
        MutantStack & operator=(MutantStack const & src)
        {
            this->c = src.c;
            return (*this);
        };
        ~MutantStack(void) {};
        typedef typename std::stack<T>::container_type::iterator Iterator;
        Iterator begin() { return this->c.begin(); };
        Iterator end() { return this->c.end(); };
};

#endif