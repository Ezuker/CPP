/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:08:51 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/02 00:39:00 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	public:
		//Constructors
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &rhs);
		~Bureaucrat();

		//Operators
		Bureaucrat &operator=(const Bureaucrat &rhs);

		//Public member functions
		void			incrementGrade();
		void			decrementGrade();

		//Getters
		std::string		getName() const;
		unsigned int	getGrade() const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too high");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too low");
				}
		};

	private:
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif