/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:09:56 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/25 11:16:30 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>
#include <exception>

template< typename T>
int	easyfind(T &container, int c)
	{
		typename T::iterator i = std::find(container.begin(), container.end(), c);
		if (i == container.end())
			throw std::runtime_error("Number not found");
		return *i;
	}

#endif