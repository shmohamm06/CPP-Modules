/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:09:54 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/02 13:22:27 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int numAnimals = 4;
    Animal *animals[numAnimals];

    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }
    for (int i = 0; i < numAnimals; ++i) {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }
    return 0;
}
