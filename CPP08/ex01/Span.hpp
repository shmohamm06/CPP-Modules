/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:24:34 by shmohamm          #+#    #+#             */
/*   Updated: 2024/10/02 11:14:26 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>

class Span 
{
	private:

		typedef std::vector<int>::iterator IT;
	
	public:

		Span(unsigned int n);
		Span(const Span& other);
		~Span();

		Span& operator=(const Span& other);

		void addNumber(int n);
		void addNumber(IT begin, IT end);

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		std::size_t size() const;
	
	private:

		Span();

		std::vector<int> _vector;
		std::size_t _size;
	
	public:

		class SpanIsFullException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class SizeTooSmallException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif