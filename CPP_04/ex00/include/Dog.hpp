/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:46:51 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 15:35:22 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		//Constructor
		Dog();
		Dog(const Dog &rhs);
		~Dog();

		//Operator
		Dog	&operator=(const Dog &rhs);

		//Methods
		void	makeSound() const;
};
