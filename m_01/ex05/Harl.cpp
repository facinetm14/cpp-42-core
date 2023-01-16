/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 03:08:16 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/23 03:08:16 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "***************************\n";
    std::cout << "             DEBUG         \n";
    std::cout << "***************************\n";
    std::cout << "I really like this CPP module!\n";
}

void Harl::info( void )
{
    std::cout << "***************************\n";
    std::cout << "             INFO          \n";
    std::cout << "***************************\n";
    std::cout << "I really like this module and it's true, because I'm enjoying OOP\n";
}

void Harl::warning( void )
{
    std::cout << "***************************\n";
    std::cout << "             WARNING        \n";
    std::cout << "***************************\n";
    std::cout << "Don't speak too munch, The next modules might change your opinion!\n";
}

void Harl::error( void )
{
    std::cout << "***************************\n";
    std::cout << "             DEBUG         \n";
    std::cout << "***************************\n";
    std::cout << "Oh No ! Don't underestimate me, I don't like it !\n";
}

void Harl::complain( std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::* methodPTRs[4])( void ) = {&Harl::debug, &Harl::info, 
                                            &Harl::warning, &Harl::error};
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
            return (this->*methodPTRs[i])();
        i++;
    }
    std::cout << "I don't know what you want, your level is not specified!\n";
}

Harl::Harl( void )
{

}

Harl::~Harl( void )
{

}