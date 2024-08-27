/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:54:43 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/27 11:26:46 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "Expressing how much they love adding extra bacon to their massive 7XL burger with double cheese, triple pickles, and special ketchup." << std::endl;
}

void    Harl::info()
{
    std::cout << "Shocked by the cost of extra bacon, and upset that there’s not enough bacon in the burger." << std::endl;
}

void    Harl::warning()
{    
    std::cout << "Asking for free extra bacon, emphasizing loyalty as a long-time customer." << std::endl;
}

void    Harl::error()
{
    std::cout << "Finding the situation unacceptable and demanding to speak with the manager right away." << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*Function[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string levels[4] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    for (size_t i = 0; i < sizeof(levels) / sizeof(levels[0]) ; i++)
    {
        if (levels[i] == level)
        {    
            (this->*Function[i])();
                return ;
        }
    }
}
