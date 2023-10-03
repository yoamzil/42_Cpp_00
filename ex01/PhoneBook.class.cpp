/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:13:53 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/03 21:21:44 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "PhoneBook constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook destructor called" << std::endl;
	return;
}

void	PhoneBook::AddToPhoneBook(Contact contact, int i)
{
    int index;

	index = i % 8;
    contacts_array[index] = contact;
    std::cout << "----- Contact number " << i + 1 << " Added in the case number " << index + 1 << " -----"  << std::endl;
    // contacts_array[index].ContactDisplaying();
    // std::cout << "--------------------------" << std::endl;
}

Contact	PhoneBook::getContact(int i)
{
	return(contacts_array[i]);
}

// std::string PhoneBook::TruncateString(std::string str)
// {
// }
