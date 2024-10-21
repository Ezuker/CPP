/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:12:27 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/03 20:23:06 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iomanip>

class Bureaucrat;

class Form
{
	public:
		//Iniatializers
		Form(std::string name, unsigned int signGrade, unsigned int execGrade);
		Form(const Form &cpy);
		~Form();

		//Operatorss
		Form	&operator=(const Form &rhs);

		//Member function
		void	beSigned(Bureaucrat &person);

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

std::ostream	&operator<<(std::ostream &o, const Form &rhs);
#endif
