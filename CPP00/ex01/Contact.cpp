/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:47:47 by wyaseen           #+#    #+#             */
/*   Updated: 2024/08/22 13:42:20 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

Contact::Contact()
{
	for (int i = 1 ; i < 5 ; i++)
		_infos[i] = std::string();
	_fields[0] = "First name";
	_fields[1] = "Last name";
	_fields[2] = "Nickname";
	_fields[3] = "Phone number";
	_fields[4] = "Darkest secret 😈";
}

int Contact::fill(int index)
{
    _index = index;
    for (int i = 0; i < 5; i++)
    {
        while (_infos[i].empty())
        {
            std::cout << _fields[i] << " : ";
            std::getline(std::cin, _infos[i]);

            if (std::cin.eof() || std::cin.fail())
            {
                std::cout << "\nInvalid input - Exiting PhoneBook" << std::endl;
                return (-1);
            }
            if (i == 3) 
            {
                if (!_infos[i].empty() && _infos[i].find_first_not_of("0123456789") != std::string::npos)
                {
                    std::cout << "Error! Phone number must contain digits only." << std::endl;
                    _infos[i].clear(); 
                    continue; 
                }
            }
            if (_infos[i].empty())
            {
                std::cout << "Error! Invalid value" << std::endl;
            }
        }
    }
	system("clear");
    return 0;
}

void	Contact::display_list()
{
	std::cout << "│" << std::setw(10) << _index;
	for (int i = 0 ; i < 3 ; i++)
	{
		if (_infos[i].size() < 10)
			std::cout << "│" << std::setw(10) << _infos[i];
		else
			std::cout << "│" << _infos[i].substr(0, 9) << ".";
	}
	std::cout << "│" << std::endl;
}

void	Contact::display_detail()
{
	for (int i = 0 ; i < 5 ; i++)
		std::cout << _fields[i] << " : " << _infos[i] << std::endl;
}
