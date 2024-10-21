/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:32:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/07 16:01:51 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, unsigned int signGrade, unsigned int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &rhs) : _name(rhs._name), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade)
{
	*this = rhs;
}

Form::~Form()
{
}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

unsigned int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

unsigned int	Form::getExecGrade() const
{
	return (this->_execGrade);
}

void	Form::beSigned(Bureaucrat &person)
{
	if (person.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
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
