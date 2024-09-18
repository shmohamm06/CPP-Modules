/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:23:37 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/18 11:36:46 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr) 
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) 
{
	return reinterpret_cast<Data*>(raw);
}

int main() 
{
	Data* data;
	uintptr_t rawData;
	Data* retData;

	data = new Data;

	std::cout << "Data              : " << data << std::endl;
	rawData = serialize(data);
	std::cout << "Raw data          : " << rawData << std::endl;
	retData = deserialize(rawData);
	std::cout << "Deserialized data : " << retData << std::endl;

	delete data;

	return 0;
}
