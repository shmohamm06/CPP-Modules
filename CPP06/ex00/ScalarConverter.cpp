/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:33:54 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/21 10:16:34 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) { *this = other; }
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string& literal) 
{
    std::string specialTypes[6] = 
    {
        "-inff", "+inff", "nanf",
        "-inf", "+inf", "nan"
    };

    std::string toChar = "";
    int toInt = 0;
    float toFloat = 0.0f;
    double toDouble = 0.0;

    // Handle single character literals (e.g., 'a', 'c')
    if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0])) 
    {
        toChar = literal[0];
        std::cout << "char: " << toChar << std::endl;
        std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
        return;
    }

    // Convert to int
    toInt = std::atoi(literal.c_str());

    // Check if the literal ends with 'f' for float
    if (literal[literal.length() - 1] == 'f') 
    {
        toFloat = std::atof(literal.c_str());
        toDouble = static_cast<double>(toFloat);
    } 
    else 
    {
        toDouble = std::atof(literal.c_str());
        toFloat = static_cast<float>(toDouble);
    }

    // Handle special pseudo-literals
    for (int i = 0; i < 6; ++i) 
    {
        if (literal == specialTypes[i]) 
        {
            toChar = "impossible";
            break;
        }
    }

    if (toChar.empty() && (toInt >= 32 && toInt <= 126)) 
    {
        toChar = "'";
        toChar += static_cast<char>(toInt);
        toChar += "'";
    } 
    else if (toChar.empty()) 
    {
        toChar = "Non displayable";
    }

    // Output results
    std::cout << "char: " << toChar << std::endl;
    
    if (toChar == "impossible") 
    {
        std::cout << "int: impossible" << std::endl;
    } 
    else 
    {
        std::cout << "int: " << toInt << std::endl;
    }

    if (toChar == "impossible" && toFloat == 0.0f) 
    {
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    } 
    else 
    {
        if (toChar != "impossible" && toFloat - static_cast<int>(toFloat) == 0) 
        {
            std::cout << "float: " << toFloat << ".0f" << std::endl;
            std::cout << "double: " << toDouble << ".0" << std::endl;
        } 
        else 
        {
            std::cout << "float: " << toFloat << "f" << std::endl;
            std::cout << "double: " << toDouble << std::endl;
        }
    }
}
