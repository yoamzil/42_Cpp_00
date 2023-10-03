/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:13:53 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/03 10:32:23 by yoamzil          ###   ########.fr       */
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

void    PhoneBook::AddToPhoneBook(Contact contact, int i)
{
    if (i <= 7)
        contacts_array[i] = contact;
    std::cout << "----- Contact Added -----" << std::endl;
    contacts_array[i].ContactDisplaying(); // Display the contact
    std::cout << "--------------------------" << std::endl;
}