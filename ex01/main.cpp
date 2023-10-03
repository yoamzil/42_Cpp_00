/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:04:19 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/03 13:53:45 by yoamzil          ###   ########.fr       */
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
	if (std::cin.eof())
			exit (0);
	while (first.empty())
	{
		std::cout << "No input detected." << std::endl << "Enter first name: ";
		std::getline(std::cin, first);
		if (std::cin.eof())
			exit (0);
	}

	std::cout << "Enter last name: ";
	std::getline(std::cin, last);
	if (std::cin.eof())
			exit (0);
	while (last.empty())
	{
		std::cout << "No input detected." << std::endl << "Enter last name: ";
		std::getline(std::cin, last);
		if (std::cin.eof())
			exit (0);
	}

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nick);
	if (std::cin.eof())
			exit (0);
	while (nick.empty())
	{
		std::cout << "No input detected." << std::endl << "Enter nickname: ";
		std::getline(std::cin, nick);
		if (std::cin.eof())
			exit (0);
	}

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone);
	if (std::cin.eof())
			exit (0);
	while (phone.empty())
	{
		std::cout << "No input detected." << std::endl << "Enter phone number: ";
		std::getline(std::cin, phone);
		if (std::cin.eof())
			exit (0);
	}

	std::cout << "Tell me your darkest secret: ";
	std::getline(std::cin, secret);
	if (std::cin.eof())
			exit (0);
	while (secret.empty())
	{
		std::cout << "No input detected." << std::endl << "Tell me your darkest secret... NOWWW!: ";
		std::getline(std::cin, secret);
		if (std::cin.eof())
			exit (0);
	}
	contact.ContactFilling(first, last, nick, phone, secret);
	phonebook.AddToPhoneBook(contact, i);
}

void SearchCommand(PhoneBook phonebook, Contact contact)
{
	(void)phonebook;
	(void)contact;

	std::cout << " ___________________________________________" <<std::endl;
	std::cout << "|" << "INDEX     " << "|" << "FIRST NAME" << "|" << "LAST NAME " << "|" << "NICKNAME  " << "|" << std::endl;
	std::cout << " ___________________________________________" <<std::endl;
	for(int i = 0; i <= 7; i++)
	{
		std::cout << "|" << i + 1 << "         "  << "|" << phonebook.getContact(i).getFirstName() << "|" << "          " << "|" << "          " << "|" << std::endl;
	}
	std::cout << " ___________________________________________" <<std::endl;
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
		if (std::cin.eof())
			exit (0);
		
		if (command == "ADD")
		{
			AddCommand(contact, phonebook, contact_index);
			contact_index++;
		}
		if (command == "hi")
			SearchCommand(phonebook, contact);
		if (command == "EXIT")
			exit(0);
		else
		{
			if (command.empty() || (command != "ADD" && command != "hi" && command != "EXIT"))
				std::cout << "Please enter a valid command. (ADD, SEARCH or EXIT)" << std::endl;
		}
	}
	return (0);
}
