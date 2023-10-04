/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:04:19 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/04 13:51:11 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void AddCommand(Contact contact, PhoneBook *phonebook, int i)
{
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string secret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, first);
	if (std::cin.eof())
		exit(0);
	while (first.empty())
	{
		std::cout << "No input detected." << std::endl
				  << "Enter first name: ";
		std::getline(std::cin, first);
		if (std::cin.eof())
			exit(0);
	}

	std::cout << "Enter last name: ";
	std::getline(std::cin, last);
	if (std::cin.eof())
		exit(0);
	while (last.empty())
	{
		std::cout << "No input detected." << std::endl
				  << "Enter last name: ";
		std::getline(std::cin, last);
		if (std::cin.eof())
			exit(0);
	}

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nick);
	if (std::cin.eof())
		exit(0);
	while (nick.empty())
	{
		std::cout << "No input detected." << std::endl
				  << "Enter nickname: ";
		std::getline(std::cin, nick);
		if (std::cin.eof())
			exit(0);
	}

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone);
	if (std::cin.eof())
		exit(0);
	while (phone.empty())
	{
		std::cout << "No input detected." << std::endl
				  << "Enter phone number: ";
		std::getline(std::cin, phone);
		if (std::cin.eof())
			exit(0);
	}

	std::cout << "Tell me your darkest secret: ";
	std::getline(std::cin, secret);
	if (std::cin.eof())
		exit(0);
	while (secret.empty())
	{
		std::cout << "No input detected." << std::endl
				  << "Tell me your darkest secret... NOWWW!: ";
		std::getline(std::cin, secret);
		if (std::cin.eof())
			exit(0);
	}
	contact.ContactFilling(first, last, nick, phone, secret);
	phonebook->AddToPhoneBook(contact, i);
}

void SearchCommand(PhoneBook phonebook, Contact contact)
{
	(void)contact;
	std::string index;
	int index_casted;
	std::string first;
	std::string last;
	std::string nick;

	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX"
			  << "|" << std::setw(10) << "FIRST NAME"
			  << "|" << std::setw(10) << "LAST NAME"
			  << "|" << std::setw(10) << "NICKNAME"
			  << "|" << std::endl;
	std::cout << " ___________________________________________" << std::endl;
	for (int i = 0; i <= 7; i++)
	{
		first = phonebook.getContact(i).getFirstName();
		last = phonebook.getContact(i).getLastName();
		nick = phonebook.getContact(i).getNickName();
		if (first.length() >= 9)
			first = first.substr(0, 9) + ".";
		if (last.length() >= 9)
			last = last.substr(0, 9) + ".";
		if (nick.length() >= 9)
			nick = nick.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << first << "|" << std::setw(10) << last << "|" << std::setw(10) << nick << "|" << std::endl;
	}
	std::cout << " ___________________________________________" << std::endl;

	std::cout << "Enter contact index: ";
	std::getline(std::cin, index);
	if (std::cin.eof())
		exit(0);
	while (index.empty())
	{
		std::cout << "No input detected." << std::endl
				  << "Enter contact index: ";
		std::getline(std::cin, index);
		if (std::cin.eof())
			exit(0);
	}
	while (index.size() != 1 || index[0] < '1' || index[0] > '8')
	{
		// std::cout << "dkhel" << std::endl;
		std::cout << "Not a valid number" << std::endl
				  << "Enter contact index: ";
		std::getline(std::cin, index);
		if (std::cin.eof())
			exit(0);
	}
	if (index[0] >= '1' && index[0] <= '8')
	{
		index_casted = std::stoi(index);
		if (phonebook.getContact(index_casted - 1).getFirstName().empty())
			std::cout << "No contact found!" << std::endl;
		else
			phonebook.getContact(index_casted - 1).ContactDisplaying();
	}
}

int ExitCommand(PhoneBook phonebook)
{
	(void)phonebook;
	exit(0);
}

int main(void)
{
	PhoneBook phonebook;
	Contact contact;
	int contact_index;

	contact_index = 0;
	while (1)
	{
		std::cout << "Enter the command: ";
		std::string command;
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);

		if (command == "ADD")
		{
			AddCommand(contact, &phonebook, contact_index);
			contact_index++;
		}
		if (command == "SEARCH")
			SearchCommand(phonebook, contact);
		if (command == "EXIT")
			ExitCommand(phonebook);
		else
		{
			if (command.empty() || (command != "ADD" && command != "SEARCH" && command != "EXIT"))
				std::cout << "Please enter a valid command. (ADD, SEARCH or EXIT)" << std::endl;
		}
	}
	return (0);
}
