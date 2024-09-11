/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:48:22 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/11 10:49:56 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	try{
		std::cout << std::endl;
		Bureaucrat* ab = new Bureaucrat("b1", 150);
		std::cout << std::endl;
		Bureaucrat* ac = new Bureaucrat("b2", 20);
		std::cout << std::endl;
		Form* cd = new Form("f1", 30, 10);

		std::cout <<  std::endl << *cd << std::endl;
		try {
			ab->signForm(*cd);
			std::cout << std::endl;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl << *cd << std::endl;
		try {
			cd->beSigned(*ac);
			std::cout << std::endl;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		delete ab;
		delete cd;
		delete ac;
	}
	catch (std::exception& e) {
			std::cout << e.what() << std::endl;
	}
	return 0;
}