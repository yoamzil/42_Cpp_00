/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:52:05 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/01 17:45:32 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_H
#define	PHONEBOOK_CLASS_H

class	PhoneBook
{
	public:
		char	contacts[7];

		PhoneBook(void);
		~PhoneBook(void);
		void    AddToPhoneBook(void);
};

#endif
