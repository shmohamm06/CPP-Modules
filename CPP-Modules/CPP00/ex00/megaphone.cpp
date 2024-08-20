/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:11:47 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/20 12:44:09 by shmohamm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    
    if(ac == 1)
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
    else
    {
        while(i < ac)
        {
            j = 0;
            while(av[i][j])
            {
                std :: cout << static_cast<char>(toupper(av[i][j]));
                j++;
            }
            if (i < ac - 1) 
            {
                std::cout << " ";
            }
            i++;
        }
    }
    std :: cout << std :: endl;
}

