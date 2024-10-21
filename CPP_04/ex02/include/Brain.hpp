/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:23:07 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/27 18:22:47 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain 
{
	public:
		//Constructor
		Brain();
		Brain(const Brain &rhs);
		~Brain();

		//Operators
		Brain  &operator=(const Brain &rhs);

	protected:
		std::string ideas[100];
};
