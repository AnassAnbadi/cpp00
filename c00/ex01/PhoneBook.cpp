#include "PhoneBook.hpp"

bool is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

bool isOnlySpaces(const std::string s)
{
    size_t i = 0;

    if (s.empty())
        return true;

    while (i < s.size())
    {
        if (!is_space(s[i]))
            return false;
        i++;
    }
    return true;
}

bool ASCII_CHECK(std::string s)
{
    size_t i = 0;

    while (i < s.size())
    {
        if (isascii(s[i]) == 0)
            return false;
        i++;
    }
    return true;
}

int PhoneBook::contactCount = 0;
void PhoneBook::addContact() {
    std::string fname, lname, nname, pnumber, secret;

    if (contactCount >= 8) {
        contactCount = 0; // Overwrite the oldest contact
    }

    std::cout << "Enter First Name: ";
    std::getline(std::cin, fname);
    if (isOnlySpaces(fname)) {
        std::cout << "First Name cannot be empty or only spaces!" << std::endl;
        return;
    }
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lname);
    if (isOnlySpaces(lname)) {
        std::cout << "Last Name cannot be empty or only spaces!" << std::endl;
        return;
    }
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nname);
    if (isOnlySpaces(nname)) {
        std::cout << "Nickname cannot be empty or only spaces!" << std::endl;
        return;
    }
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, pnumber);
    if (isOnlySpaces(pnumber)) {
        std::cout << "Phone Number cannot be empty or only spaces !" << std::endl;
        return;
    }
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, secret);
    if (isOnlySpaces(secret)) {
        std::cout << "Darkest Secret cannot be empty or only spaces!" << std::endl;
        return;
    }

    contacts[contactCount%8].setContact(fname, lname, nname, pnumber, secret);
    contactCount++;
}
void PhoneBook::displayContacts() const {
    std::cout << "Index | First Name | Last Name  | Nickname  " << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < contactCount && i < 8; i++) {
        if (!contacts[i].getIsEmpty()) {
            contacts[i].displaySummary(i);
        }
    }
}
void PhoneBook::searchContact() const {
    int index;
    displayContacts();
    std::cout << "Enter the index of the contact to view details: ";
    std::cin >> index;
    std::cin.ignore(); // Clear newline character from input buffer

    if (index < 0 || index >= contactCount || contacts[index].getIsEmpty()) {
        std::cout << "Invalid index!" << std::endl;
    } else {
        contacts[index].displayDetails();
    }
}