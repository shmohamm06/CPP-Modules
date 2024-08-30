/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:10:35 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/30 10:12:01 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fpvalue(0)
{
    std::cout << "Default constructor called"  << std::endl;
};

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
};

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _fpvalue = other.getRawBits();
    }
    return (*this);
};

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fpvalue);
};

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fpvalue = raw;
};