/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:18:48 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/05 05:40:42 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Unknow"), _isSigned(false),
	_gradeReqSign(150), _gradeReqExec(150)
{
	std::cout << "AForm default constructor called successfully\n";
}

AForm::AForm(std::string const name, int gradeReqSign, int gradeReqExec) :
	_name(name), _gradeReqSign(gradeReqSign), _gradeReqExec(gradeReqExec)
{
	this->_isSigned = false;
	if (gradeReqSign < 1 || gradeReqExec < 1)
        throw AForm::GradeTooHightException();
    else if (gradeReqSign > 150 || gradeReqExec > 150)
        throw AForm::GradeTooLowException();
    else
        std::cout << "Form constructor called successfully\n";	
}

AForm::AForm(AForm const & obj): _name(obj._name), _isSigned(obj._isSigned),
	_gradeReqExec(obj._gradeReqExec), _gradeReqSign(obj._gradeReqSign)
{
	std::cout << "Form copy constructor called successfully\n";	
}

AForm & AForm::operator=(AForm const & obj) {
	this->_isSigned = obj._isSigned;
	std::cout << "Form asignment constructor called successfully\n";
	return *this;
}

AForm::~AForm(void) {
	std::cout << "Form destructor called \n";
}

const std::string AForm::getName() const {
	return this->_name;
}

const bool AForm::getIsigned(void) const {
	return this->_isSigned;
}

const int AForm::getGradeReqExec(void) const {
	return this->_gradeReqExec;
}

const int AForm::getGradeReqSign(void) const {
	return this->_gradeReqSign;
}

std::ostream & operator<<(std::ostream & output, AForm const & obj) {
	output << "name : " << obj.getName() << "\n";
	output << "isSigned : " << obj.getIsigned() << "\n";
	output << "gradeReqSign : " << obj.getGradeReqSign() << "\n";
	output << "gradeReqExec : " << obj.getGradeReqExec() << "\n";
	return output;
}

void	AForm::beSigned(Bureaucrat const & bureau) {
	if (bureau.getGrade() <= this->_gradeReqSign)
		this->_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}


