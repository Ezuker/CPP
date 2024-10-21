/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:43:07 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/28 18:35:10 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	public:
		//Constructor
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &rhs);
		virtual	~AAnimal();

		//Operators
		AAnimal	&operator=(const AAnimal &rhs);
		
		//Methods
		virtual void	makeSound() const = 0;

		//Accessors
		std::string	getType() const;
		void		setType(const std::string type);

	protected:
		std::string	type;
};
