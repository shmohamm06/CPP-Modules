/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:08:30 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/18 12:13:38 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void times_two(int const &n) 
{
    std::cout << n * 2 << std::endl;
}

void print(std::string const &s) 
{
    std::cout << s << std::endl;
}

int main() 
{
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* array = new int[size];
    for (int i = 0; i < size; ++i) 
    {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> array[i];
    }

    ::iter(array, size, times_two);
    delete[] array;
    return 0;
}
