/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:23:37 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/21 10:29:26 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#include "Data.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data data;
    data.n = 42;

    uintptr_t raw = Serializer::serialize(&data);

    Data* deserializedData = Serializer::deserialize(raw);

	std::cout << std::endl;
    std::cout << "Original Data address: " << &data << std::endl;
	std::cout << std::endl;
    std::cout << "Serialized value: " << raw << std::endl;
	std::cout << std::endl;
    std::cout << "Deserialized Data address: " << deserializedData << std::endl;
	std::cout << std::endl;
    if (deserializedData == &data)
        std::cout << "Deserialization successful: the addresses match!" << std::endl;
    else
        std::cout << "Deserialization failed: the addresses do not match!" << std::endl;
    std::cout << "Deserialized Data value: " << deserializedData->n << std::endl;
    return 0;
}
