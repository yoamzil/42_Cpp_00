/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

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
