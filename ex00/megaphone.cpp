/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:20 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/05 19:24:04 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	StringCap(std::string *str)
{
	for (int c = 0; (*str)[c]; c++)
	{
		if (std::islower((*str)[c]))
			(*str)[c] = std::toupper((*str)[c]);
	}
}

void	StartingProgram(std::string str)
{
	StringCap(&str);
	for (int c = 0; str[c]; c++)
	{
		if (c != '"')
			std::cout << str[c];
	}
}

int	main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 1;
		while (i <= ac - 1)
		{
			if (i > 1)
				std::cout << " ";
			StartingProgram(av[i]);
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}