/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:09:56 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/24 11:10:19 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

template< typename T>
int	easyfind(T &container, int c)
	{
		typename T::iterator it = std::find(container.begin(), container.end(), c);
		if (it == container.end())
			throw std::runtime_error("Not found");
		return *it;
	}
#endif