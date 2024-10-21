/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:51:42 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/03 21:07:54 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat &target) : AForm(target.getName(), 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm(cpy)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() <= this->getExecGrade())
		;
	else
		throw AForm::GradeTooLowException();
	if (this->getSigned() == true)
	{
		srand(time(0));
		int luck = std::rand();
		if (luck % 2 == 1)
			std::cout << this->getName() << " has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy has failed for " << this->getName() << "!" << std::endl;
	}
	else
		std::cout << "The form is not signed! Robotomy canceled" << std::endl;
}
