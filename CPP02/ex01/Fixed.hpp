/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:10:25 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/30 10:15:05 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP
#define __FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
   public:
    Fixed(void);
    Fixed(const int a);
    Fixed(const float b);
    Fixed(const Fixed& other);
    Fixed &operator=(const Fixed &other);
    ~Fixed(void);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;

   private:
    int             _fpvalue;
    static const int _nbfb = 8;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed& i);
#endif