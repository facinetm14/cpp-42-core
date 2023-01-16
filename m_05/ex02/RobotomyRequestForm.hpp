/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:01:39 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/23 22:07:28 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP
# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const & obj);
		RobotomyRequestForm(AForm const & form);// not clear yet
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & obj);
		~RobotomyRequestForm(void);

		void		execute(Bureaucrat const & executor);
};

#endif
