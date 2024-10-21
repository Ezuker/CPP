/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:08:22 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/06 17:02:47 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		try
		{
			std::cout << "Testing with Julien 10" << std::endl;
			Bureaucrat	Julien_sign("Julien", 10);

			PresidentialPardonForm	preForm(Julien_sign);
			RobotomyRequestForm		robotForm(Julien_sign);
			ShrubberyCreationForm	shrubberyForm(Julien_sign);
			Julien_sign.signForm(preForm);
			Julien_sign.signForm(robotForm);
			Julien_sign.signForm(shrubberyForm);

			Bureaucrat	supervisor_exec("Jules", 7);
			supervisor_exec.executeForm(preForm);
			supervisor_exec.executeForm(robotForm);
			supervisor_exec.executeForm(shrubberyForm);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std:: cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << "Testing with Julien 0" << std::endl;
			Bureaucrat	Julien_sign("Julien", 0);

			PresidentialPardonForm	preForm(Julien_sign);
			RobotomyRequestForm		robotForm(Julien_sign);
			ShrubberyCreationForm	shrubberyForm(Julien_sign);
			Julien_sign.signForm(preForm);
			Julien_sign.signForm(robotForm);
			Julien_sign.signForm(shrubberyForm);

			Bureaucrat	supervisor_exec("Jules", 5489);
			supervisor_exec.executeForm(preForm);
			supervisor_exec.executeForm(robotForm);
			supervisor_exec.executeForm(shrubberyForm);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std:: cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << std::endl << "Testing with Julien 150" << std::endl;
			Bureaucrat	Julien_sign("Julien", 150);

			PresidentialPardonForm	preForm(Julien_sign);
			RobotomyRequestForm		robotForm(Julien_sign);
			ShrubberyCreationForm	shrubberyForm(Julien_sign);
			Julien_sign.signForm(preForm);
			Julien_sign.signForm(robotForm);
			Julien_sign.signForm(shrubberyForm);

			Bureaucrat	supervisor_exec("Jules", 2);
			supervisor_exec.executeForm(preForm);
			supervisor_exec.executeForm(robotForm);
			supervisor_exec.executeForm(shrubberyForm);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std:: cerr << e.what() << std::endl;
		}
	}
}
