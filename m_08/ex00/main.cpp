/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 01:02:17 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/08 01:02:17 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::list <int> arr(7);
    std::list <int>::iterator a, b;
    arr = {1, 6, 4, 3, 2, 0, 5};
    a = arr.begin();
    b = arr.end();
    int i = 0;
    while (i < 7)
    {
        try
        {
            easyfind(arr, i * 2);
            std::cout << "find " << i * 2 << " in arr : " << GREEN << "OK" << DEFAULT <<"\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "find " << i * 2 << " in arr : " << RED << "KO" << DEFAULT <<"\n";
        }
        
        i ++;
    }

}