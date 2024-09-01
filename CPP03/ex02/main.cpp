/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:58:02 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/01 14:11:11 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	FragTrap *b = new FragTrap("Wahab");
	b->attack("Norminette");
	b->takeDamage(50);
	b->beRepaired(1);
	b->highFivesGuys();
	return 0;
}