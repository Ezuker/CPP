/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:20:25 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/27 16:50:55 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(const Dog &rhs) : Animal::Animal(rhs)
{
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->type = rhs.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "WAF!" << std::endl;
}
