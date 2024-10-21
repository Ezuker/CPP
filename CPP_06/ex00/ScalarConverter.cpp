/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:49:47 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/10 21:41:27 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy)
{
	*this = cpy;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return (*this);
}

static	void	displayChar(long double data)
{
	char	c;
	int		real_part;

	real_part = static_cast<int>(data);
	if (data > 255 || data < 0 || data - real_part != 0)
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	c = static_cast<char>(data);
	if (c >= 32 && c <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
	// else if (c >= 0 && c <= 127)
	else
		std::cout << "char: Non displayable" << std::endl;
}

static void	displayInt(long double data)
{
	int	i;

	if (data > 2147483647 || data < -2147483648 || std::isnan(data))
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	i = static_cast<int>(data);
	std::cout << "int: " << i << std::endl;
}

static void	displayFloat(long double data)
{
	float	f;
	int		real_part;

	real_part = static_cast<int>(data);
	f = static_cast<float>(data);
	std::cout << "float: ";
	if (isinf(f) && f > 0)
		std::cout << "+";
	if (f - real_part == 0)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;
}

static void displayDouble(long double data)
{
	double	d;
	int		real_part;

	real_part = static_cast<int>(data);
	d = static_cast<double>(data);
	std::cout << "double: ";
	if (isinf(d) && d > 0)
		std::cout << "+";
	if (d - real_part == 0)
		std::cout << d << ".0" << std::endl;
	else
		std::cout << d << std::endl;
}

static	bool isdigit(std::string str)
{
	int nbDots = 0;
	if (str[0] != '-' && str[0] != '+' && !std::isdigit(str[0]))
		return (false);
	for (unsigned int i = 1; i < str.length() - 1; i++)
	{
		if (str[i] == '.')
			nbDots++;
		else if (!std::isdigit(str[i]))
			return (false);
	}
	if (str[str.length() - 1] != 'f' && !std::isdigit(str[str.length() - 1]))
		return (false);
	if (nbDots > 1)
		return false;
	return (true);
}

void	ScalarConverter::convert(std::string str)
{
	long double	data = std::strtold(str.c_str(), NULL);
	if (str.length() != 1 && !isdigit(str))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return;
	}
	if (str.length() == 1 && !std::isdigit(str[0]))
		data = str[0];
	displayChar(data);
	displayInt(data);
	displayFloat(data);
	displayDouble(data);
}
