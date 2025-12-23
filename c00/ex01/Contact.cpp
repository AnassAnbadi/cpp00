#include "Contact.hpp"

std::string Contact::getFirstName(void) const
{
    return this->firstName;
}

void Contact::setFirstName(const std::string fname) {
    this->firstName = fname;
}

std::string Contact::getLastName(void) const
{
    return this->lastName;
}

void Contact::setLastName(const std::string lname)
{
    this->lastName = lname;
}

std::string Contact::getNickname(void) const
{
    return nickname;
}

void Contact::setNickname(std::string nname)
{
    nickname = nname;
}

std::string Contact::getPhoneNumber(void) const
{
    return phoneNumber;
}

void Contact::setPhoneNumber(std::string pnumber)
{
    phoneNumber=pnumber;
}

std::string Contact::getDarkestSecret(void) const
{
    return darkestSecret;
}

void Contact::setDarkestSecret(std::string secret)
{
    darkestSecret = secret;
}