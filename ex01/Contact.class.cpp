/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:13:46 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/01 09:54:50 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

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

void    Contact::ContactFilling(std::string  first, std::string  last, std::string   nick, std::string   phone, std::string  secret) : first(first_name), last(last_name), nick(nick_name), phone(phone_number), secret(darkest_secret)
{}