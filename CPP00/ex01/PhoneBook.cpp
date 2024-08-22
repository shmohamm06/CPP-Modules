/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:55:15 by wyaseen           #+#    #+#             */
/*   Updated: 2024/08/22 13:42:20 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

PhoneBook::PhoneBook()
{
	_number = 0;
}

int		PhoneBook::add()
{
	if (_number < 8)
	{
		system("clear");
		if (_contacts[_number].fill(_number + 1) < 0)
			return (-1);
		_number++;
	}
	else
		std::cout << "Error! Memory is full." << std::endl;
	return (0);
}

int PhoneBook::select()
{
    int flag;
    char *index = new char[2];

    flag = 1;
    std::cout << "Please select an index : ";
    std::cin >> index;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (std::cin.fail() || std::cin.eof())
	{
		std::cout << "\nInvalid Input - Exiting PhoneBook" << std::endl;
		return (-1);
	}
    for (size_t i = 0; i < strlen(index); i++)
    {
        if (isdigit(index[i]) == 0)
            flag = 0;
    }
    if (!flag || std::cin.fail() || std::cin.eof() || atoi(index) > _number || atoi(index) <= 0)
    {
		system("clear");
        std::cout << "Error: Invalid index value." << std::endl;
        delete[] index;
        return (1);
    }
    _contacts[atoi(index) - 1].display_detail();
    delete[] index;
    return (0);
}

int		PhoneBook::display_PhoneBook()
{
	if (_number == 0)
		std::cout << "Error: PhoneBook is empty." << std::endl;
	else
	{
		std::cout << "│     INDEX│FIRST NAME│ LAST NAME│  NICKNAME│" << std::endl;
		for (int i = 0 ; i < _number ; i++)
			_contacts[i].display_list();
		if (select() < 0)
			return (-1);
	}
	return (0);
}
