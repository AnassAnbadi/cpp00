#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include "Contact.hpp"
#include <iostream>
class PhoneBook {
    private:
        Contact contacts[8];
        static int contactCount;
    public:
        void addContact();
        void displayContacts() const;
        void searchContact() const;
};
#endif