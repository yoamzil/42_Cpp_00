/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:04:19 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/05 22:28:47 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main(void)
{
	PhoneBook		phonebook;
	Contact			contact;
	int				contact_index;

	contact_index = 0;
	while (1)
	{
		std::string		command;
	
		std::cout << "Enter the command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);

		if (command == "ADD")
		{
			phonebook.AddCommand(contact, &phonebook, contact_index);
			contact_index++;
		}
		else if (command == "SEARCH")
			phonebook.SearchCommand(phonebook);
		else if (command == "EXIT")
			phonebook.ExitCommand();
		else if (command.empty() || (command != "ADD" && command != "SEARCH" && command != "EXIT"))
			std::cout << "Please enter a valid command. (ADD, SEARCH or EXIT)" << std::endl;
	}
	return (0);
}
