/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:10:25 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/30 10:11:08 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP
#define __FIXED_HPP

#include <iostream>
#include <typeinfo>

class Fixed
{
   public:
    Fixed(void);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed(void);

    int getRawBits(void) const;
    void setRawBits(int const raw);

   private:
    int             _fpvalue;
    static const int _nbfb = 8;
};

#endif