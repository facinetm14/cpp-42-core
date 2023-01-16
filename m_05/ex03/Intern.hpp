/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 01:51:45 by fakouyat          #+#    #+#             */
/*   Updated: 2022/12/24 01:51:45 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

    public:
        Intern(void);    
        Intern(Intern const & obj);
        Intern & operator=(Intern const & obj);
        ~Intern(void);    

        AForm* makeForm(std::string form, std::string target);
        AForm* makePresidentialPardon(std::string target);
        AForm* makeShrubberyCreation(std::string target);
        AForm* makeRobotomyRequest(std::string target);

};

#endif
