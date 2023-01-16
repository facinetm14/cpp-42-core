#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = "Unknow target";
	std::cout << "Default RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : AForm(obj) {
	this->_target = obj._target;
	std::cout << "Copy RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(AForm const &form) {

}

/* not clear yet, need to deep think about it*/
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = target;
	std::cout << "Attribut RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj) {
	*this = obj;
	std::cout << "Assigment RobotomyRequestForm constructor called\n";
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor called \n";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) {
	if ( executor.getGrade() > this->getGradeReqExec())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getIsigned())
		throw RobotomyRequestForm::FormNotSignException();
	std::cout << "Some drilling noises!!!!!!!\n";
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized succefully 50\% of the time\n";
	else
		std::cout << "the robotomy of " << this->_target << " failed.\n";
}
