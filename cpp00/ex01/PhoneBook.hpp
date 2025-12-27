/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:09:32 by aanbadi           #+#    #+#             */
/*   Updated: 2025/12/27 15:53:16 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
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