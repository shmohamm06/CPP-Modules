/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyaseen <wyaseen@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:42:16 by wyaseen           #+#    #+#             */
/*   Updated: 2024/08/21 15:02:08 by wyaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void putst(std::string temp)
{
	std::cout << " | ";
	if (temp.size() > 10)
	{
		temp.resize(9);
		std::cout << temp << ".";
	}
	else
		std::cout << temp;
}

bool is_numeric(const std::string& str)
{
    for (std::string::size_type i = 0; i < str.size(); ++i)
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

int main(void)
{
	PhoneBook PB;
	std::string command;
	int selector;
	PB.num = 0;

	while (1)
	{
		system("clear");
		std::cout << "\t\tWelcome to Shahriar's PhoneBook" << std::endl;
		std::cout << "To ADD a contact: press 1, To SEARCH for a contact: press 2, and to EXIT: press 3" << std::endl;
		std::cin >> command;

		if ((command == "ADD" || command == "1") && command != "\0")
		{
			system("clear");
			std::cout << "ADD New Contact" << std::endl;

			for (int i = PB.num - 1; i >= 0; i--)
				PB.Cons[i + 1] = PB.Cons[i];

			std::string input;

			std::cout << "First name: ";
			std::cin >> input;
			if(input == "\0")
				break ;
			PB.Cons[0].set_name(input);

			std::cout << "Last name: ";
			std::cin >> input;
			if(input == "\0")
				break ;
			PB.Cons[0].set_last_name(input);

			std::cout << "Nickname: ";
			std::cin >> input;
			if(input == "\0")
				break ;
			PB.Cons[0].set_nick_name(input);

			do {
				std::cout << "Phone number (digits only): ";
				std::cin >> input;
			} while (!is_numeric(input));
			PB.Cons[0].set_phone(input);

			std::cin.ignore();
			std::cout << "Darkest secret 😈: ";
			if(!(std::getline(std::cin, input)))
			{
				std::cout << "\nError: Darkest secret cannot be empty. Exiting..." << std::endl;
				exit(1); 
			}
			PB.Cons[0].set_secret(input);
			if (PB.num < 8)
				PB.num++;
		}
		else if (command == "SEARCH" || command == "2")
		{
			 if (PB.num == 0)
   			 {
       			 std::cout << "No available contacts" << std::endl;
        		std::cout << "Press enter to go back" << std::endl;
        		std::cin.ignore();
        		std::cin.get();
        		continue;
    		}

			for (int i = 0; i < PB.num; i++)
			{
				std::cout << i + 1;
				putst(PB.Cons[i].get_name());
				putst(PB.Cons[i].get_last_name());
				putst(PB.Cons[i].get_nick_name());
				putst(PB.Cons[i].get_phone());
				putst(PB.Cons[i].get_secret());
				std::cout << " | " << std::endl;
			}

			std::cin >> selector;
			if(selector == 0)
				break ;
			selector--;
			system("clear");

			if (selector >= 0 && selector < PB.num)
			{
				std::cout << PB.Cons[selector].get_name() << std::endl;
				std::cout << PB.Cons[selector].get_last_name() << std::endl;
				std::cout << PB.Cons[selector].get_nick_name() << std::endl;
				std::cout << PB.Cons[selector].get_phone() << std::endl;
				std::cout << PB.Cons[selector].get_secret() << std::endl;
			}
			else
				std::cout << "Invalid selection." << std::endl;
			selector++;
			while (1)
			{
				if(selector == 0)
					break ;
				std::cout << "Type BACK - 1 to go back" << std::endl;
				command.clear();
				std::cin >> command;
				if (command == "BACK" || command == "1" || command == "\0")
					break;
			}
		}
		else if (command == "EXIT" || command == "3" || command == "\0")
			break;
	}
}
