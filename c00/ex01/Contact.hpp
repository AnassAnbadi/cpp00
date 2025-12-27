#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>
class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
        bool isEmpty;
    public:
        void setContact(std::string fname, std::string lname,
                        std::string nname, std::string pnumber,
                        std::string secret);
        bool getIsEmpty() const;
        void displaySummary(int index) const;
        void displayDetails() const;

};
#endif