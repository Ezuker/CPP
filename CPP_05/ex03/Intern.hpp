/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:04:39 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/07 16:59:25 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &cpy);
		~Intern();

		Intern	&operator=(const Intern &rhs);
		
		AForm	*makeForm(std::string formName, std::string targetName);
	
	private:
		AForm	*newRobot(Bureaucrat &target);
		AForm	*newPresident(Bureaucrat &target);
		AForm	*newShrubbery(Bureaucrat &target);
};
#endif
