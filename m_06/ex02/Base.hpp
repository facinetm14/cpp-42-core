/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 03:41:23 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/07 03:41:23 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
#include <iostream>


class Base
{
    public:
        virtual ~Base() {};

};

class A : virtual public Base{};

class B : virtual public Base{};

class C : virtual public Base{};

Base *generate(void);

void identify(Base* p);
void identify(Base& p);

#endif

