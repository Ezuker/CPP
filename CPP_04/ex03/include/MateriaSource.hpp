/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:37:30 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/28 19:57:08 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
	public:
		//Constructor
		MateriaSource();
		MateriaSource(const MateriaSource &rhs); //deep copy to do
		~MateriaSource();

		//Operators
		MateriaSource	&operator=(const MateriaSource &rhs); //deep copy to do

		//Member functions
		virtual void		learnMateria(AMateria *);
		virtual AMateria	*createMateria(std::string const &type);

		//Accessors
		AMateria	*getSrc(int i) const;

	private:
		AMateria	*_src[4];
};
