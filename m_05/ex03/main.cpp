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
#include "Intern.hpp"

int main()
{
	std::cout << "----------------------------------------------------------\n\n";
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST Intern                                   |\n";
        std::cout << "----------------------------------------------------------\n";
		Intern someRandomIntern;
		AForm* rrf;
		AForm* scf;
		AForm* ppf;
		AForm* wrong;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		scf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
		ppf = someRandomIntern.makeForm("Presidential Pradon", "Bender");
		wrong = someRandomIntern.makeForm("Wrong Wrong", "Bender");
		std::cout << "----------------------------------------------------------\n\n";
		delete rrf;
		delete scf;
		delete ppf;
	}

    return 0;
}