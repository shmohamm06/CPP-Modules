/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:09:26 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/02 09:16:45 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("") {
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type) {
	std::cout << "Animal: Parametrized constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal: Asignation operator called" << std::endl;
	if (this != &other){
	this->_type = other.getType();
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Unknown sound" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}
