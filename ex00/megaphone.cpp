/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:20 by yoamzil           #+#    #+#             */
/*   Updated: 2023/09/29 18:55:11 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using   namespace   std;

void    letter_capitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
}

void    starting_program(char *str)
{
    int i;

    i = 0;
    letter_capitalize(str);
    while (str[i])
    {
        if (str[i] != '"')
            cout << str[i];
        i++;
    }
}
int main(int ac, char **av)
{
    int i;
    int check;

    if (ac >= 2)
    {
        i = 1;
        check = 1;
        while (i <= ac -1)
        {
            if (!check)
                cout << " ";
            check = 0;
            starting_program(av[i]);
            i++;
        }
        cout << endl;
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return (0);     
}