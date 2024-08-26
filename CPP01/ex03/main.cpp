/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:56 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/26 16:16:24 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA wahab("Wahab", club);
        wahab.attack();
        club.setType("some other type of club");
        wahab.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB amal("Amal");
        amal.setWeapon(club);
        amal.attack();
        club.setType("some other type of club");
        amal.attack();
    }
    return 0;
}
