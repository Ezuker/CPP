/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:08:22 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/06 16:18:01 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		try 
		{
			std::cout << "Trying with John" << std::endl << std::endl;
			Bureaucrat John("John", 2);
			
			std::cout << John << std::endl; 
			John.incrementGrade();
			std::cout << John << std::endl;
			John.incrementGrade();
			John.incrementGrade();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << "Trying with Patrick" << std::endl << std::endl;
			Bureaucrat Patrick("Patrick", 149);

			std::cout << Patrick << std::endl;
			Patrick.decrementGrade();
			std::cout << Patrick << std::endl;
			Patrick.decrementGrade();
			Patrick.decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << "Trying with Bob" << std::endl << std::endl;
			Bureaucrat Bob("Bob", 5614);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << "Trying with Peter" << std::endl << std::endl;
			Bureaucrat Peter("Peter", 0);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
