/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 02:16:41 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/24 02:16:41 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const & obj) {
    *this = obj;
}

Intern & Intern::operator=(Intern const & obj) {
    *this = obj;
    return *this;
}

Intern::~Intern(void) {}

AForm* Intern::makeForm(std::string form, std::string target) {
    std::string nameForms[3] = {"Shrubbery Creation", "Presidential Pradon", "robotomy request"};
    AForm* (Intern::* maker[4])(std::string) = {&Intern::makeShrubberyCreation, &Intern::makePresidentialPardon, 
            &Intern::makeRobotomyRequest};
    for (int i = 0; i < 4; i++) {
        if (nameForms[i] == form)
            return (this->*maker[i])(target);
    }
    std::cout << "This form type doesn't exist\n";
    return NULL;
}

AForm* Intern::makePresidentialPardon(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeRobotomyRequest(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::makeShrubberyCreation(std::string target) {
    return new ShrubberyCreationForm(target);
}