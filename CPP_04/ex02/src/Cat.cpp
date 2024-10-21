/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:20:23 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/28 18:35:41 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal::AAnimal("Cat")
{
	std::cout << "Constructor Cat" << std::endl;
	this->_brain = new Brain;
}

Cat::Cat(const Cat &rhs) : AAnimal::AAnimal(rhs)
{
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->type = rhs.type;
	this->_brain = rhs._brain;
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor Cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU" << std::endl;
}
