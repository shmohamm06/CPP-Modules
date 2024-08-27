/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:56 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/27 14:00:51 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon sword = Weapon("sharp longsword");
        HumanA alice("Alice", sword);
        alice.attack();
        sword.setType("flaming sword");
        alice.attack();
    }
    {
        Weapon axe = Weapon("battle axe");
        HumanB eve("Eve");
        eve.attack();
        eve.setWeapon(axe);
        eve.attack();
        axe.setType("double-edged axe");
        eve.attack();
    }
    return 0;
}

// int main()
// {
//     {
//         Weapon club = Weapon("crude spiked club");
//         HumanA bob("Bob", club);
//         bob.attack();
//         club.setType("some other type of club");
//         bob.attack();
//     }
//     {
//         Weapon club = Weapon("crude spiked club");
//         HumanB jim("Jim");
//         jim.setWeapon(club);
//         jim.attack();
//         club.setType("some other type of club");
//         jim.attack();
//     }
//     return 0;
// }
