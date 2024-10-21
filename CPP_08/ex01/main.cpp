/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:50:38 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/14 17:31:57 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span array(5);

	array.addNumber(1);
	array.addNumber(1);
	array.addNumber(1);
	array.addNumber(1);
	array.addNumber(1);
	try
	{
		array.addNumber(1);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span secondArray(10);
		std::vector<int> test;

		test.push_back(1);
		test.push_back(3);
		test.push_back(6);
		test.push_back(2);

		secondArray.addNumber(test.begin(), test.end());
		// secondArray.addNumber(test.begin(), test.end());
		// secondArray.addNumber(test.begin(), test.end());
		// secondArray.addNumber(test.begin(), test.end());
		// secondArray.addNumber(test.begin(), test.end());
		// secondArray.addNumber(test.begin(), test.end());
		std::cout << secondArray.longestSpan() << std::endl;
		std::cout << secondArray.shortestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
