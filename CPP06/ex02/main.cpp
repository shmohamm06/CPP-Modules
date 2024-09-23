/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:49:36 by prossi            #+#    #+#             */
/*   Updated: 2024/09/21 11:34:01 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base::~Base() {}

Base* generate() 
{
	std::srand(time(NULL));

	int n = rand() % 3;
	switch (n) {
		case 0:
			std::cout << "A class Generated" << std::endl;
			return new A;
		case 1:
			std::cout << "B class Generated" << std::endl;
			return new B;
		case 2:
			std::cout << "C class Generated" << std::endl;
			return new C;
	}

	std::cout << "Can't generate a class" << std::endl;
	return NULL;
}

void identify(Base* p) 
{
	if (dynamic_cast<A*>(p) != NULL) 
	{
		std::cout << "A class was identified" << std::endl;
	} 
	else if (dynamic_cast<B*>(p) != NULL) 
	{
		std::cout << "B class was identified" << std::endl;
	} 
	else if (dynamic_cast<C*>(p) != NULL) 
	{
		std::cout << "C class was identified" << std::endl;
	} 
	else 
	{
		std::cout << "Class cannot be identified" << std::endl;
	}
}

void identify(Base& p) 
{
	try 
	{
		A& aux = dynamic_cast<A&>(p); (void)aux;
		std::cout << "A class was identified" << std::endl;
		return;
	} 
	
	catch (...) {}

	try 
	{
		B& aux = dynamic_cast<B&>(p); (void)aux;
		std::cout << "B class was identified" << std::endl;
		return;
	} 
	
	catch (...) {}

	try 
	{
		C& aux = dynamic_cast<C&>(p); (void)aux;
		std::cout << "C class was identified" << std::endl;
		return;
	} 
	
	catch (...) {}

	std::cout << "Class cannot be identified" << std::endl;
}

int main() 
{
	Base *base;
	
	base = generate();
	identify(base);
	identify(*base);
	return 0;
}