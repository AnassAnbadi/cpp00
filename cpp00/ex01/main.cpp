#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if(!std::getline(std::cin, command))
        {
            std::cout << "\nEnd of input detected. Exiting program." << std::endl;
            break;
        }
        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        } else if (command == "EXIT") {
            break;
        }
        else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
        if (std::cin.eof())
        {
            std::cout << "\nEnd of input detected. Exiting program." << std::endl;
            break;
        }
    }
    return 0;
}