/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:49:45 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/06 11:59:35 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <stdlib.h>
# include <bits/stdc++.h>

class ScalarConverter
{
	public:
		static void	convert(std::string str);
	
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter	&operator=(const ScalarConverter &rhs);
		~ScalarConverter();
};
#endif
