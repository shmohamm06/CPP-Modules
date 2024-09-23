/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:21:15 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/23 12:24:10 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> a(3);

    a[0] = 10;
    a[1] = 15;
    a[2] = 20;
    
    std::cout << std::endl;
    for (size_t i = 0; i < a.size(); i++)
        std::cout << "a[" << i << "] = " << a[i] << std::endl;

    Array<int> b = a;
    std::cout << "\nBefore modifying b[0]: " << std::endl;
    std::cout << "b[0] = " << b[0] << std::endl;

    b[0] = 20;
    std::cout << "\nAfter modifying b[0]: " << std::endl;
    std::cout << "a[0] = " << a[0] << std::endl;
    std::cout << "b[0] = " << b[0] << std::endl;

    try {
        std::cout << "\nAttempting to access a[6]:" << std::endl;
        std::cout << a[6] << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    return 0;
}
