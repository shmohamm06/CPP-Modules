/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:47 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/26 16:13:29 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const {
	if (_weapon != NULL) {
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << " doesn't have a weapon to attack." << std::endl;
	}
}

void HumanB::setWeapon(const Weapon& weapon) {
	this->_weapon = (Weapon*)&weapon;
}