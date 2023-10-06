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
