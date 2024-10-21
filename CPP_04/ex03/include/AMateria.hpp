/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:08:05 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/29 14:59:15 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		//Constructor
		AMateria();
		AMateria(std::string type);
		AMateria(const AMateria &rhs);
		virtual ~AMateria();

		//Operators
		AMateria	&operator=(const AMateria &rhs);

		//Accessors
		std::string const	&getType() const;
		void				setType(std::string type);

		//Member function
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string _type;
};
