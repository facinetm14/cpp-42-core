/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 04:19:47 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/21 04:19:47 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    {
        std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST OPERATOR <<                             |\n";
        std::cout << "----------------------------------------------------------\n";
        try {
            Bureaucrat bureau("Steve", 1);
            std::cout << bureau;
            try {
                bureau.increaseGrade();
            }
            catch(Bureaucrat::GradeTooHightException e) {
                std::cerr << e.what();
            }
        }
        catch(Bureaucrat::GradeTooHightException e) {
            std::cerr << e.what();
        }
        std::cout << "----------------------------------------------------------\n\n";
    }
    {
        std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST TOO HIGHT EXCEPTION                     |\n";
        std::cout << "----------------------------------------------------------\n";
        try {
            Bureaucrat bureau("Musk", 0);
        }
        catch(Bureaucrat::GradeTooHightException e) {
            std::cerr << e.what();
        }
        std::cout << "----------------------------------------------------------\n\n";
    }
    {
        std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST TOO LOW EXCEPTION                       |\n";
        std::cout << "----------------------------------------------------------\n";
        try {
            Bureaucrat bureau("Steve", 150);
            bureau.decreaseGrade();
        }
        catch(Bureaucrat::GradeTooLowException e) {
            std::cerr << e.what();
        }
        std::cout << "----------------------------------------------------------\n\n";
    }
    return 0;
}