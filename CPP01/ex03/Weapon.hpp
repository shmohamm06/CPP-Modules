/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:04:05 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/27 11:43:52 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon();
    const std::string& getType(void);
    void  setType(std::string newone);
};

#endif