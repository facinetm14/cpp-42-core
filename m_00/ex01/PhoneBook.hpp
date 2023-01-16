/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 02:55:05 by fakouyat          #+#    #+#             */
/*   Updated: 2022/10/25 02:55:05 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class   PhoneBook
{
    private:
        Contact contacts[8];
        int row;

    public :
        PhoneBook();
        virtual ~PhoneBook();
        Contact*    getContacts();
        void        setRow(int row);
        void        addContact(Contact contact);
        void        search();
        void        exit();
        Contact     inputContact();
        void        displayMenu();
};

#endif