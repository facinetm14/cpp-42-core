/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:03:34 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/02 00:03:34 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include "Helpers.hpp"
class Contact {
	private:
		std::string  firstName;
		std::string  lastName;
		std::string  nickName;
		std::string  phone;
		std::string  darkSecret;
	public:
		Contact();
		virtual	~Contact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhone();
		std::string getDarkSecret();
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickName);
		void	setPhone(std::string phone);
		void	setDarkSecret(std::string secret);
		void	display(int index);
		void	details();
};

#endif
