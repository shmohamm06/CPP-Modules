/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:23:29 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/18 11:23:30 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP_
# define DATA_HPP_

# include <cstdint>
# include <iostream>
# include <stdint.h>

struct Data 
{
	int n;
};

uintptr_t serialize(Data *ptr);

Data* deserialize(uintptr_t raw);

#endif