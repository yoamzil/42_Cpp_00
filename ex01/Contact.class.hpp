/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:51:57 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/03 15:53:55 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>


class   Contact
{
    public:

        Contact(void);
        ~Contact(void);
    
        void    ContactFilling(std::string  first, std::string  last, std::string   nick, std::string   phone, std::string  secret);
        void    ContactDisplaying();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
    
    private:

        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

};

#endif