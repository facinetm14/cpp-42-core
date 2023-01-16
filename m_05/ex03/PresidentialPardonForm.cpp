#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5) {
	this->_target = "Unknow target";
	std::cout << "Default PresidentialPardon constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
	this->_target = target;
	std::cout << "Attribut PresidentialPardon constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj) : AForm(obj) {
	this->_target = obj._target;
	std::cout << "Copy PresidentialPardon constructor called\n";
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj) {
	this->_target = obj._target;
	*this = obj;
	std::cout << "Assigment PresidentialPardon constructor called\n";
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardon destructor called\n";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) {
	if (executor.getGrade() > this->getGradeReqExec())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getIsigned())
		throw PresidentialPardonForm::FormNotSignException();
	std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox\n";
}
