/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:01:37 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/02 22:01:37 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helpers.hpp"

Helpers:: ~Helpers()
{

}

std::string Helpers::formatData(std::string str)
{
    if (str.length() > 10)
    {
        str.replace(9, 1, ".");
        return (str.substr(0, 10));
    }
    else
        return (str);
}