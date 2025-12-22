#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include "Contact.hpp"
class PhoneBook {
    private:
        Contact contacts[8];
        static int contactCount;
    public:
        void addContact();
        void displayContacts() const;
        void displayContactDetails(int index) const;
};
#endif