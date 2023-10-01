/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:04:19 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/01 21:53:21 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main(void)
{
    std::cout << "Enter the command: ";

    PhoneBook   phonebook;
    Contact     contact;

    while (1)
    {
        std::string command;
        std::string first;
        std::string last;
        std::string nick;
        std::string phone;
        std::string secret;
    
        std::getline(std::cin, command);

        if (command.empty())
        {
            std::cout << "No input detected. Please enter a valid command." << std::endl << "Enter the command: ";
            continue;
        }
        if (command == "ADD")
        {
            std::cout << "Enter first name: ";
            std::cin >> first;
            std::cout << "Enter last name: ";
            std::cin >> last;
            std::cout << "Enter nickname: ";
            std::cin >> nick;
            std::cout << "Enter phone number: ";
            std::cin >> phone;
            std::cout << "Tell me your darkest secret... NOWWW!: ";
            std::cin >> secret;
            contact.ContactFilling(first, last, nick, phone, secret);
            phonebook.AddToPhoneBook();
            return (0);
        }
        if (command == "SEARCH")
        {
            std::cout << "search command called" << std::endl;
            return (0);
        }
        if (command == "EXIT")
        {
            std::cout << "EXIT command called" << std::endl;
            exit (0);
        }
        else
        {
            std::cout << "Wrong command... Try again!" << std::endl << "Enter the command: ";
        }
    }
    return (0);
}