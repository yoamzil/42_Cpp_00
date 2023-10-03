/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:04:19 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/03 10:33:43 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	AddCommand(Contact contact, PhoneBook phonebook, int i)
{
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string secret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, first);
	while (first.empty())
	{
		std::cout << "No input detected." << std::endl << "Enter first name: ";
		std::getline(std::cin, first);
	}

	std::cout << "Enter last name: ";
	std::getline(std::cin, last);
	while (last.empty())
	{
		std::cout << "No input detected." << std::endl << "Enter last name: ";
		std::getline(std::cin, last);
	}

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nick);
	while (nick.empty())
	{
		std::cout << "No input detected." << std::endl << "Enter nickname: ";
		std::getline(std::cin, nick);
	}

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone);
	while (phone.empty())
	{
		std::cout << "No input detected." << std::endl << "Enter phone number: ";
		std::getline(std::cin, phone);
	}

	std::cout << "Tell me your darkest secret: ";
	std::getline(std::cin, secret);
	while (secret.empty())
	{
		std::cout << "No input detected." << std::endl << "Tell me your darkest secret... NOWWW!: ";
		std::getline(std::cin, secret);
	}
	contact.ContactFilling(first, last, nick, phone, secret);
	phonebook.AddToPhoneBook(contact, i);
}

void SearchCommand()
{
}

void ExitCommand()
{
}

int main(void)
{
	PhoneBook	phonebook;
	Contact		contact;
	int			contact_index;

	contact_index = 0;
	while (1)
	{
		std::cout << "Enter the command: ";
		std::string command;
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			AddCommand(contact, phonebook, contact_index);
			contact_index++;
		}
		if (command == "SEARCH")
			SearchCommand();
		if (command == "EXIT")
			exit(0);
		else
		{
			if (command.empty() || (command != "ADD" && command != "SEARCH" && command != "EXIT"))
				std::cout << "Please enter a valid command. (ADD, SEARCH or EXIT)" << std::endl;
		}
	}
	return (0);
}
