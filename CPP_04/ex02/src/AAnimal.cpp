/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:45:00 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 14:52:05 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("")
{
	std::cout << "Constructor Animal" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "Constructor Animal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
}

AAnimal::~AAnimal()
{
	std::cout << "Destruction Animal" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	AAnimal::setType(const std::string type)
{
	this->type = type;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}
