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