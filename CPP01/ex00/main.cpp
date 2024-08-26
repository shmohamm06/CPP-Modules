/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:44:07 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/26 10:50:04 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("z1");
    Zombie *zombie2 = newZombie("z2");
    zombie2->announce();
    delete zombie2;
    randomChump("z3");
    return 0;
}
