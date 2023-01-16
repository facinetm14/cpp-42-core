/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:00:43 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/21 21:56:58 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeReqSign;
		const int			_gradeReqExec;
	
	public:
		Form(void);
		Form(std::string const name, int _gradeReqSign, int _gradeReqExec);
		Form(Form const & obj);
		Form & operator=(Form const & obj);
		~Form(void);
		
		class GradeTooHightException : public std::exception {
			public:
				virtual const char *what() const throw () {
					return ("Grade too hight exception \n");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw () {
					return ("Grade too low exception \n");
				}
		};
		
		const std::string	getName(void) const;
		const bool			getIsigned(void) const;
		const int			getGradeReqSign(void) const;
		const int			getGradeReqExec(void) const;

		void				beSigned(Bureaucrat const & bureau);
};

std::ostream & operator<<(std::ostream & output, Form const & obj);
#endif