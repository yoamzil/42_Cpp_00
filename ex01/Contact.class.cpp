/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:13:46 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/03 10:34:39 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
    // std::cout << "Contact constructor called" << std::endl;
    return;
}

Contact::~Contact(void)
{
    // std::cout << "Contact destructor called" << std::endl;
    return;
}

void Contact::ContactFilling(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
    first_name = first;
    last_name = last;
    nick_name = nick;
    phone_number = phone;
    darkest_secret = secret;
}

void    Contact::ContactDisplaying()
{
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nick_name << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}
