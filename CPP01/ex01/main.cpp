/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:44:07 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/26 10:50:39 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int size = 3;
	Zombie *zhorde;
	zhorde = zombieHorde(size, "clicker");
	for (int i = 0; i < size; i++) zhorde[i].announce();
	delete[] zhorde;
}
