/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:13:53 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/02 22:11:07 by yoamzil          ###   ########.fr       */
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

void    PhoneBook::AddToPhoneBook(Contact contact)
{
    (void)contact;
    std::cout << "AddToPhoneBook function called" << std::endl;
    return;
}