/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:00:13 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/19 11:46:59 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		std::cout << std::endl;
    	Bureaucrat *ab = new Bureaucrat("Shah", 2);
		std::cout << std::endl;
		std::cout << *ab << std::endl;
		ab->increment();
		std::cout << *ab << std::endl;
		ab->increment();
		std::cout << *ab << std::endl;
		ab->increment();
		std::cout << *ab << std::endl;
		delete ab;
	} catch (std::exception& a) {
		std::cout << a.what() << std::endl;
	}
}
