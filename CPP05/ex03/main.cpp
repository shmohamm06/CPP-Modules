/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:52:59 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/11 14:30:07 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << std::endl;
	Intern		i;
	AForm		*f;
	Bureaucrat	b("b1", 1);
	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	{
		f = i.makeForm("shrubbery creation", "f1");
		if (f)
		{
    	    std::cout << std::endl;
			std::cout << *f << std::endl;
			b.signForm(*f);
   	    	std::cout << "----------------------------------" << std::endl;
			std::cout << std::endl;
			f->execute(b);
			delete (f);
		}
	}
}