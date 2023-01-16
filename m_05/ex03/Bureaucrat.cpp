/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 05:00:46 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/05 05:33:57 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHightException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        std::cout << "Bureaucrat constructor called successfully\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj) : _name(obj._name), _grade(obj._grade) {
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHightException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        std::cout << "Bureaucrat copy constructor called successfully\n";
}


Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called \n";
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)  {
    this->_grade = obj._grade;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHightException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        std::cout << "Bureaucrat assigmenet constructor called successfully\n";
    return (*this);
}

const std::string Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

void    Bureaucrat::increaseGrade() {
    this->_grade -= 1;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHightException();
}

void    Bureaucrat::decreaseGrade() {
    this->_grade += 1;
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream & output, Bureaucrat const & obj) {
    output << obj.getName() << ", bureaucrat grade " << obj.getGrade()  << "\n";
    return output;
}

void	Bureaucrat::signForm(AForm const & obj)
{
	if (this->_grade <= obj.getGradeReqSign())
		std::cout << "bureaucrat signed form\n";
	else
		std::cout << "bureaucrat couldn't sign form because reason\n";
}

void	Bureaucrat::executeForm(AForm const & form) {
    if ( this->_grade > form.getGradeReqExec())
		throw Bureaucrat::GradeTooLowException();
	if (!form.getIsigned())
		throw AForm::FormNotSignException();
    std::cout << "bureaucrat executed form\n";
}