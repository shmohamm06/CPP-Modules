/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:14:42 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/04 11:17:09 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero"); // Throw an exception if b is 0
    }
    return a / b;
}

int main() {
    try {
        int result = divide(10, 2); // This will throw an exception
        std::cout << "Result: " << result << std::endl;
    }
    catch (std::runtime_error &e) { // Catch the exception
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    std::cout << "Program continues after exception handling." << std::endl;
    return 0;
}
