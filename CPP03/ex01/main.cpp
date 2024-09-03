/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:59:53 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/02 10:01:45 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap *a = new ScavTrap("Wahab");
	a->attack("Norminette");
	a->takeDamage(1200);
	a->beRepaired(1000);
	a->guardGate();
	return 0;
}