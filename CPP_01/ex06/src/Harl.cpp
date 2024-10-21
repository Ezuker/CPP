/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:32:03 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/09 16:47:16 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas";
	std::cout << " you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4];
	void		(Harl::*pointer_functions[4])();

	pointer_functions[0] = &Harl::debug;
	pointer_functions[1] = &Harl::info;
	pointer_functions[2] = &Harl::warning;
	pointer_functions[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	int i;
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break;
	}
	i++;
	switch (i)
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*pointer_functions[0])();
			std::cout << std::endl;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			(this->*pointer_functions[1])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*pointer_functions[2])();
			std::cout << std::endl;
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*pointer_functions[3])();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
