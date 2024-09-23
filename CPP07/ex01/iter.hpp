/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:08:19 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/23 11:26:11 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void iter(T *array, size_t size, void(*f)(T const &)) 
{
    for (size_t i = 0; i < size; i++) 
	{
        f(array[i]);
    }
}
