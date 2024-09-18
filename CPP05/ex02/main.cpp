/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:52:59 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/11 11:07:13 by shmohamm         ###   ########.fr       */
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
        Bureaucrat a("b1", 130);
		std::cout << std::endl;
        Bureaucrat b("b2", 140);
		std::cout << std::endl;
		ShrubberyCreationForm c("f1");
		std::cout << std::endl;
        std::cout << c << std::endl;
        a.signForm(c);
        std::cout << std::endl;
		a.executeForm(c);
		std::cout << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}