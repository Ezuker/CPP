/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:20:23 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/27 16:50:43 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
	std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat(const Cat &rhs) : Animal::Animal(rhs)
{
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->type = rhs.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU" << std::endl;
}
