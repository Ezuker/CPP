/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:04:41 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/07 17:23:59 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

AForm	*Intern::newRobot(Bureaucrat &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::newPresident(Bureaucrat &target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::newShrubbery(Bureaucrat &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(std::string formName, std::string targetName)
{
	std::string	formType[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm		*(Intern::*func[3])(Bureaucrat &target) = {&Intern::newRobot, &Intern::newPresident, &Intern::newShrubbery};

	Bureaucrat	*target = new Bureaucrat(targetName, 150);
	AForm		*form = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (formType[i] == formName)
			form = (this->*func[i])(*target);
	}
	delete target;
	if (!form)
		throw std::exception();
	return (form);
}
