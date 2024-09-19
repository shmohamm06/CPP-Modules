/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:52:59 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/19 12:14:42 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main(void)
{
	 try {
		std::cout << std::endl;
        Bureaucrat b1("b1", 130);
        Bureaucrat b2("b2", 140);
        Bureaucrat b3("b3", 20);
        Bureaucrat b4("b4", 50);
		ShrubberyCreationForm f1("f1");
		RobotomyRequestForm f2("f2");
		PresidentialPardonForm f3("f3");
		std::cout << "----------------------------------" << std::endl;
        std::cout << f1 << std::endl;
        b1.signForm(f1);
		b1.executeForm(f1);
		std::cout << std::endl;
        std::cout << f2 << std::endl;
        b4.signForm(f2);
		b4.executeForm(f2);
		std::cout << std::endl;
        std::cout << f3 << std::endl;
        b3.signForm(f3);
		b3.executeForm(f3);
		std::cout << "----------------------------------" << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
