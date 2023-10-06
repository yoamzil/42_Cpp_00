/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	PhoneBook::AddToPhoneBook(Contact contact, int i)
{
	int	index;

	index = i % 8;
	contacts_array[index] = contact;
	std::cout << "----- Contact number " << i + 1 << " Added in the case number " << index + 1 << " -----" << std::endl;
}

Contact		PhoneBook::getContact(int i)
{
	return (contacts_array[i]);
}

int		PhoneBook::checkWhiteSpaces(std::string s)
{
	int i;

	i = 0;
	if (s[i] == ' ' || s[i] == '\t')
		return (1);
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t')
		{
			if (s[i + 1] == ' ' || s[i + 1] == '\t')
				return (1);
		}
		i++;
	}
	if (s[i - 1] == ' ' || s[i - 1] == '\t')
		return (1);
	return (0);
}

void	PhoneBook::AddCommand(Contact contact, PhoneBook *phonebook, int i)
{
	std::string		first;
	std::string		last;
	std::string		nick;
	std::string		phone;
	std::string		secret;

	std::cout << "(Spaces and tabs are not acceptable at the start and the end of the fields, try to avoid them!)" << std::endl;
	std::cout << "Enter first name: ";
	std::getline(std::cin, first);
	if (std::cin.eof())
		exit(0);
	while (first.empty() || checkWhiteSpaces(first))
	{
		std::cout << "Try again!!!" << std::endl
				  << "Enter first name: ";
		std::getline(std::cin, first);
		if (std::cin.eof())
			exit(0);
	}

	std::cout << "Enter last name: ";
	std::getline(std::cin, last);
	if (std::cin.eof())
		exit(0);
	while (last.empty() || checkWhiteSpaces(last))
	{
		std::cout << "Try again!!!" << std::endl
				  << "Enter last name: ";
		std::getline(std::cin, last);
		if (std::cin.eof())
			exit(0);
	}

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nick);
	if (std::cin.eof())
		exit(0);
	while (nick.empty() || checkWhiteSpaces(nick))
	{
		std::cout << "Try again!!!" << std::endl
				  << "Enter nickname: ";
		std::getline(std::cin, nick);
		if (std::cin.eof())
			exit(0);
	}

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone);
	if (std::cin.eof())
		exit(0);
	while (phone.empty() || checkWhiteSpaces(phone))
	{
		std::cout << "Try again!!!" << std::endl
				  << "Enter phone number: ";
		std::getline(std::cin, phone);
		if (std::cin.eof())
			exit(0);
	}

	std::cout << "Tell me your darkest secret: ";
	std::getline(std::cin, secret);
	if (std::cin.eof())
		exit(0);
	while (secret.empty() || checkWhiteSpaces(secret))
	{
		std::cout << "Try again!!!" << std::endl
				  << "Tell me your darkest secret... NOWWW!: ";
		std::getline(std::cin, secret);
		if (std::cin.eof())
			exit(0);
	}
	contact.ContactFilling(first, last, nick, phone, secret);
	phonebook->AddToPhoneBook(contact, i);
}

void	PhoneBook::SearchCommand(PhoneBook phonebook)
{
	std::string		index;
	int				index_casted;
	std::string		first;
	std::string		last;
	std::string		nick;

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

void PhoneBook::ExitCommand()
{
	std::cout << "Are you sure you want to exit (yes/no): ";

	std::string		command;
	std::getline(std::cin, command);
	if (std::cin.eof())
		exit(0);

	while (command != "yes" && command != "no")
	{
		std::cout << "It's a yes or no question genuis." << std::endl
				  << "Are you sure you want to exit: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
	}
	if (command == "yes")
		exit(0);
}
