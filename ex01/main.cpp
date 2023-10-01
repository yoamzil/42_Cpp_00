/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:04:19 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/01 09:42:36 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main(void)
{
    std::cout << "Enter the command: ";

    PhoneBook phonebook;
    Contact contact;

    while (1)
    {
        std::string command;
        std::cin >> command;

        if (command == "ADD")
        {
            std::cout << "ADD command called" << std::endl;
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