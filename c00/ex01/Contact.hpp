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
            Contact() : isEmpty(true) {}
        void setContact(const std::string fname, const std::string lname,
                        const std::string nname, const std::string pnumber,
                        const std::string secret);
        bool getIsEmpty() const;
        void displaySummary(int index) const;
        void displayDetails() const;

};
#endif