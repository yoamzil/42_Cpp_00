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

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class	PhoneBook
{
	public:
		void	AddToPhoneBook(Contact contact, int i);
		void	AddCommand(Contact contact, PhoneBook *phonebook, int i);
		void	SearchCommand(PhoneBook phonebook);
		void	ExitCommand();
		int		checkWhiteSpaces(std::string s);

		Contact getContact(int i);

	private:
		Contact contacts_array[8];
};

#endif
