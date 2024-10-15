/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:17:20 by shmohamm          #+#    #+#             */
/*   Updated: 2024/10/14 12:17:21 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cmath>
#include <cstdlib>

class BitcoinExchange 
{
	private:
		std::map<std::string, double> map;

	public:	
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copyTemplate);
		BitcoinExchange &operator=(BitcoinExchange const &initTemplate);
		~BitcoinExchange();
		void	fillMap(std::string const &fileName);
		void	readInFile(std::string const &fileName);
		void	readLine(std::string const &line);
		double	getExRate(std::string const &date) const;
		bool	isValidDate(std::string const &date) const;
		bool	isValidValue(double value) const;
		bool	isLeapYear(int year) const;
};

#endif