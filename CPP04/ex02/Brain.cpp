/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:49:21 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/02 13:04:51 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain: destructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain: assignation operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
        this->ideas[i] = other.ideas[i];
        }
    }
	return *this;
}
