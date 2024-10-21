/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:08:22 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/03 20:30:24 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	{
		try
		{
			Bureaucrat	John("John", 20);
			Form		salaryRaise("salary raise", 25, 5);
			Form		bePresident("Be president", 1, 1);

			John.signForm(salaryRaise);
			John.signForm(bePresident);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
}
