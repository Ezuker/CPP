/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:12:27 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/03 02:17:02 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iomanip>

class Bureaucrat;

class AForm
{
	public:
		//Iniatializers
		AForm(std::string name, unsigned int grade, unsigned int requiredGrade);
		AForm(const AForm &cpy);
		virtual ~AForm();

		//Operatorss
		AForm	&operator=(const AForm &rhs);

		//Member function
		virtual void	beSigned(Bureaucrat &person);
		virtual void	execute(Bureaucrat const &executor) const = 0;

		//Accessors
		std::string		getName() const;
		bool			getSigned() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecGrade() const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

std::ostream	&operator<<(std::ostream &o, const AForm &rhs);
#endif
