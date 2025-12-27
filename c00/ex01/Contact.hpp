/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:09:19 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/27 15:53:16 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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