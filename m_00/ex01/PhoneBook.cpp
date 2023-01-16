/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 03:05:30 by fakouyat          #+#    #+#             */
/*   Updated: 2022/10/25 03:05:30 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->row = 0;
}

PhoneBook::~PhoneBook()
{
    
}

void    PhoneBook::addContact(Contact contact)
{
    if (this->row <= 7)
    {
        if ((contact.getFirstName().empty()) || (contact.getLastName().empty())
                || (contact.getPhone().empty()) || (contact.getNickName().empty()))
        {
            std::cout <<"FAILLED ! EMPTY FIELD\n";
            return ;
        }
        this->contacts[this->row] = contact;
        this->row++;
        std::cout <<"CONTACT ADDED SUCCESSFULY\n";
    }
    else
        std::cout <<"ERROR ! PHONE BOOK ALREADY FULL\n";
    std::cout <<"ENTER YOUR COMMAND : ADD | SEARCH | EXIT \n";
}

Contact* PhoneBook::getContacts()
{
    return this->contacts;
}

void    PhoneBook::setRow(int row)
{
    this->row = row;
}

Contact PhoneBook::inputContact()
{
    Contact newContact = Contact();
    std::string input[5];
    std::cout <<"-----------------------------------------------------------\n";
    std::cout <<"|             ADDING NEW CONTACT                          |\n";
    std::cout <<"-----------------------------------------------------------\n\n";
    std::cout << "Enter first name" << std::endl;
    std::getline(std::cin, input[0]);
    std::cout << "Enter last name" << std::endl;
    std::getline(std::cin, input[1]);
    std::cout << "Enter nick name" << std::endl;
    std::getline(std::cin, input[2]);
    std::cout << "Enter phone" << std::endl;
    std::getline(std::cin, input[3]);
    std::cout << "Enter dark secret" << std::endl;
    std::getline(std::cin, input[4]);
    newContact.setFirstName(input[0]);
    newContact.setLastName(input[1]);
    newContact.setNickName(input[2]);
    newContact.setPhone(input[3]);
    newContact.setDarkSecret(input[4]);
    return (newContact);
}

void    PhoneBook::displayMenu()
{
    std::cout <<"-----------------------------------------------------------\n";
    std::cout <<"|         WELCOME TO YOUR PHONE BOOK                      |\n";
    std::cout <<"-----------------------------------------------------------\n\n";
    std::cout <<"ENTER YOUR COMMAND : ADD | SEARCH | EXIT \n";
}

/**
* display saved contact
* display details about one contact
*/
void   PhoneBook::search()
{
    int i = 0;
    int index;
    Contact *contacts;
    std::cout <<"-----------------------------------------------------------\n";
    std::cout <<"|                      SAVED CONTACTS                     |\n";
    std::cout <<"-----------------------------------------------------------\n\n";
    std::cout << "---------------------------------------------\n";
    std::cout << "|     Index|First Name| Last Name| Nick Name|\n";
    std::cout << "---------------------------------------------\n";

    contacts = this->getContacts();
    while (i < this->row)
    {
        contacts[i].display(i);
        i++;
    }
    if (this->row == 0)
        return ;
    while (!(std::cin >> index) || (!(index > 0 && index <= this->row)))
    {
        std::cin.clear();
        std::cin.ignore(1024, '\n');
        std::cout << "WRONG INDEX\n";
    }
    std::cin.ignore(1024, '\n');
    if (index > 0 && index <= this->row)
        contacts[index - 1].details();
}