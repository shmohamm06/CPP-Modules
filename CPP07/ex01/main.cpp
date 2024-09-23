/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:08:30 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/23 12:21:36 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void times_two(int const &n) 
{
    std::cout << n * 2 << std::endl;
}

int main() 
{
    const int size = 5;
    int array[size] = {1, 2, 3, 4, 5};    
    iter(array, size, times_two);
    return 0;
}
