/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:08:22 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/06 17:18:01 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;

			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			Bureaucrat b("Bureaucrat", 1);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;

			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			Bureaucrat b("Bureaucrat", 1);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;

			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			Bureaucrat b("Bureaucrat", 1);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;

			rrf = someRandomIntern.makeForm("random", "Bender");
			Bureaucrat b("Bureaucrat", 1);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error happened: " << e.what() << std::endl;
		}
	}
}
