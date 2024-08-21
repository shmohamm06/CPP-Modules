/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:08:39 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/21 15:08:40 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < ac; ++i)
        {
            for (int j = 0; av[i][j] != '\0'; ++j)
            {
                std::cout << (char)toupper(av[i][j]);
            }
            if (i < ac - 1) 
            {
                std::cout << " ";
            }
        }
    }
    std::cout << std::endl;
}
