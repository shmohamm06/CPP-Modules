/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:37:24 by shmohamm          #+#    #+#             */
/*   Updated: 2024/10/14 12:37:30 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <fstream>
# include <sstream>
# include <algorithm>
# include <cctype>

class RPN 
{
	private:
		std::stack<int> stack;

	public:
		RPN();
		RPN(RPN const &copyTemplate);
		RPN &operator=(RPN const &initTemplate);
		~RPN();
		int	readArg(std::string const &expression);
		bool isOperator(char c);
		void calculate(char op);
};

#endif