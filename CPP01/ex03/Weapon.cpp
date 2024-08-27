/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:04:07 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/27 11:48:53 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType(void) {
    return this->_type;
}

void Weapon::setType(std::string newone) {
    this->_type = newone;
}
