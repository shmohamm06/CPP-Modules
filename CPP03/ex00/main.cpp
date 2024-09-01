/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:59:39 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/01 13:59:40 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap* a = new ClapTrap("Wahab");
    ClapTrap* b = new ClapTrap("Fahad");

    a->attack("Raouf");
    a->takeDamage(5);
    a->beRepaired(10);

    b->attack("Schindler");
    b->takeDamage(5);
    b->beRepaired(10);
    ClapTrap c(*a);
    c.attack("CopiedTarget");
    ClapTrap d("InitialName");
    d = *b;
    d.attack("AnotherCopiedTarget");
    delete a;
    delete b;

    return 0;
}
