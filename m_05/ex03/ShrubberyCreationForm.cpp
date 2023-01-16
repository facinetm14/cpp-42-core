#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("CreationForm", 145, 137)
{
	this->_target = "Unknow target";
	std::cout << "Default ShrubberyCreationForm constructor called \n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : AForm(obj)
{
	this->_target = obj._target;
	std::cout << "Copy ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("CreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "ShrubberyCreation attributs constructor called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	*this = obj;
	return (*this);
	std::cout << " ShrubberyCreationForm assigment constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm assigment destructor called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) {
	if ( executor.getGrade() > this->getGradeReqExec())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getIsigned())
		throw ShrubberyCreationForm::FormNotSignException();
	std::fstream out_tree;
	std::string tmp = this->_target + "_shruberry";
	out_tree.open(tmp, std::ios::out);
	if (!out_tree)
	{
		std::cout << "faillure opening file\n";
		return ;
	}
	out_tree << "                    *                                          \n";
	out_tree << "                  /***\\                                       \n";
	out_tree << "                 /*****\\                                      \n";
	out_tree << "                 /*****\\                                      \n";
	out_tree << "                /*******\\                                     \n";
    out_tree << "                /*******\\                                     \n";
	out_tree << "               /*********\\                                    \n";
	out_tree << "                  ****                                         \n";
	out_tree << "                  ****                                         \n";
	out_tree << "             ______________                                    \n";
	out_tree.close();
	std::cout << tmp << " created successfully \n";
	
}