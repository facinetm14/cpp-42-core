#include "PhoneBook.hpp"

int     main()
{
    std::string comand;
    bool        running = true;
    Contact     newContact;
    PhoneBook   phoneBook = PhoneBook();
    phoneBook.displayMenu();
    while (running)
    {
       getline(std::cin, comand);
        if(comand == "ADD") 
        {
             newContact = phoneBook.inputContact();
            phoneBook.addContact(newContact);
        }
        else if (comand == "SEARCH")
        {
            phoneBook.search();
        }
        else if (comand == "EXIT")
        {
            std::cout << "EXIT";
            running = false;
        }
        else
        {

        }
    }
    return (0);
}