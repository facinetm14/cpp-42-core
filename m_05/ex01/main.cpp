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

#include "Form.hpp"
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
	std::cout << "************ START POINT OF THIS EXERCICE *************\n";
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST FORM TOO LOW EXCEPTION                   |\n";
        std::cout << "----------------------------------------------------------\n";
		try {
			Form my_form("Kotlin", 0, 10);
		}
		catch(Form::GradeTooHightException e) {
			std::cout << e.what();
		}
		std::cout << "----------------------------------------------------------\n\n";
    }
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST FORM TOO HIGH EXCEPTION                  |\n";
        std::cout << "----------------------------------------------------------\n";
		try {
			Form my_form("Kotlin", 100, 130);
			Form my_form2(my_form);
			Form my_form3; 
			my_form3 = my_form2;
			std::cout << my_form3.getName() << "\n";
			std::cout << my_form.getIsigned() << "\n";
			std::cout << my_form.getGradeReqExec() << "\n";
			std::cout << my_form.getGradeReqSign() << "\n";
			std::cout << my_form;
			Bureaucrat bureau("Forty Two", 10);
			bureau.signForm(my_form2);
			// my_form.beSigned(bureau);
		}
		catch(Form::GradeTooLowException e) {
			std::cout << e.what();
		}
		std::cout << "----------------------------------------------------------\n\n";
    }
    return 0;
}