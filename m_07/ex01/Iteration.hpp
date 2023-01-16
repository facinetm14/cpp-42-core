/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iteration.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:35:58 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/07 18:35:58 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATION
# define ITERATION

template <typename T>
void iter(T const *arr, int len, void(*callback)(T const & item))
{
    for(int i = 0; i < len; i++)
        callback(arr[i]);
}

void print_item(std::string const & item)
{
    std::cout << item << "\n";
}

void say_hello(std::string const & str)
{
    std::cout << "Say Hello" << str << "\n";
}

#endif