/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:39:08 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/07 05:39:08 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WATHEVER_HPP
# define WATHEVER_HPP
# include <iostream>

template <typename T>
void swap(T & a, T & b)
{
    T tmp;
    tmp = b;
    b = a;
    a = tmp;
}

template <typename T>
T const & min(T & a, T & b)
{
    return (a < b) ? a : b;
}

template <typename T>
T const & max (T & a, T & b)
{
    return (a > b) ? a : b;
}

#endif