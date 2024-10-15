/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:17:24 by shmohamm          #+#    #+#             */
/*   Updated: 2024/10/14 12:17:25 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main(int ac, char **av) 
{
	if (ac != 2) 
    {	
		std::cout << "Invalid input format." << std::endl;
		return -1;
	}
	try 
    {
		BitcoinExchange ex;
		ex.fillMap("data.csv");
		ex.readInFile(av[1]);
	} catch (const std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
}