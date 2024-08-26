/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:40 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/26 16:13:41 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
# define HUMANB_HPP_

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(const Weapon &weapon);
	private:
		std::string _name;
		Weapon* _weapon;
};

#endif