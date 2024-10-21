/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:32:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/07 16:01:59 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, unsigned int signGrade, unsigned int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &rhs) : _name(rhs._name), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade)
{
	*this = rhs;
}

AForm::~AForm()
{
}

AForm	&AForm::operator=(const AForm &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

unsigned int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

unsigned int	AForm::getExecGrade() const
{
	return (this->_execGrade);
}

void	AForm::beSigned(Bureaucrat &person)
{
	if (person.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

std::ostream	&operator<<(std::ostream &o, AForm const &rhs)
{
	o << "+";
	o << std::setfill('-') << std::setw(21) << '+' << std::endl;
	o << std::setfill(' ');
	o << "|Form";
	o << std::setw(17);
	o << "|" << std::endl;
	o << "|";
	o << std::setw(21);
	o << "|" << std::endl;
	o << "|Name:";
	o << std::setw(14);
	if (rhs.getName().length() < 12)
		o << rhs.getName() << " |" << std::endl;
	else
		o << rhs.getName().substr(0, 11) + "." <<  " |" << std::endl;
	o << "|Signed:";
	if (rhs.getSigned() == true)
	{
		o << std::setw(14);
		o << "True |" << std::endl;
	}
	else
	{
		o << std::setw(14);
		o << "False |" << std::endl;
	}
	o << "|Sign grade:";
	o << std::setw(8);
	o << rhs.getSignGrade() << " |" << std::endl;
	o << "|Exec grade:";
	o << std::setw(8);
	o << rhs.getExecGrade() << " |" << std::endl;
	o << "+";
	o << std::setfill('-') << std::setw(21) << '+' << std::endl;
	return (o);
}
