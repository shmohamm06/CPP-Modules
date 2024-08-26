/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:56 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/26 16:26:59 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (1);
	}
	if (Sed::replace(av[1], av[2], av[3])) {
		return 1;
	}
	return 0;
}
