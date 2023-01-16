/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:03:48 by fakouyat          #+#    #+#             */
/*   Updated: 2022/11/02 00:03:48 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    this->firstName = "";
    this->lastName = "";
    this->nickName = "";
    this->phone = "";
    this->darkSecret = "";
}

Contact::~Contact()
{

}

std::string Contact::getFirstName()
{
    return this->firstName;
}

std::string  Contact::getLastName()
{
    return this->lastName;
}

std::string  Contact::getNickName()
{
    return this->nickName;
}

std::string  Contact::getPhone()
{
    return this->phone;
}

std::string Contact::getDarkSecret()
{
    return this->darkSecret;
}
void    Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void    Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void    Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

void    Contact::setPhone(std::string phone)
{
    this->phone = phone;
}

void    Contact::setDarkSecret(std::string secret)
{
    this->darkSecret = secret;
}

void    Contact::display(int index)
{
    Helpers helper;
    std::cout << "|" << std::setw(10) << index + 1 << "|" << std::setw(10) << helper.formatData(this->firstName);
    std::cout << "|" << std::setw(10) << helper.formatData(this->lastName) << "|";
    std::cout << std::setw(10) << helper.formatData(this->nickName) << "|" << std::endl;
    std::cout << "---------------------------------------------\n";
}

void    Contact::details()
{
    std::cout << "-----------------------------------------------------------\n";
    std::cout << "First Name : " << this->firstName << std::endl;
    std::cout << "Last Name : " << this->lastName << std::endl;
    std::cout << "Nick Name : " << this->nickName << std::endl;
    std::cout << "Phone : " << this->phone << std::endl;
    std::cout << "Dark Secret: " << this->darkSecret << std::endl;
    std::cout << "-----------------------------------------------------------\n";
}