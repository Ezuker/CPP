/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:43:07 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/28 19:54:44 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		//Constructor
		Animal();
		Animal(std::string type);
		Animal(const Animal &rhs);
		virtual ~Animal();

		//Operators
		Animal	&operator=(const Animal &rhs);
		
		//Methods
		virtual void	makeSound() const;

		//Accessors
		std::string	getType() const;
		void		setType(const std::string type);

	protected:
		std::string	type;
};
