/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:52:05 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/02 22:09:19 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_HPP
#define	PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>

class	PhoneBook
{
	public:

		Contact	contacts[7];
		PhoneBook(void);
		~PhoneBook(void);

		void    AddToPhoneBook(Contact contact);
};

#endif
