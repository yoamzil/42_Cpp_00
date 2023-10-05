/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:20 by yoamzil           #+#    #+#             */
/*   Updated: 2023/10/05 21:52:40 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	stringCap(std::string *str)
{
	for (int c = 0; (*str)[c]; c++)
	{
		if (std::islower((*str)[c]))
			(*str)[c] = std::toupper((*str)[c]);
	}
}

void	startingProgram(std::string str)
{
	stringCap(&str);
	for (int c = 0; str[c]; c++)
	{
		if (str[c] != '"')
			std::cout << str[c];
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (i <= ac - 1)
		{
			if (i > 1)
				std::cout << " ";
			startingProgram(av[i]);
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}