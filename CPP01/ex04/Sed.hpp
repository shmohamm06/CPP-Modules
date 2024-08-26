/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:27:23 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/26 16:27:30 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
private:
    std::string _in;
    std::string _out;

public:
    Sed();
    ~Sed();

    static int  replace(std::string filename,std::string s1, std::string s2);
};

#endif