/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:33:51 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/17 12:49:56 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
	if (argc == 1) 
	{
		std::cout << "Error: Invalid parameters\n" << "Usage: <program> <literal>" << std::endl;
		return 1;
	}

	Scalar::convert(argv[1]);
	return 0;
}