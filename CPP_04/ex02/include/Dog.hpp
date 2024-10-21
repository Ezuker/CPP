/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:46:51 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 16:12:23 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Dog : public AAnimal
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

	private:
		Brain	*_brain;
};
