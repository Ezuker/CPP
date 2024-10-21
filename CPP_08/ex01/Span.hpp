/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:50:26 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/17 16:44:01 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <stdexcept>
# include <iostream>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &cpy);
		~Span();

		Span	&operator=(const Span &rhs);
		
		void			addNumber(int number);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		
		template <class Iterator>
		void			addNumber(Iterator it, Iterator ite)
		{
			if (this->_maxLength - this->_value.size() < (unsigned long int)std::distance(it, ite))
				throw std::length_error("Array can't add all of those numbers");
			std::copy(it, ite, std::back_inserter(this->_value));
		}
	private:
		std::vector<int>	_value;
		unsigned int		_maxLength;
};

#endif
