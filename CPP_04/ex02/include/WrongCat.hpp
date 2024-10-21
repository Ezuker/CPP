/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:08:36 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 16:12:34 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		//Constructor
		WrongCat();
		WrongCat(const WrongCat &rhs);
		~WrongCat();

		//Operator
		WrongCat  &operator=(const WrongCat &rhs);

		//Methods
		void	makeSound() const;
};
