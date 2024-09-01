/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:09:36 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/01 11:09:37 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat: destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = other;
}

void Cat::makeSound() const {
	std::cout << "meow!" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "cat: assignation operator called" << std::endl;
	if (this != &other){
	this->_type = other.getType();
	}
	return *this;
}
