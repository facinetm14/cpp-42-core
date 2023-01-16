/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:00:43 by fakouyat          #+#    #+#             */
/*   Updated: 2023/01/05 05:23:59 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_FORM_HPP
# define A_FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeReqSign;
		const int			_gradeReqExec;
	
	public:
		AForm(void);
		AForm(std::string const name, int _gradeReqSign, int _gradeReqExec);
		AForm(AForm const & obj);
		AForm & operator=(AForm const & obj);
		virtual ~AForm(void);
		
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
		
		class FormNotSignException : public std::exception {
			public :
				virtual const char *what() const throw() {
					return ("Form no signed exception\n");
				}
		};
		
		const std::string	getName(void) const;
		const bool			getIsigned(void) const;
		const int			getGradeReqSign(void) const;
		const int			getGradeReqExec(void) const;

		void				beSigned(Bureaucrat const & bureau);
		virtual void		execute(Bureaucrat const & executor) = 0;
};

std::ostream & operator<<(std::ostream & output, AForm const & obj);
#endif