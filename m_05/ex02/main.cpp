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

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    
	std::cout << "----------------------------------------------------------\n\n";
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST ShrubberyCreationForm                   |\n";
        std::cout << "----------------------------------------------------------\n";
		ShrubberyCreationForm my_shrub;
		std::cout << my_shrub.getName() << std::endl;
		ShrubberyCreationForm my_shrub2(my_shrub);
		std::cout << my_shrub.getGradeReqSign() << std::endl;
		ShrubberyCreationForm test("Jut");
		try 
		{
			Bureaucrat executor("Android", 10);
			try 
			{
				test.beSigned(executor);
				test.execute(executor);
			}
			catch(ShrubberyCreationForm::FormNotSignException err)
			{
				std::cout << err.what();
			}
		}
		catch (Bureaucrat::GradeTooLowException err) {
			std::cout << err.what();
		}
		std::cout << "----------------------------------------------------------\n\n";
		std::cout << "--------- TEST Bureaucarat executForm() ----------------\n";
		try
		{
			ShrubberyCreationForm test2;
			Bureaucrat bureau("42 STAFF", 149);
			bureau.executeForm(test2);
		}
		catch(Bureaucrat::GradeTooLowException err)
		{
			std::cerr << err.what() << '\n';
		}
		
	}
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST RobotomyRequestForm                     |\n";
        std::cout << "----------------------------------------------------------\n";
		RobotomyRequestForm my_request("42WOB");
		try 
		{
			Bureaucrat toRobotize("Bureau clean", 12);
			my_request.beSigned(toRobotize);
			my_request.execute(toRobotize);
		}
		catch(Bureaucrat::GradeTooLowException err)
		{
			std::cerr << err.what() << "\n";
		}
		

	}
	std::cout << "----------------------------------------------------------\n\n";
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST PresidentialPardonForm                   |\n";
        std::cout << "----------------------------------------------------------\n";
		PresidentialPardonForm my_presi("OZIL");
		try 
		{
			Bureaucrat toPardonize("Bureau clean", 105);
			my_presi.execute(toPardonize);
		}
		catch(Bureaucrat::GradeTooLowException err)
		{
			std::cerr << err.what() << "\n";
		}
	}
	std::cout << "----------------------------------------------------------\n\n";
    return 0;
}