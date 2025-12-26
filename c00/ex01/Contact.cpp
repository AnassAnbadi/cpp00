#include "Contact.hpp"

void Contact::setContact(const std::string fname, const std::string lname,
                         const std::string nname, const std::string pnumber,
                         const std::string secret) {
    firstName = fname;
    lastName = lname;
    nickname = nname;
    phoneNumber = pnumber;
    darkestSecret = secret;
    isEmpty = false;
}

bool Contact::getIsEmpty() const {
    return isEmpty;
}

void Contact::displaySummary(int index) const {
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|";
    std::cout << std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
    std::cout << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << std::endl;
}

void Contact::displayDetails() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
