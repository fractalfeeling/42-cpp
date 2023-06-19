/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:03:27 by lwee              #+#    #+#             */
/*   Updated: 2023/06/19 16:07:59 by lwee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
    contactCount = 0;
    oldestContactIndex = 0;
    // Initialize contacts with empty Contact objects
    for (int i = 0; i < 8; i++) {
        contacts[i] = Contact("", "", "", "", "");
    }
}

bool isPhoneNumberValid(const std::string& phoneNumber) {
    // Check if the string is empty
    if (phoneNumber.empty()) {
        return false;
    }

    // Iterate over each character in the string
    for (std::size_t i = 0; i < phoneNumber.length(); ++i) {
        // Check if the character is not a digit
        if (!std::isdigit(phoneNumber[i]) && phoneNumber[i] != '-'
            && phoneNumber[i] != '+' ) {
            return false;
        }
    }

    return true;
}

void PhoneBook::addContact() {
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter First Name: ";
    std::cin >> firstName;

    std::cout << "Enter Last Name: ";
    std::cin >> lastName;

    std::cout << "Enter Nickname: ";
    std::cin >> nickname;

    // Validate phone number input
    bool validPhoneNumber = false;
    do {
        std::cout << "Enter Phone Number: ";
        std::cin >> phoneNumber;

        // Check if phone number contains only digits
        validPhoneNumber = isPhoneNumberValid(phoneNumber);

        if (!validPhoneNumber) {
            std::cout << "Invalid phone number. Please enter a valid number without letters." << std::endl;
        }
    } while (!validPhoneNumber);

    std::cout << "Enter Darkest Secret: ";
    std::cin.ignore();  // Ignore the newline character from previous input
    std::getline(std::cin, darkestSecret);

    Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);

    if (contactCount < 8) {
        contacts[contactCount] = newContact;
        contactCount++;
    } else {
        // replace the oldest contact
        contacts[oldestContactIndex] = newContact;
        oldestContactIndex = (oldestContactIndex + 1) % 8;
    }

    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact() {
    std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|  INDEX   | FIRSTNAME| LASTNAME | NICKNAME |" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;

    for (int i = 0; i < contactCount; ++i) {
        std::cout << "|";
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << std::right << truncateText(contacts[i].getFirstName(), 10) << "|";
        std::cout << std::setw(10) << std::right << truncateText(contacts[i].getLastName(), 10) << "|";
        std::cout << std::setw(10) << std::right << truncateText(contacts[i].getNickname(), 10) << "|";
        std::cout << std::endl;
    }

    std::cout << "+----------+----------+----------+----------+" << std::endl;

    // Prompt the user for index of the entry to display
    int index;
    std::cout << "Enter the index of the entry to display: ";
    while (!(std::cin >> index)) {
        // Handle non-number input
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid index: ";
    }

    // Validate the user input
    if (index >= 1 && index <= contactCount) {
        std::cout << "Contact Information:" << std::endl;
        std::cout << "First Name: " << contacts[index - 1].getFirstName() << std::endl;
        std::cout << "Last Name: " << contacts[index - 1].getLastName() << std::endl;
        std::cout << "Nickname: " << contacts[index - 1].getNickname() << std::endl;
    } else {
        std::cout << "Invalid index. Please try again." << std::endl;
    }
}

std::string PhoneBook::truncateText(const std::string& text, std::string::size_type width) const {
    if (text.length() > width) {
        return text.substr(0, width - 1) + ".";
    }
    return text;
}
