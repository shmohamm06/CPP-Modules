/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:56:16 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/27 11:26:23 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    std::string in;
    Harl        harl;
    std::cout << "Enter a level: ";
    std::cin >> in;
    harl.complain(in);
    return 0;
}
