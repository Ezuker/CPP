/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:17:35 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/11 10:51:06 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () : _name("")
{
}

Zombie::Zombie (std::string name) : _name(name)
{
}

Zombie::~Zombie ()
{
	if (this->_name == "")
		std::cout << "Zombie died again" << std::endl;
	else
		std::cout << this->_name << " died again" << std::endl;
}

void	Zombie::setName (std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName ()
{
	return (this->_name);
}

void	Zombie::announce (void)
{
	if (this->_name == "")
		std::cout << "Zombie: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
