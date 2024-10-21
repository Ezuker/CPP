/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:50:47 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/26 12:50:13 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _maxLength(N)
{
}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &rhs)
{
	this->_value = rhs._value;
	this->_maxLength = rhs._maxLength;
	return (*this);
}

void	Span::addNumber(int number)
{
	if (this->_value.size() >= this->_maxLength)
		throw std::length_error("Array already full!");
	this->_value.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	unsigned int	min_dist = 0xFFFFFFFF;

	if (this->_value.size() <= 1)
		throw std::logic_error("Vector size must be superior to 1");

	std::vector<int> cpy = this->_value;
	std::sort(cpy.begin(), cpy.end());
	
	for (std::vector<int>::iterator it = cpy.begin(); it != cpy.end() - 1; ++it) {
		unsigned int diff = *(it + 1) - *it;
		if (diff < min_dist) {
			min_dist = diff;
		}
	}

	return min_dist;
}

unsigned int	Span::longestSpan()
{
	if (this->_value.size() <= 1)
		throw std::logic_error("Vector size must be superior to 1");
	
	std::vector<int> cpy = this->_value;
	std::sort(cpy.begin(), cpy.end());
	return (cpy.back() - cpy.front());
}
