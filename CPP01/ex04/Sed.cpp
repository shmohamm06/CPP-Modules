/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:27:08 by shmohamm          #+#    #+#             */
/*   Updated: 2024/08/27 14:00:08 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed() {}

Sed::~Sed() {}

int  Sed::replace(std::string filename,std::string s1, std::string s2)
{
	std::ifstream Infile;
	std::string line;
	std::size_t pos;

    Infile.open(filename.c_str());
	if (!Infile.is_open() || !Infile.good())
	{
		std::cout << "Error! Failed to open the file or does not exist." << std::endl;
		Infile.close();
        return (1);
	}
	std::ofstream Outfile((filename + ".replace").c_str(), std::ios::trunc);
	if (!Outfile.good())
	{
		std::cout << "Error! Invalid file." << std::endl;
		Infile.close();
		Outfile.close();
        return (1);
	}
	if (s1.length() > 0 && s2.length() > 0)
	{
		while (std::getline(Infile, line))
		{
			pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos = pos + s2.length();
			}
			Outfile << line << '\n';
		}
	}
	else
	{
		std::cout << "Error! Strings are invalid." << std::endl;
		Infile.close();
		Outfile.close();
		return (1);
	}
	Infile.close();
	Outfile.close();
	return (0);
}
