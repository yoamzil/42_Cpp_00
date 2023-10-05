/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:52:05 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/05 18:29:01 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
