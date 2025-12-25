#include "PhoneBook.hpp"
int PhoneBook::contactCount = 0;
void PhoneBook::addContact() {
    std::string fname, lname, nname, pnumber, secret;

    if (contactCount >= 8) {
        contactCount = 0; // Overwrite the oldest contact
    }

    std::cout << "Enter First Name: ";
    std::getline(std::cin, fname);
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lname);
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nname);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, pnumber);
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, secret);

    contacts[contactCount].setContact(fname, lname, nname, pnumber, secret);
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