/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:46:49 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 15:35:18 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		//Constructor
		Cat();
		Cat(const Cat &rhs);
		~Cat();

		//Operator
		Cat	&operator=(const Cat &rhs);

		//Methodsle
		void	makeSound() const;
};
