/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:20 by yoamzil           #+#    #+#             */
/*   Updated: 2023/09/29 19:26:19 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	StringCap(std::string str)
{
	for (char c : str)
	{
		if (std::islower(c))
			c = std::toupper(c);
	}
}

void	StartingProgram(std::string str)
{
	StringCap(str);
	for (char c : str)
	{
		if (c != '"')
			std::cout << c;
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