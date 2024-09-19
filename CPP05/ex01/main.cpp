/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:48:22 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/19 11:57:41 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	try{
		std::cout << std::endl;
		Bureaucrat* b1 = new Bureaucrat("b1", 150);
		Bureaucrat* b2 = new Bureaucrat("b2", 20);
		Form* f1 = new Form("f1", 30, 10);

		std::cout <<  std::endl << *f1 << std::endl;
		try {
			b1->signForm(*f1);
			std::cout << std::endl;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl << *f1 << std::endl;
		try {
			f1->beSigned(*b2);
			std::cout << std::endl;
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		delete b1;
		delete f1;
		delete b2;
	}
	catch (std::exception& e) {
			std::cout << e.what() << std::endl;
	}
	return 0;
}