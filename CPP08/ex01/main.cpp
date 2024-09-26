/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:26:56 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/25 12:45:37 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
	std::cout << std::endl;
	try 
	{
		Span a(5);
		a.addNumber(2);
		a.addNumber(4);
		a.addNumber(6);
		a.addNumber(8);
		a.addNumber(10);
		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
	} 
	
	catch (std::exception& e) 
	{
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try 
	{
		Span b(5);
		b.addNumber(2);
		b.addNumber(4);
		b.addNumber(6);
		b.addNumber(8);
		b.addNumber(10);
		b.addNumber(12);
		std::cout << b.shortestSpan() << std::endl;
		std::cout << b.longestSpan() << std::endl;
	}
	
	catch (std::exception& e) 
	{
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Span c(5);
		c.addNumber(2);
		std::cout << c.shortestSpan() << std::endl;
		std::cout << c.longestSpan() << std::endl;
	}
	
	catch (std::exception& e)
	{
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}
	
	try 
	{
		Span d(1);
		d.addNumber(2);
		std::cout << d.shortestSpan() << std::endl;
		std::cout << d.longestSpan() << std::endl;
	} 
	
	catch (std::exception& e) 
	{
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::vector<int> big(10000);
	
	for (int i = 0; i < 10000; ++i) big[i] = i;
	
	try 
	{
		Span e(10000);
		e.addNumber(big.begin(), big.end());
		std::cout << e.shortestSpan() << std::endl;
		std::cout << e.longestSpan() << std::endl;
	} 
	
	catch (std::exception& e) 
	{
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}
	return 0;
}