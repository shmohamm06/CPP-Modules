/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:11:40 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/24 11:15:55 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main() 
{
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    try 
    {

        int result = easyfind(numbers, 30);
        std::cout << "Found: " << result << std::endl;
        
        result = easyfind(numbers, 100);
        std::cout << "Found: " << result << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
