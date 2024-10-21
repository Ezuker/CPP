/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:44:11 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 14:35:55 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	public:
		//Constructor
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &rhs);
		virtual	~WrongAnimal();

		//Operators
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		
		//Methods
		void	makeSound() const;

		//Accessors
		std::string	getType() const;
		void		setType(const std::string type);

	protected:
		std::string	type;
};
