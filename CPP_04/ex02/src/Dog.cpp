/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:20:25 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/28 18:35:34 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal::AAnimal("Dog")
{
	std::cout << "Constructor Dog" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog(const Dog &rhs) : AAnimal::AAnimal(rhs)
{
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->type = rhs.type;
	this->_brain = rhs._brain;
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destructor Dog" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "WAF!" << std::endl;
}
