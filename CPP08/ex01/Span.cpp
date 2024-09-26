/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmohamm <shmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:27:41 by shmohamm          #+#    #+#             */
/*   Updated: 2024/09/25 12:45:37 by shmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span& other) : _vector(other._vector), _size(other._size) 
{
    *this = other;
}

Span::~Span() {}

Span& Span::operator=(const Span& other) 
{
    if (this == &other) return *this;

    this->_size = other._size;
    this->_vector = other._vector;

    return *this;
}

void Span::addNumber(int n) 
{
	if (this->_vector.size() == this->_size)
		throw Span::SpanIsFullException();
	this->_vector.push_back(n);
}

void Span::addNumber(IT begin, IT end) 
{
	if (this->_vector.size() + std::distance(begin, end) > this->_size)
		throw Span::SpanIsFullException();
	this->_vector.insert(this->_vector.end(), begin, end);
}

unsigned int Span::shortestSpan() const 
{
	if (this->_size < 2 || this->_vector.size() < 2) 
		throw Span::SizeTooSmallException();

	std::vector<int> copy(this->_vector);
	std::sort(copy.begin(), copy.end());
	int ret = *(copy.begin() + 1) - *copy.begin();
	for (IT i = copy.begin(); i != copy.end() - 1; ++i) 
	{
		if (*(i + 1) - *i < ret) 
			ret = *(i + 1) - *i;
	}
	std::cout << "Shortest span: ";
	return ret;
}

unsigned int Span::longestSpan() const 
{
	if (this->_size < 2 || this->_vector.size() < 2) 
		throw Span::SizeTooSmallException();

	int longest = *std::max_element(this->_vector.begin(), this->_vector.end())
		- *std::min_element(this->_vector.begin(), this->_vector.end());
	std::cout << "Longest span: ";
	return longest;
}

std::size_t Span::size() const 
{
	return this->_size;
}

const char* Span::SpanIsFullException::what() const throw() 
{
	return "Span is full, unable to add another number";
}

const char* Span::SizeTooSmallException::what() const throw() 
{
	return "No span to find, size of span is either 1 or less than 1";
}