/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:08:46 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/22 13:42:20 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int main(void)
{
    bool working = true;
    PhoneBook PhoneBook;
    std::string command;

    while (working)
    {
        std::cout << "\n\tWelcome to Shahriar's PhoneBook" << std::endl;
        std::cout << "Please enter a command. (ADD, SEARCH OR EXIT) : ";
        std::getline(std::cin, command);

        if (std::cin.fail() || std::cin.eof())
        {
            std::cout << "\nInvalid Input - Exiting PhoneBook" << std::endl;
            return (-1);
        }
        if (command == "ADD")
		{
            if (PhoneBook.add() < 0)
                break;
		}
        else if (command == "SEARCH")
		{
            if (PhoneBook.display_PhoneBook() < 0)
                break;
		}
        else if (command == "EXIT")
		{
            working = false;
		}
        else
            std::cout << "Invalid command. Please enter a valid command." << std::endl;
    }
    return 0;
}
