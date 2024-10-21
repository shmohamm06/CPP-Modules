/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:28:28 by shmohamm          #+#    #+#             */
/*   Updated: 2024/10/21 10:04:33 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename N, typename P>
PmergeMe<N, P>::PmergeMe() {}

template <typename N, typename P>
PmergeMe<N, P>::PmergeMe(PmergeMe const &) {}

template <typename N, typename P>
PmergeMe<N, P> &PmergeMe<N, P>::operator=(PmergeMe const &initTemplate) {
    if (this != &initTemplate) {}
    return *this;
}

template <typename N, typename P>
PmergeMe<N, P>::~PmergeMe() {}
