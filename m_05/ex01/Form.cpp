/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:18:48 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/21 21:56:56 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Unknow"), _isSigned(false),
	_gradeReqSign(150), _gradeReqExec(150)
{
	std::cout << "Form default constructor called successfully\n";
}
Form::Form(std::string const name, int gradeReqSign, int gradeReqExec) :
	_name(name), _gradeReqSign(gradeReqSign), _gradeReqExec(gradeReqExec)
{
	this->_isSigned = false;
	if (gradeReqSign < 1 || gradeReqExec < 1)
        throw Form::GradeTooHightException();
    else if (gradeReqSign > 150 || gradeReqExec > 150)
        throw Form::GradeTooLowException();
    else
        std::cout << "Form constructor called successfully\n";	
}

Form::Form(Form const & obj): _name(obj._name), _isSigned(obj._isSigned),
	_gradeReqExec(obj._gradeReqExec), _gradeReqSign(obj._gradeReqSign)
{
	std::cout << "Form copy constructor called successfully\n";	
}

Form & Form::operator=(Form const & obj) {
	this->_isSigned = obj._isSigned;
	std::cout << "Form asignment constructor called successfully\n";
	return *this;
}

Form::~Form(void) {
	std::cout << "Form destructor called \n";
}

const std::string Form::getName() const {
	return this->_name;
}

const bool Form::getIsigned(void) const {
	return this->_isSigned;
}

const int Form::getGradeReqExec(void) const {
	return this->_gradeReqExec;
}

const int Form::getGradeReqSign(void) const {
	return this->_gradeReqSign;
}

std::ostream & operator<<(std::ostream & output, Form const & obj) {
	output << "name : " << obj.getName() << "\n";
	output << "isSigned : " << obj.getIsigned() << "\n";
	output << "gradeReqSign : " << obj.getGradeReqSign() << "\n";
	output << "gradeReqExec : " << obj.getGradeReqExec() << "\n";
	return output;
}

void	Form::beSigned(Bureaucrat const & bureau) {
	if (bureau.getGrade() <= this->_gradeReqSign)
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

