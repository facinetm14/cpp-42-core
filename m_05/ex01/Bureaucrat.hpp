/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 04:21:51 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/21 04:21:51 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        const std::string	_name;
        int 				_grade;
    public:
	
        Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & obj);
		Bureaucrat & operator=(Bureaucrat const & obj);
		~Bureaucrat(void);
	
		class	GradeTooHightException : public std::exception {
			public:
				virtual const char *what() const throw () {
					return ("Grade too hight exception \n");
				}
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw () {
					return ("Grade too low exception \n");
				}
		};

        const std::string	getName(void) const;
		int					getGrade(void) const;
		void				increaseGrade(void);
		void				decreaseGrade(void);
		void				signForm(Form const & obj);

};

std::ostream & operator<<(std::ostream & output, Bureaucrat const & obj);

#endif