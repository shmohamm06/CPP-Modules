/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:38:23 by shmohamm          #+#    #+#             */
/*   Updated: 2024/10/14 12:42:38 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) 
{
	if (ac != 2) 
    {
        std::cout << "Invalid input format." << std::endl;
		return -1;
	}
    
	RPN	calculator;
	try 
    {
		std::cout << calculator.readArg(av[1]) << std::endl;
	} 
    catch (const std::exception &e) 
    {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
