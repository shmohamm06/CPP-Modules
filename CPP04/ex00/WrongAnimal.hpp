/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:10:00 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/01 11:10:01 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"
#include <iostream>

class WrongAnimal : public Animal {
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &other);
	~WrongAnimal(void);
	WrongAnimal &operator=(WrongAnimal const &other);
	void makeSound() const;
};



#endif
