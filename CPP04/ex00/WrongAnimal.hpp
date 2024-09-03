/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:10:00 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/02 12:43:44 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal : public Animal {
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &other);
	~WrongAnimal(void);
	WrongAnimal &operator=(WrongAnimal const &other);
	void makeSound() const;
};

#endif
