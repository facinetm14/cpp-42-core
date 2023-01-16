/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:55:34 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/07 02:55:34 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct Data
{
   int nb_men;
   int nb_women;
   int nb_total; 
}           Data;

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast <uintptr_t> (ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast <Data *> (raw);
}

int main()
{
    Data data;

    data.nb_men = 10;
    data.nb_women = 20;
    data.nb_total = 30;

     std::cout << "nb_men : " << data.nb_men << "\n";
    std::cout << "nb_women: " << data.nb_women << "\n";
    std::cout << "nb_total : " << data.nb_total << "\n";
    uintptr_t result = serialize(&data);
    std::cout << "Serialized value : " << result << "\n";
    Data *data2 = deserialize(result);
    std::cout << "Deserialized value : " << data2->nb_men << "\n";
    std::cout << "Deserialized value : " << data2->nb_women << "\n";
    std::cout << "Deserialized value : " << data2->nb_total << "\n";
    return (0);
}